/*

Understanding: Perform simple binary addition on strings

Match?

Plan:
initialize result to "", i to size of a -1, j to size of b-1, carry =0, sum =0
Loop while there are still charcters in string and carry != 0
Using stoi() function at smallestAth and smallestBth postion find sum using the logic:
    0+0 = sum = 0, carry = 0
    1+0 = sum = 1, carry = 0
    reset carry
    If sum = 2 
        1+1= sum = 0, carry = 1
    If sum = 3
        1+1+1= sum = 1, carry = 1
    insert sum to result

decrement i, j
*/

#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        
        int i = a.length()-1;
        int j = b.length()-1;
        int sum = 0;
        int carry = 0;
        vector <int> result={};


        while(i >=0 ||j >=0||carry!=0){
            sum = stoi(a[i]) + stoi(b[i]) + carry;
            carry = 0;
            if (sum == 2){
                sum = 0; 
                carry = 1; 
            }
            if (sum == 3){
                sum = 1; 
                carry = 1; 
            }

            i--;
            j--;

            result.insert(sum);
        }

        string output(result.begin(), result.end());
        return output; 


    }
};