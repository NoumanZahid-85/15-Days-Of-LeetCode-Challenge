class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        // I have to sort array of string into lexicographical order.
        sort(strs.begin(), strs.end());
        // Now I have to pick first and last strings from array.
        string first = strs[0];
        string last = strs[strs.size()-1];
        // In while loop only compare the first and last strings and the middle cases will automatically be handled due to sorting.
        int i = 0;
        while(i < first.size() && i < last.size() && first[i]==last[i]){
            i++;
        }
        return first.substr(0,i);
    }
};