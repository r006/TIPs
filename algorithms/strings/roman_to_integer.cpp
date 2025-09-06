/*
Understanding:
Convert roman numerals to integer for the symbols I, V, X, L, C, D, M
Consider instances where I placed before V, X can be placed before L, C can be placed before D

Match?

Plan:
Check function: For each character in the string s, compare the character to I, V, X, L, C, D, M and return the corresponding value.
Iniitalize total to 0
Loop through every character in string array and find its value using check function.
Store the value of the next character in int next once less than the length of the string

If current is less than string, subtract current from total else add current to total.
return total 

*/

class Solution {
public:
    // Helper function to convert single Roman character to integer
    int value(char c) {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        if (c == 'M') return 1000;
        return 0; // fallback
    }

    int romanToInt(string s) {
        int total = 0;

        for (int i = 0; i < s.length(); i++) {
            int current = value(s[i]);
int next;
if (i + 1 < s.length()) {
    next = value(s[i + 1]);
} else {
    next = 0;
}
            // If current < next, subtract, else add
            if (current < next) {
                total -= current;
            } else {
                total += current;
            }
        }

        return total;
    }
};

