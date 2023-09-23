class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());

        int n = piles.size();
        int i = 0;
        int div = n / 3;

        int ind = 0,sum=0;
        while(div--)
        {
            ind = n-i-2;
            sum+=piles[ind];
            i+=2;
        }

        return sum;
    }
};