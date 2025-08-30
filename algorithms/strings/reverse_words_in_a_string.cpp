/*

Reverse each word in sentence without changing the order of the words

2 pointer approach, stringReverse function


Declare variable startOfWord to track the start of each word. 
Assign to 0 initially. 
Declare 2 pointers front = space, back = position of the next space -1 
Create a string reverse function that passes string s, front and back
While back > front (converge to midpoint of array), use swap function to swap s[front] and s[back] 
increment front, decrement back

Loop through every character in string 
If character is a space, the characters before make a word. 
Set front to previous last space 
Set back to index before the space
Use string reverse function 
Assign startOfWord to index after space 

If pointer is at last charcter of string 
Set front to previous last space 
Set back to index before the space 
Use string reverse function 

*/

class Solution {
public:
    void stringRev(string &s, int front, int back) {
        while (back > front) {
            swap(s[front], s[back]);
            front++;
            back--;
        }
    }

    string reverseWords(string s) {
        int startOfWord = 0;
        int front, back;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                front = startOfWord;
                back = i - 1;
                stringRev(s, front, back);
                startOfWord = i + 1;
            }
            if (i == s.length() - 1) {
                front = startOfWord;
                back = i;
                stringRev(s, front, back);
            }
        }
        return s;
    }
};
