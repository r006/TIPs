/*

1. Find length of both strings 
2. Find the greatest common divisior of the 2 lengths
3. Extract base
4. Using a for loop  check if each character matches the repeating pattern of base in str1 and str2 
5. If both pass, return base; else return ""

*/

#include <numeric> // for gcd

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.length();
        int len2 = str2.length();
        
        // Find gcd of lengths
        int baselen = gcd(len1, len2);

        // Base
        string base = "";
        for (int i = 0; i < baselen; i++) {
            base += str1[i]; 
        }
        
        // Check for str1
        for (int i = 0; i < len1; i++) {
            if (str1[i] != base[i % baselen]) {
                return "";
            }
        }
        
        // Check for str2
        for (int i = 0; i < len2; i++) {
            if (str2[i] != base[i % baselen]) {
                return "";
            }
        }
        
        return base;
    }
};
