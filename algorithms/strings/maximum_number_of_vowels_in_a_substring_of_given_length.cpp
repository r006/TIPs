/*

Understanding
Find the maximum number of vowels in k elements of string s 

Match
Sliding window appraoch

Plan
Create checkForVowels function:
    create a vector containing all vowels
    initalize noOfVowels to 0
    loop through each letter of string s
    compare each letter of string to each letter of vowel vector.
    if a letter is a vector, increment noOfVowels
    return no of vowels

maxVowels function:
    initialize i = 0, max =0 
    loop through each letter of string s - length of substring k
    call on checkForVowels function. Pass  s, index i and k
    if noOfVowels is greater than max, assign max to noOfVowels
    increment i
    return noOfVowels
*/


class Solution {
public:
    
    int checkForVowels(string s, int first, int k){
        
        int noOfVowels = 0;
        vector <char> vowels ={'a','e','i','o','u'};
        for (int i=first; i<first +k; i++){
            for (int j = 0; j<vowels.size(); j++){
                if (s[i] == vowels[j]){
                    noOfVowels ++;
                }
            }
        }

        return noOfVowels;
    }
    
    
    int maxVowels(string s, int k) {

        int i = 0, max = 0;
        int noOfVowels;
        while ( i <= (s.length()-k)){
            noOfVowels = checkForVowels( s, i, k);
            if (noOfVowels > max){
                max = noOfVowels;
            }
            i++;
        }

        return max;
    }
};