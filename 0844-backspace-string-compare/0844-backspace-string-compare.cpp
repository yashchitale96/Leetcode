class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> st;
        
        string a = " ", b = " ";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != '#')
            {
                st.push(s[i]);
            }
            
            else if(!st.empty())
            {
                st.pop();
            }
        }
        
        while(!st.empty())
        {
            a+=st.top();
            st.pop();
        }
        
        
        for(int i=0; i<t.size(); i++)
        {
            if(t[i] != '#')
            {
                st.push(t[i]);
            }
            
            else if(!st.empty())
            {
                st.pop();
            }
        }
        while(!st.empty())
        {
            b+=st.top();
            st.pop();
        }
        
       
        return a==b;
        
    }
};