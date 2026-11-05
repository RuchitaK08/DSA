class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long num = 0;

        // Skip leading spaces
        while(i < s.size() && s[i] == ' ') {
            i++;
        }

        // Check sign
        if(i < s.size() && (s[i] == '+' || s[i] == '-')) {
            if(s[i] == '-') {
                sign = -1;
            }
            i++;
        }

        // Extract digits
        while(i < s.size() && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');

            if(num * sign > INT_MAX) return INT_MAX;
            if(num * sign < INT_MIN) return INT_MIN;

            i++;
        }

        return num * sign;
    }
};