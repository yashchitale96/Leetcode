class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> count;
        
        for(int i=0; i<nums.size(); i++)
        {
            count[nums[i]]++;
        }
        
        int ans = 0;
        for(auto it: count)
        {
            if(it.second == 1)
            {
                ans = it.first;
            }
        }
        
        return ans;
        
    }
};