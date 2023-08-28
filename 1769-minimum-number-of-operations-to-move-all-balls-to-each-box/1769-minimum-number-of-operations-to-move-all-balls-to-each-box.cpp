class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer;
        
        int i=0, j=0;
        int a = 0;
        
        while(i<boxes.size())
        {
            if(j<boxes.size())
            {
                if(boxes[j] == '1' && i!=j)
                {
                    a+=abs(j-i);
                }
                j++;
            }
            
            else
            {
                i++;
                j=0;
                answer.push_back(a);
                a=0;
            }
        }
        
        return answer;
        
    }
};