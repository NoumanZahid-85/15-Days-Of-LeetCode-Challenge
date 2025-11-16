class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(128, -1);
        int maxLen = 0;
        int left = 0;
        
        for (int right = 0; right < s.length(); right++) {
            char currentChar = s[right];
            
            // If character seen before and within current window
            if (lastIndex[currentChar] >= left) {
                left = lastIndex[currentChar] + 1;
            }
            
            lastIndex[currentChar] = right;
            maxLen = max(maxLen, right - left + 1);
        }
        
        return maxLen;
    }
};