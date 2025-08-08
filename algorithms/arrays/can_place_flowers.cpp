/*
If ith-1 and ith +1 is equal to zero, then new flower can be planted at ith location
Edge cases:
0th position, no ith-1: i == 0 OR i-1==0
last postion, no ith+1: i == flowerbed.size() OR i+1 ==0
*/

class Solution {
public:
    bool canPlaceFlowers(vector<int> flowerbed, int n) {
        for (int i =0; i<flowerbed.size(); i++){
            if (flowerbed[i]==0) // Empty Spot
            {
                if ((i == 0 || flowerbed[i-1] ==0) &&                  //Edge Case 1
                (i==flowerbed.size()-1||flowerbed[i+1]==0))            //Edge Case 2
                {
                    flowerbed[i] =1;
                    n --;
                }
            }
        
        if (n <= 0)
            return true;
        }
    
        return false;
    }
};
