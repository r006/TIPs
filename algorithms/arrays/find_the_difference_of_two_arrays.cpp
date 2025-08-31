/*
Understanding
Compare 2 arrays nums1 and nums2 and return numbers in each array that are not common to each other

Match: 2 pointers

Plan
Sort arrays nums1 and nums 2 using stl function sort
remove any repeating elements (not necessary, increases time complexity)
Initialize 2 pointers, i - nums1 , j - nums2 
Declare 2 vectors answer1 and answer2

loop through every index in nums1 array
    test to see if number is repeated. If number is repeated, iterate
loop and compare index of nums1 to every index in nums2
if number is the same, exit loop
else increment j 
if not found, add num[i] to answer1 vector

Repeat for nums2
reset pointers = 0
loop through every index in nums2 array....

return answer1 and answer 2
*/


class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> answer1, answer2;
        int i = 0, j = 0;

            while (i < nums1.size()) {
                if (i > 0 && nums1[i] == nums1[i-1]) {
                    i++;
                    continue;
                }

                bool found = false;

                j = 0;
                while (j < nums2.size()) {
                    if (nums2[j] == nums1[i]) {
                        found = true;
                        break;
                    }
                    j++;
                }

                if (!found) {
                    answer1.push_back(nums1[i]);
                }
                
                i++;
            }
          
           i = 0;
           j = 0;
           
           while (j < nums2.size()) {
            if (j > 0 && nums2[j] == nums2[j-1]) {
                j++;
                continue;
            }

            bool found = false;

            i = 0;
            while (i < nums1.size()) {
                if (nums1[i] == nums2[j]) {
                    found = true;
                    break;
                }
                i++;
            }
            
            if (!found) {
                answer2.push_back(nums2[j]);
            }

            j++;
           }

        return {answer1, answer2};
    }
};