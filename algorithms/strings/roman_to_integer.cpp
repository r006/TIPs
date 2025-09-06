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
    int romanToInt(string s) {
        
    }
};