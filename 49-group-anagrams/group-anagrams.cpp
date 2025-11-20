class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;

        for(string &s: strs){
            int count[26] = {0};

            for(char c: s){
                count[c - 'a']++;
            }
            // Convert frequency array into a hashable string key.
            string key;
            for(int i = 0; i < 26; i++){
                key += to_string(count[i]) + '#';
            }

            mp[key].push_back(s);
        }
        for(auto &entry : mp){
            result.push_back(entry.second);
        }
        return result;
    }
};