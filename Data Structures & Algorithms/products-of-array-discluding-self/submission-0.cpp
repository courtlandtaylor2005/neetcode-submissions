class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        int zeroCount = 0;

        // Calculate product of all non-zero elements and count zeros
        for (int num : nums) {
            if (num != 0)
                product *= num;
            else
                zeroCount++;
        }

        vector<int> result(n, 0); // Initialize result vector with zeros n = size 0 = fills array with 0

        for (int i = 0; i < n; ++i) {
            if (zeroCount > 1) {
                result[i] = 0; // More than one zero → all results will be 0
            } else if (zeroCount == 1) {
                // Only one zero → only the zero's position gets the product
                result[i] = (nums[i] == 0) ? product : 0;
            } else {
                // No zeros → divide total product by current number
                result[i] = product / nums[i];
            }
        }

        return result;
    }
};