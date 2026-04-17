class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;
        for(const string& word:strs ){
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());
            anagramMap[sortedWord].push_back(word);
        }

        vector<vector<string>> result;
        for(auto& pair : anagramMap){
            vector<string>& group = pair.second;
            result.push_back(group);
        }
        return result;
    }
};
