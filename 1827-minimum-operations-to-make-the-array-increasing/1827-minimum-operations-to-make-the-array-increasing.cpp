class Solution {
public:
    int minOperations(vector<int>& nums) {
        int sum=0,temp=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(i+1 < nums.size())
            {
                if(nums[i] >= nums[i+1])
                {
                    temp = nums[i]-nums[i+1]+1;
                    sum+=temp;
                    nums[i+1] = nums[i+1]+temp;
                }
            }
        }
        return sum;
    }
};