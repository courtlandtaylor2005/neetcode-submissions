class Solution {
public:

    // Encodes a list of strings into a single string
    string encode(vector<string>& strs) {
        string s = ""; // Initialize an empty string to store the encoded result

        // Loop over each string in the input vector
        for (const string& str : strs) {
            // For each string, append its length, a delimiter '#', and the string itself
            s += to_string(str.size()) + "#" + str;
        }

        return s; // Return the complete encoded string
    }

    // Decodes a single string back into a list of strings
    vector<string> decode(string s) {
        vector<string> result; // This will hold the decoded strings
        int i = 0; // Initialize index to start scanning the encoded string

        // Loop until we've processed the entire encoded string
        while (i < s.size()) {
            int j = i; // Start a secondary pointer at the current position

            // Move j forward to find the '#' delimiter
            while (s[j] != '#') {
                j++;
            }

            // Extract the substring from index i to j (excluding j),
            // which gives us the length of the next string
            int length = stoi(s.substr(i, j - i)); 

            // Extract the actual string based on the length we just parsed
            result.push_back(s.substr(j + 1, length));

            // Move i forward to the start of the next encoded string segment
            i = j + 1 + length;
        }

        return result; // Return the list of decoded strings
    }
};
