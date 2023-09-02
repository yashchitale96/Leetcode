class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> occ(26,0);
        
        for(char ch : chars)
        {
            occ[ch-'a']++;
        }
        int ans = 0;
        for(auto word : words)
        {
            auto temp = occ;
            bool res = 1;
            for(char ch : word) {
                if(temp[ch - 'a'] == 0){
                    res = 0;
                    break;
                }
                temp[ch - 'a']--;
            }
            
            if(res)
                ans += word.length();
        }
        return ans;
    }
};