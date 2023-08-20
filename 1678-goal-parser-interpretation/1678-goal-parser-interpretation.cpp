class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i=0; i<command.size(); i++)
        {
            if(i+1 < command.size())
            {
                if(command[i] == '(' && command[i+1] == ')')
                {
                    ans.push_back('o');
                }

                if(command[i] == 'a' && command[i+1] == 'l')
                {
                    ans.push_back('a');
                    ans.push_back('l');
                }
            }

        
            if(command[i] == 'G')
            {
                ans.push_back('G');
            }
        }
            return ans;
    }
};