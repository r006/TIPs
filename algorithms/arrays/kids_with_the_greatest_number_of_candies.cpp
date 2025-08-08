/*
1. Find kid with the most candies in candies array -> max
2. Compare max with candies in candies array + extra candies
3. If ith kid candies+ extraCandies) >= max, return true
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
          int max =0;
          vector <bool> results ={};
          for (int i = 0; i < candies.size(); i++)
          {
            if (candies.at(i) > max)
                max = candies.at(i);
          }
          for (int i = 0; i < candies.size(); i++)
          {
            if ((candies.at(i) + extraCandies) >= max)
            {
                results.push_back(true);
            }
            else
            {
                results.push_back(false);

            }      
        }
        return results;
    }

};
