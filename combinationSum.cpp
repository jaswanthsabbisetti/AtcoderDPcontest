class Solution {
public:
    vector<vector<int>>ans;
    vector<int>path;
    void fun(vector<int>candidates,vector<int>path,int sum,int target,int idx)
    {
        if(sum>target)return ;
        if(sum==target)
        {
            ans.push_back(path);
            return ;
        }
        else
        {
        for(int i = idx;i<candidates.size();i++)
        {
            sum+=candidates[i];
            path.push_back(candidates[i]);
            fun(candidates,path,sum,target,i);
            path.pop_back();
            sum-=candidates[i];
        }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        fun(candidates,path,0,target,0);
        return ans;
    }
};