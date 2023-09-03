class Solution {
public:
    bool getSum(int n,int size)
    {
        vector<int>ch;
        int sum = 0;
        int cnt = 0;
        while (n != 0) {
            sum = sum + n % 10;
            cnt++;
            if(cnt == size/2)
            {
                ch.push_back(sum);
                cnt = 0;
                sum = 0;
            }

            n = n / 10;
        }
        return (ch[0] == ch[1]);
}
  int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for(int i=low;i<=high;i++)
        {
            string s = to_string(i);
            int size = s.size();
            if(size%2==0)
            {
                if(getSum(i,size))
                {
                    cnt++;
                }
               
                
            }
        }
        
        return cnt;
    }
};