#include <string>
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged ="";
        int length = max(word1.length(), word2.length());
        for (int i =0; i<length; i++){
            if (i<word1.length()){
                merged += word1[i];
            }
             if (i<word2.length()){
                merged += word2[i];
            }
        }
        return merged;
    }
};
