class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";

        // Keep only lowercase letters and digits
        for (char c : s) {
            //checks if the char is a-z or 0-9)
            if (isalnum(c)) {
                //Converts all char to lower case
                filtered += tolower(c);
            }
        }

        string reversed = filtered;
        //reverse string
        reverse(reversed.begin(), reversed.end());

        return filtered == reversed;
    }
};