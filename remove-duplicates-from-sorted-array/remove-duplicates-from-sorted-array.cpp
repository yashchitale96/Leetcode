class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int slow = 0, fast = 1;
        
        while(fast < n)
        {
            if(nums[slow] != nums[fast])
            {
                slow++;
                nums[slow] = nums[fast];
            }
            
            else fast++;
        }
        
        return slow+1;
    }
};