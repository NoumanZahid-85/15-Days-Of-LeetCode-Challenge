class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++){ // opening brackets case
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }else{ // closing brackets case
                if(st.size() == 0){
                    return false;
                }
                if(st.top() == '(' && s[i] == ')' ||
                st.top() == '{' && s[i] == '}' ||
                st.top() == '[' && s[i] == ']'){
                    st.pop();
                }else{ // no match
                    return false;
                }
            }

        }return st.size() == 0;
    }
};