class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_map<char,int>count;
        int start = 0 ;
        for(int i=0;i<s.size();i++)
        {
            count[s[i]]++;
            while(count[s[i]]>1)
            {
                count[s[start]]--;
                start++;
            }
            ans = max(ans,i-start+1);
        }
        return ans;
    }
};