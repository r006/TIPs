/*
input: nums []
output: answer[]

Test Case 1
Input: nums = [1,2,3,4]
prefix[1,1,2,6]
suffix [24,12,4,1]
answer = {1*24, 1*12, 2*4, 6*1]
Output: [24,12,8,6]

*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int pre =1;
       int suff =1;   
       vector <int> prefix={};
       vector <int> suffix={}; 
       vector <int> answer={};

        for (int i =0; i < nums.size(); i++){
            prefix.push_back(pre);
            pre *=nums[i];
        }

        for (int i=nums.size()-1; i>=0; i-- ){
            suffix.insert(suffix.begin(),suff);
            suff *= nums[i];
        }

        for (int i =0; i<prefix.size(); i++){
            answer.push_back(prefix.at(i)*suffix.at(i));
        }

        return answer;
    }

};
