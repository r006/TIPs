/*

Understanding:
For every 2k window:
    Reverse the first k letters, 
    Leave the second k letter,
If not enough numbers for another 2k window, 
    If remaing numbers is greater than or equal to k but less than 2k, reverse the first k letters   
    If remianing number is less than k, reverse all letters 

Match: 
Sliding window approach, 2 pointer approach 

Plan:
Substring Reverse Function:
Declare 2 pointers front = 0, back = size of array - 1
While back > front (converge to midpoint of array), swap s[front] and s[back]
increment front, decrement back

reverseStr function:
Initalize pointer i to 0
Loop through every character in the string
    If at least k characters are left in the string, 
    call the substring reverse function to reverse the k characters of the string. Leave the remaining as original.
    Else (less than k characters are left) reverse all the raminiang characters
Shift sliding window to a next 2k block 
Return s

*/



class Solution {
public:
    
    void substringRev (string &s, int front, int back) {
        while (back > front) {
            swap(s[front], s[back]);
            front++;
            back--;
        }
    }
    
    
    string reverseStr(string s, int k) {
        int i = 0;
        while (i < s.length()){
            if (i+k <= s.length()){           
                substringRev(s, i, i + k-1);
            } else {
                substringRev (s, i , s.length()-1);
            }
            i = i + (2*k);
        }
        return s;
    }
};
