/*

Understanding: 
Find the index where the sum of numbers on the right side = the sum of numbers on the left side

Match?

Plan:
initalize unt i = 0, int total=0, int left=0, int right=0
loop from first to last and add all the nums in the range
Alternatively use C++ stl function accumulate

Start from left size of array, i = 0
Loop while i< size of array
    find sum of right side = total -right- nums[i]
if sum of left side = sum of right side 
return i 
Add nums[i] to left side 

return -1

*/

class Solution {
public:
        
    int pivotIndex(vector<int>& nums) {
        int total = 0;
      
        for ( int i = 0; i < nums.size(); i++){
            total += nums[i];
        }
        int left = 0, right = 0;
        int i = 0;
        while (i < nums.size()){
            right = total - left - nums[i];
            if (left == right){
                return i;
            }
            left += nums[i];
            i++;
        }
        return -1;
    }
};