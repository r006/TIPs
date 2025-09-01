/*

Understanding:
Given an array of characters, check for consecutively repeating characters. Replace with one occurence of the character followed by the number of times (as a charcter) the character was repeated.

Match:
2 pointer approach, sliding window apporach

Plan:
Initialize 2 pointers i - writing pointer, j - reading pointer to 0
While the reading pointer is less than length of string,
    assign compressChar to the character at the jth index. 
    Initialize variable count to keep track of the number of occurences of the character compressChar
    loop through the array if char at index j = compressChar
    increment count and j
resassign compressChar to next char in array, increment i
check of count > 1
    if true, convert count to string using to_string() stl function. Splits number into individual digits
    writes to the original array chars[] at the write index the charcter at countStr[k]
    increments the writing index

return the writing index,i

*/

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0; 
        int j = 0;  
        while (j < chars.size()) {
            char compressChar = chars[j];
            int count = 0;
            
            while (j < chars.size() && chars[j] == compressChar) {
                count++;
                j++;
            }
            
            chars[i] = compressChar;
            i++;
            
            if (count > 1) {
                string countString = to_string(count);
                
                for (int k = 0; k < countString.length(); k++) {
                    chars[i] = countString[k];
                    i++;
                }
            }
        }
        
        return i;
    }
};
