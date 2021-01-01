class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int end = 0;
        if(s.size()==0)return "";
        int ans= 1;
        for(int i = 0  ; i< s.size();i++)
        {
            int k = i;
            int count = 1;
            while(i-count>=0 && i + count < s.size() && (s[i-count]==s[i+count]))
            {
                count++;
            }
            if((i+count - (i-count)-1 )>ans)
            {
                ans = i + count - (i-count)-1;
                start = i-count+1;
                end = i+count-1;
            }
            count = 0;
            int c1  = i;
            int c2  = i+1;
            while(c1>=0 && c2<s.size() && s[c1]==s[c2])
            {
                c1--;
                c2++;
            }
            if(c2-c1-1>ans)
            {
                ans = c2-c1-1;
                start =c1+1;
                end = c2-1;
            }
        }
        string ret = "";
        for(int i = start;i<=end;i++)
        {
        ret.push_back(s[i]);
        }
        return ret;
    }
};