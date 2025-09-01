/*

Understanding
Remove 1 element from an array containing only 0s and 1s and find the largest number of consecutive 1s that exists in array.

Match: sliding windows aproach

Plan    
Initialize left, zeroCount, maxLen to 0
Loop thorugh nums array and determine total number of zeroes in array. Store number in zeroCount
While more than 1 zero is present in the array,     
    increment left pointer
    If number is 0, decrement zeroCount
compare maxLen to the size of consecutive 1s, If consecutives 1s more that maxLeng, assign right -left to maxLen
Return maxLen

*/

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, zeroCount = 0, maxLen = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) {
                zeroCount++;
            }
            
            while (zeroCount > 1) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }

            maxLen = max(maxLen, right - left);
        }
        
        return maxLen;
    }
};
