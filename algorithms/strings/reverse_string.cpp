/*

Utilize 2 pointer approach and swap function

Declare 2 pointers front = 0, back = size of array - 1
While back > front (converge to midpoint of array), swap s[front] and s[back]
increment front, decrement back
return s


*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int front = 0;
        int back = s.size()-1;

        while (back > front){
            swap(s[front],s[back]);
            front++;
            back --;
        }

    }
};
