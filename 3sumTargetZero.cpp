class Solution {
public:
    vector<vector<int>>ans;
    void getPairs(vector<int>nums,int i,int start,int end){
        int target = -1*nums[i];
        while(start<end){
            if(nums[start]+nums[end]==target){
                ans.push_back(vector<int>{nums[i],nums[start],nums[end]});
                while(start<end && nums[start]==nums[start+1]) start++;
                while(start<end && nums[end] == nums[end-1]) end--; 
                start++;
                end--;
            }
            else if(nums[start]+nums[end]>target){
                end--;
            }
            else
            {
                start++;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,vector<pair<int,int>>>mp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
        if(i==0 || (i>0 && nums[i]!=nums[i-1]))  getPairs(nums,i,i+1,nums.size()-1);   
        }
        return ans;
    }
};