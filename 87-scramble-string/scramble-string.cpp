class Solution {
public:
    unordered_map<string, bool> mp;
    bool solve(string s1, string s2) {
        if (s1 == s2) return true;
        if (s1.length() != s2.length()) return false;

        string key = s1 + "_" + s2;
        if (mp.find(key) != mp.end()) return mp[key];

        int n = s1.length();
        bool result = false;

        for (int i = 1; i < n; i++) {  // i starts from 1 to n-1
            // Case 1: Not swapped
            bool notSwapped = solve(s1.substr(0, i), s2.substr(0, i)) &&
                              solve(s1.substr(i), s2.substr(i));

            // Case 2: Swapped
            bool swapped = solve(s1.substr(0, i), s2.substr(n - i)) &&
                           solve(s1.substr(i), s2.substr(0, n - i));

            if (notSwapped || swapped) {
                result = true;
                break;
            }
        }

        return mp[key] = result;
    }

    bool isScramble(string s1, string s2) {
        mp.clear();
        return solve(s1, s2);
    }
};