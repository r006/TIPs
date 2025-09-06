/*
Understanding:
Convert a number to hexadecimal. If the number is negative, two’s complement form. Each hex digit represents 4 bits.

Match:
Excel column or binary conversion questions: repeatedly divide the number by the base (16) and track the remainder.

Plan:
If the number is 0, return "0".
Create a string "0123456789abcdef" to map values 0–15 to hex characters.
Convert num to an unsigned int to handle negative numbers.
Initialize an empty string result.
While the number > 0:
    Find remainder of number divided by 16.
    Prepend the corresponding hex character to result.
    Divide the number by 16.
Reverse result
Return result.

*/


class Solution {
public:
    string toHex(int num) {
        
    }
};