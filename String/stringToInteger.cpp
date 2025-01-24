#include <iostream>
#include <string>
#include <climits>
using namespace std;

class Solution {
public:
    int myAtoi(string s) 
    {
        int i = 0;
        int sign = 1;  // Default sign is positive
        long ans = 0;

        // Step 1: Ignore leading whitespaces
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // Step 2: Check for optional '+' or '-' sign
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Step 3: Convert digits to integer
        while (i < s.length() && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');

            // Step 4: Handle overflow and underflow
            if (ans * sign > INT_MAX) {
                return INT_MAX;
            }
            if (ans * sign < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        // Step 5: Return the final result with the appropriate sign
        return (int)(ans * sign);
    }
};

int main() {
    Solution solution;
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    int result = solution.myAtoi(input);
    cout << "Converted integer: " << result << endl;

    return 0;
}
