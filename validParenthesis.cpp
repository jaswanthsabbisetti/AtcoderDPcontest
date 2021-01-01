class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto c: s)
        {
            if(c=='(' || c=='{' || c=='[')
            {
                st.push(c);
            }
            else
            {
                if(c==')')
                {
                    if(st.empty())return false;
                    if(st.top()!='(')return false;
                   st.pop();
                }
                 if(c=='}')
                {
                    if(st.empty())return false;
                    if(st.top()!='{')return false;
                   st.pop();
                }
                 if(c==']')
                {
                    if(st.empty())return false;
                    if(st.top()!='[')return false;
                   st.pop();
                }
            }
        }
        if(!st.empty())return false;
        return true;
    }
};