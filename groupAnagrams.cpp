class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto c: strs)
        {
            string temp = c;
            sort(c.begin(),c.end());
            mp[c].push_back(temp);
        }
        vector<vector<string>>ans;
        for(auto c: mp)
        {
            ans.push_back(c.second);
        }
        return ans;
    }
};