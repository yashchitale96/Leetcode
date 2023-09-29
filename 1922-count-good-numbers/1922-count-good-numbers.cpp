#define mod 1000000007;

class Solution {
public:
    long long power(long long x, long long y)
    {
        //base case
        if(y == 0) return 1;
        
        //if y is even
        long long ans = power(x, y/2);
        ans = ans*ans;
        ans = ans%mod;
        
        //if y is odd
        if(y%2 !=0)
        {
            ans = ans*x;
            ans = ans%mod;
        }
        
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long odd = n/2;
        long long even = (n/2)+(n%2);
        
        long long val1,val2;
        
        val1 = power(5,even);
        val2 = power(4,odd);
        
        return (val1*val2)%mod;
        
        
    }
};