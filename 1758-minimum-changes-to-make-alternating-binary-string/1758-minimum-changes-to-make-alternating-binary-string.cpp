class Solution {
public:
    int minOperations(string s) {
        // start with 0
        int start0 = 0;
        for(int i=0; i<s.size();i++)
        {
            if(i%2==0 && s[i]=='1')
            {
                start0++;
            }
            
            else if(i%2!=0 && s[i]=='0')
            {
                start0++;
            }
        }
        
        //start with 1
        int start1 = 0;
        for(int i=0; i<s.size();i++)
        {
            if(i%2==0 && s[i]=='0')
            {
                start1++;
            }
            
            else if(i%2!=0 && s[i]=='1')
            {
                start1++;
            }
        }
        
        return min(start0,start1);
    }
};