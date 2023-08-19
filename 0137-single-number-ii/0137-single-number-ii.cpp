class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        int i=0;
        sort(nums.begin(),nums.end());
        int ans = 0;
        while(i < size)
        {
            int count = 1;
            for(int j=i+1; j<size; j++)
            {
                if(nums[i] == nums[j])
                {
                    count++;
                }
            }
           
            if(count == 1)
            {
                ans = nums[i];
            }

            i = i + count;
        }

        return ans;
    }
};