/*
Error! - Time limit exceeded

outer loop - start of the k contigous terms
    loop from 0 to n - kth term

        inner loop - find average of k consecutive terms
        sum += nums[i]
        avg/k

    if avg > max
        max = avg


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg = -1e9;
        int n = nums.size();

        for (int pos = 0; pos <= n - k; pos++) {
            double sum = 0;
            for (int i = pos; i < pos + k; i++) {
                sum += nums[i];
            }
            double avg = sum / k;
            if (avg > maxAvg) {
                maxAvg = avg;
            }
        }
        return maxAvg;
    }
};


Solution 2:


loop 1 - find sum of k nums

loop 2 
    sum = sum - ith element + k+ith element
    if sum > maxSum
        maxSUm = sum 

average = maxSum / k 

*/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;

        for (int i = 0; i < k; i++){
            sum += nums[i];
        }
        double maxSum = sum;
        for (int i = k; i < nums.size(); i++){
            sum += nums[i];
            sum -= nums[i-k];

            if (sum > maxSum) {
                maxSum = sum;
            }
        }

        double avg = maxSum/k;
        return avg;
    }
};


