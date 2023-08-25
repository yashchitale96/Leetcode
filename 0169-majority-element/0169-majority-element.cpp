class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2;
        map<int,int>count;
        int ans = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            count[nums[i]]++;    
        }
        
        for(auto it: count)
        {
            if(it.second > n)
            {
                ans = it.first;
            }
        }
        
        return ans;
    }
};