class Solution {
public:
    bool isAnagram(string s, string t) {
        //create freq array
        vector<int> freq(26,0);
        
        //if length are different
        if(s.size() != t.size())
        {
            return false;
        }
        
        //store freq of character in s and t
        for(int i=0; i<s.size();i++)
        {
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
            
        }
        
        //checking if freq of character is 0
        
        for(int i=0; i<26; i++)
        {
            if(freq[i] != 0)
            {
                return false;
            }
        }
        
        return true;
    }
};