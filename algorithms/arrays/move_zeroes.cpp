/*
NOT EFFECIENT

Test if ith number in array is 0
If 0, pushback number to the end of array
remove 0 from ith postion

void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums[i] == 0) {
                nums.push_back(nums[i]);
                nums.erase(nums.begin() + i);
            }
        }
    }
};

2 POINTERS
i - scan array, pos - zero to replace

test if ith postion == 0 
swap nums[i] and nums[pos]
increment pos 

*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int pos = 0;

        for (int i = 0; i < size; i++) {
            if (nums[i] != 0){
                swap(nums[i], nums[pos]);
                pos ++;
            }
        }
    }
};
