class Solution {
public:
    string maximumOddBinaryNumber(string s) {
         sort(s.begin(),s.end(),greater<int>());
    int n = s.size()-1;
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '1' && s[i+1] == '0')
        {
            swap(s[i],s[n]);
            break;
        }
    }

    return s;
    }
};