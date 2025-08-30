/*

Clean string and check if it reads the same forward and backward.

2 pointer question

Clean string function:
    Loop through each character in string
    Remove any non alphanumeric characters using !isalnum() (#include <cctype>) and erase(position, number to erase) C++ function
    Convert each character to lowercase using tolower() C++ function

isPalindrome fucntion:
    Declare 2 pointers front = 0, back = size of array - 1
    While back > front (converge to midpoint of array), compare if characters are the same 
    if characters are not same, return false 
    if charcters are same,increment front, decrement back 
    return true
*/

class Solution {
public:
    void cleanString(string& s) {

        for (int i = 0; i < s.length();) {
            if (!isalnum(s[i]) ) {
                s.erase(i, 1);
            } else {
                s[i] = tolower(s[i]);
                i++;
            }
        }
    }

    bool isPalindrome(string s) { 
        cleanString(s);
        cout << s<< endl;
        int front = 0, back = s.length() - 1; 
        while (back > front){
            if (s[front] == s[back]){
                front++;
                back --;
            } else {
                return false;
            }
        }
        return true;

    }
};
