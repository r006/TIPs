/*
Understanding:
Convert the integer into a column number by treating the columns as base 26. After z-26, another column of letters is introduced

Plan:
declare empty string result
While columnNumber >0
    subtract 1 from columnNumber
     divide the columnNumber by 26
    convert the result to letter using ascii
    Add to back of result string
    Find remainder = columnNumber modulus 26
    Convert the remainder to a letter using ascii
    Add to back of the result string

*/

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        
        while (columnNumber > 0) {
            columnNumber--; 
            int remainder = columnNumber % 26;
            char letter = 'A' + remainder;
            result = letter + result;
            columnNumber = columnNumber/26;
        }
        
        return result;
    }
};