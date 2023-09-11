class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string ans="";
        string res="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
            {
                cnt++;
                ans+=s[i];
            }

            else
            {
                cnt--;
                ans+=s[i];
            }

            if(cnt == 0)
            {
                ans.erase(0,1);
                ans.erase(ans.size()-1,1);
                res+=ans;
                ans="";


            }
        }
        return res;
    }
};