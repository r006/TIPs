/*
Understanding 
The differnce between the nth term and n +1th term is the net gain/loss in altitude. The inital altitude is 0. Find the highest altitude attained.

Match? - loop


Plan
initialize highest altitude = 0, current altitude = 0 
loop through the gain array and find sum of net gain through out the array
Compare current height to maximum height
    if current height is greater than maximum height, assign current height to maximum height.
Return maximum height
*/


class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0;
        int currentHeight = 0;

        for (int i =0; i < gain.size(); i ++){
            currentHeight += gain[i];
            if (currentHeight > highest){
                highest  = currentHeight;
            }
        }

    return highest;
    }
};