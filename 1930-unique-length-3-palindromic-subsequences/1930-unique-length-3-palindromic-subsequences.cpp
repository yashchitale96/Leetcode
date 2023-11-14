class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        int result = 0;

        for (char ch = 'a'; ch <= 'z'; ++ch) {
            int first = n, last = -1;

            for (int i = 0; i < n; ++i) {
                if (s[i] == ch) {
                    first = min(first, i);
                    last = max(last, i);
                }
            }

            if (first < last) {
                unordered_set<char> unique_chars;
                for (int i = first + 1; i < last; ++i) {
                    unique_chars.insert(s[i]);
                }
                result += unique_chars.size();
            }
        }

        return result;
    }
};
