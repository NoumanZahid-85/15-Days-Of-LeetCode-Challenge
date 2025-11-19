class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        };
        int count[26] = {0};
        for(char ch: s){
            count[ch-97]++;
        };
        for(char ch: t){
            count[ch-97]--;
        };
        for(int val: count){
            if(val != 0) 
                return false; 
        }return true;
        
        
    };
};