class Solution {
public:
    string reverseWords(string s) {
         string ans = "";
    string v;

    for(int i=s.size()-1 ; i>=0; i--)
    {
        if(s[i] != ' ')
        {
            ans+=s[i];
        }
        
        else if(s[i] == ' ' && !ans.empty())
        {
            reverse(ans.begin(),ans.end());
            v+=ans;
            v+=" ";
            ans.erase();
        }
    }

    if(!ans.empty())
    {
        reverse(ans.begin(),ans.end());
        v+=ans;
    }
    
    if(v[0] ==' ')
    {
        v.erase(0,1);
    }

    else if(v[v.size()-1] == ' ')
    {
        v.erase(v.size()-1,1);
    }
        
        return v;
    }
};