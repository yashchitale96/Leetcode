class Solution {
public:
   void f(vector<vector<int>>&a, vector<int>&nums, int l ,int r)
    {
        //base case
        if(l==r)
        {
            a.push_back(nums);
            return;
        }
        
        for(int i=l;i<=r;i++)
        {
            swap(nums[l],nums[i]);
            
            f(a,nums,l+1,r);
            
            swap(nums[l],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>a;
        f(a,nums, 0, nums.size()-1);
        return a;
        
        
    }
};