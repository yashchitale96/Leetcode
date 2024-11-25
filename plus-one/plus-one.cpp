#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1; // Start with the carry as 1 (to add one to the number)
        
        for (int i = n - 1; i >= 0; i--) {
            digits[i] += carry; // Add the carry to the current digit
            if (digits[i] < 10) {
                carry = 0; // No carry needed, stop further processing
                break;
            } else {
                digits[i] = 0; // If the digit is 10, set it to 0 and propagate the carry
                carry = 1;
            }
        }
        
        if (carry == 1) {
            digits.insert(digits.begin(), 1); // If there's a leftover carry, insert it at the beginning
        }
        
        return digits;
    }
};
