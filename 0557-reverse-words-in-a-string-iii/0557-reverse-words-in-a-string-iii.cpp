class Solution {
public:
    string reverseWords(string s) {
        int st = 0;
        for(int i=0; i<=s.size(); i++)
        {
            if(s[i] == ' ' || s[i] == '\0')
            {
                int index = i;
                int e = index-1;

                while(st <= e)
                {
                    swap(s[st], s[e]);
                    st++;
                    e--;
                }
                    st = index+1;
            }
        }

        return s;
    }

};