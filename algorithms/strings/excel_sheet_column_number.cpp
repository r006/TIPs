/*

Convert title to interger based on A = 1, z = 26

Initialize int result to 0.
Loop through each character in the string 
    Convert the character to number .
    Multiply result by 26.
    Add the numeric value of the current character to result.

Return result.


*/


/*

Convert title to interger based on A = 1, z = 26

Initialize int result to 0.
Loop through each character in the string 
    Convert the character to number .
    Multiply result by 26.
    Add the numeric value of the current character to result.

Return result.


*/


class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        
        for (int i = 0; i < columnTitle.length(); i++) {
            int value = columnTitle[i] - 'A' + 1; 
            result = result * 26 + value;
        }
        
        return result;
    }
};
