/*
2 Pointer
i at the start of array, j at the end of the array

Compare ith and jth line.
Choose the pointer whose position stores the shorter line and shift the pointer.
(Shifting the pointer decreases width but height remains the same)
Keep track of largest area
*/

class Solution {
public:
    int maxArea(vector<int>& height) {

        int i = 0;
        int j = height.size() - 1;
        int area, maxArea = 0;
        int width = j - i;

        while (width > 0) {
            if (height[i] <= height[j]) {
                area = height[i] * width;
                i++;
            } else {
                area = height[j] * width;
                j--;
            }

            if (area > maxArea) {
                maxArea = area;
            }
            width = j - i;
        }

        return maxArea;
    }
};
