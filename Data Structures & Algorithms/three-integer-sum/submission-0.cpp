class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //create a new vector to store the result
        vector<vector<int>> result;
        //sort list to make finding duplicate easy
        sort(nums.begin(), nums.end());
        //loop for num of size
        for (int i = 0; i < nums.size(); i++) {
            //Skips duplicate i values
            if (i > 0 && nums[i] == nums[i - 1]) continue;  
            //Makes to variables left starts after i and right starts at end of the array
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];  
                //if the sum is less than 0 we increase 1 to find a bigger number
                if (sum < 0) {
                    left++;
                //if the sum is greater than 0 we decrease right to find a lesser number
                } else if (sum > 0) {
                    right--;
                //if its 0 add them to the new vector
                } else {
                    result.push_back({nums[i], nums[left], nums[right]});

                    while (left < right && nums[left] == nums[left + 1]) left++;   // Skip duplicates
                    while (left < right && nums[right] == nums[right - 1]) right--; // Skip duplicates

                    left++;
                    right--;
                }
            }
        }

        return result;  
    }
};