class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int globalsum  = nums[0];
        int currsum =0;
        int sum =nums[0];
        for(int i = 1;i<nums.size();i++)
        {
            int c = nums[i];
            sum = max(c,sum+c);
            globalsum = max(globalsum,sum);
        }
        return globalsum;
    }
};