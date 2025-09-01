/*

Understanding:
Input an interger array nums and int k. Find 2 numbers in nums array whose sum equals k and remove them from array. Keep repeating porcees untill no more sum pairs can be found. Retrun the number of operations done onto nums array

Match:
2 pointer apporach

Plan
Sort array using sort stl function
initalize left pointer to 0, right pointer to size of nums -1, noOfOperations to 0
While left < right (make sure the 2 pointers dont meet/cross)
find the sum of the numbers at the left and right poisiton
if the sum is equal to k, increment noOfOperations, increment left, decrement right.
If sum < k, increment left
if sum > k , decrement right
return noOfOperations



*/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size() - 1;
        int noOfOperations = 0;

        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == k) {
                noOfOperations++;
                left++;
                right--;
            } else if (sum < k) {
                left++;
            } else {
                right--;
            }
        }
        return noOfOperations;
    }
};
