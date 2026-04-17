class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //converts the array into a hash set
        unordered_set<int> mySet(nums.begin(), nums.end());
        //Creates longest to keep track of the longest streak
        int longest = 0;
        //iterate through every unique element in the hash set
        for (int num : mySet) {
            // Only start counting if the num is the first in the sequence
            if (!mySet.count(num - 1)) {
                int currentNum = num;
                //starts the streak
                int currentStreak = 1;
                //As long as the current num + 1 is in set kepp counting
                while (mySet.count(currentNum + 1)) {
                    currentNum++;
                    currentStreak++;
                }
                //Sets longest as the largest current streak
                longest = max(longest, currentStreak);
            }
        }
        return longest;
    }
};

