class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        //range for for loop num:nums range for num
        for(int num : nums){
            //Counts each time a number appearsa and stores it
            count[num]++;
        }
        //creates a vector that stores a pair of intergers. First one Frequency and the next one the array
        vector<pair<int,int>> arr;\
        //Loops through the range for count. P = Pair from array
        for(const auto& p : count){
            //Pushes the pair into the new array. It's reverse because we need the frequency first befor the number
            arr.push_back({p.second,p.first});
        }
        //Sorts the array from decending order
        sort(arr.rbegin(),arr.rend());
        //Creates a vector that stores k
        vector<int> res;
        for(int i = 0; i < k ; i++){
            //Gets the number of the highest frequency
            res.push_back(arr[i].second);
        }
        return res;

    }
};
