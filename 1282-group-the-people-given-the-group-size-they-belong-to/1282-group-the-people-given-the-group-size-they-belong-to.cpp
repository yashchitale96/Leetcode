class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& nums) {
        set<int> s;
        
        for(int i=0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        auto it = s.begin();
        vector<int> a;
        vector<vector<int>> ans;
        for(int i=0; i<s.size(); i++)
        {
            int count = 0;
            for(int j=0; j<nums.size();j++)
            {
                if(*it == nums[j])
                {
                    a.push_back(j);
                    count++;
                    if(count == *it)
                    {
                        ans.push_back(a);
                        a.clear();
                        count = 0;
                    }
                }
            }
            it++;
        }
        return ans;
    }
};