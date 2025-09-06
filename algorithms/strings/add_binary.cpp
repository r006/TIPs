/*
Understanding: Perform simple binary addition on strings

Match?

Plan:
initialize result to "", i to size of a -1, j to size of b-1, carry =0, sum =0
Loop while there are still charcters in string and carry != 0
assign sum to pervious carry

Convert character at smallestAth and smallestBth postion to integer and find sum using the logic:
decrement i, j

    0+0 = sum = 0, carry = 0
    1+0 = sum = 1, carry = 0
    If sum = 2 
        1+1= sum = 0, carry = 1
    If sum = 3
        1+1+1= sum = 1, carry = 1

insert character equivalent of sum 

*/


class Solution {
public:
    string addBinary(string a, string b) {
        
        int i = a.length()-1;
        int j = b.length()-1;
        int sum = 0;
        int carry = 0;
        vector <int> result={};


        while(i >=0 ||j >=0||carry!=0){
  sum = carry;
            
            if (i >= 0){
                sum += (a[i] - '0');
                i--;
            }
            
            if (j >= 0){
                sum += (b[j] - '0');
                j--;
            }
            
            carry = 0;
            if (sum == 2){
                sum = 0;
                carry = 1;
            }
            if (sum == 3){
                sum = 1;
                carry = 1;
            }
            
            result.insert(result.begin(),sum + '0');
        }
                 return string(result.begin(), result.end());
      
    }
};