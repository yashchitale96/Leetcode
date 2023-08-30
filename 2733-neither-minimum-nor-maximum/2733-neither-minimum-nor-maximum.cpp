class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0; i<nums.size(); i++)
        {
            maxi = max(maxi,nums[i]);
            mini = min(mini, nums[i]);
        }
        int ans = -1;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] != maxi && nums[i] != mini)
            {
                ans = nums[i];
            }
        }
        
        return ans;
    }
};