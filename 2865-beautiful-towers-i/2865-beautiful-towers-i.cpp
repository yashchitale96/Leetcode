class Solution {
public:
    long long maximumSumOfHeights(vector<int>& m) {
        int ind = 0; 
        int n = m.size(); 
        long long ans = 0; 
        

        
        for(int i=0;i<n;i++)
        {
            long long res = 0;
            int temp = m[i]; 

            
            for(int j=i; j>=0; j--)
            {
                temp = min(temp, m[j]); 
                res = res + temp; 
            }

            

            temp = m[i]; 

          
            for(int j = i+1; j<n; j++)
            {
                temp = min(temp, m[j]); 
                res = res + temp; 
            }

            ans = max(ans, res); 
        }

        return ans; 
    }
};
