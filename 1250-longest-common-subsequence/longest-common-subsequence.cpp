class Solution {
public:
    int table[1001][1001];
    int solve(string& s1,string& s2, int i, int j){
        if(i >= m || j >= n){
            return 0;
        }
        if(table[i][j] != -1){
            return table[i][j];
        }
        if(s1[i] == s2[j]){
            return table[i][j] = 1 + solve(s1, s2, i+1, j+1);
        }
        else{
            return table[i][j] = max(solve(s1, s2, i, j+1), solve(s1, s2, i+1, j));
        }

    }
    int m, n;
    int longestCommonSubsequence(string s1, string s2) {
        m = s1.length();
        n = s2.length();
        memset(table, -1, sizeof(table));
        return solve(s1, s2, 0, 0);
    }
};