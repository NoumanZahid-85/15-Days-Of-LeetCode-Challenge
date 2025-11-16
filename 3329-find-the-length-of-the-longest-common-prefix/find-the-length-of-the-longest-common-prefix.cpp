class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> prefixes;
        int maxLen = 0;
        
        // Store all prefixes from arr1
        for(int num : arr1) {
            string s = to_string(num);
            string prefix = "";
            
            for(char c : s) {
                prefix += c;
                prefixes.insert(prefix);
            }
        }
        
        // Check prefixes from arr2
        for(int num : arr2) {
            string s = to_string(num);
            string prefix = "";
            
            for(char c : s) {
                prefix += c;
                if(prefixes.find(prefix) != prefixes.end()) {
                    maxLen = max(maxLen, (int)prefix.length());
                } else {
                    break;  // No longer prefix match
                }
            }
        }
        
        return maxLen;
    }
};