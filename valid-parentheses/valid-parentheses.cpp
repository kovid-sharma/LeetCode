class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' or s[i]=='[' or s[i]=='{')
                st.push(s[i]);
            else if(s[i]==')' and !st.empty() and st.top()=='('){
                st.pop();
                continue;
            }
            else if(s[i]==']' and !st.empty() and st.top()=='['){
                st.pop();
                continue;
            }
            else if(s[i]=='}' and !st.empty() and st.top()=='{'){
                st.pop();
                continue;
            }
            else return false;
                
        }
        if(st.empty())
        return true;
        return false;
    }
};