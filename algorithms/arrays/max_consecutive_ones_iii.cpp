/*

Understanding:
Find the longest number of consecutive 1s in nums array by flipping k 0s to 1s

Match:
Sliding window approach, 1493. Longest Subarray of 1's After Deleting One Element

Plan:
initalize left, right, zeroCount, maxlength to 0
loop through all elements of nums array
    if num at right index is 0, increment zeroCount
while zeroCount is less than k, check if at left index is 0
    If true, decrement zeroCount else increment left
compare maxLength to the size of consecutive 1s, If consecutives 1s is more that maxLength, assign right -left to maxLength
Return maxLength

*/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right = 0;
        int zeroCount = 0;
        int maxLength = 0;

        while (right < nums.size()) {
            if (nums[right] == 0) {
                zeroCount++;
            }

            while (zeroCount > k) {  
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }

            maxLength = max(maxLength, right - left+1);
            right++;
        }

        return maxLength;
    }
};
