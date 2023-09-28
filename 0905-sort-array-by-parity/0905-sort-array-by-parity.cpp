class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even;
        vector<int>odd;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2 ==0)
            {
                even.push_back(nums[i]);
            }
            
            else
            {
                odd.push_back(nums[i]);
            }
        }
        
        vector<int> ans;
        for(auto it : even)
        {
            ans.push_back(it);
        }
        
        for(auto it : odd)
        {
            ans.push_back(it);
        }
        return ans;    
    }
};