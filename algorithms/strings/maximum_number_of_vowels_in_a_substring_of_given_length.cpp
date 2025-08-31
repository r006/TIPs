/*

Understanding
Find the maximum number of vowels in k elements of string s 

Match
Sliding window appraoch

Plan

!-----Not Effecient----!
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



!-----Effecient----!

    Create checkForVowels function:
    compare each letter of string to each letter of vowel letter using if statement.
    if a letter is a vector, return true
    else return false
    
    maxVowels function:
    initialize i = 0, max =0, noOfVowels = 0

    loop thorugh first k letters of string s
    check number of vowels using checkForVowels function
    assign noOfVowels to max
    
    Using sliding window, where i is begiinnnign and i + k is end of window
    Shift window by 1 letter to right

    if the first letter of the previous windows was a vowel, decrement noOfVowels
    if the new letter of the current window is a vowel, increment noOfVowels
    if noOfVowels is greater than max, assign max to noOfVowels
   
    return max

*/

class Solution {
public:
    
    bool checkForVowels(char c){
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                return true;
            }
        
        return false;
    }
    
    
    int maxVowels(const string &s, int k) {

        int i = 0, max = 0, noOfVowels = 0;

         for (int i = 0; i < k && i < s.length(); i++){
            if (checkForVowels(s[i])){
                noOfVowels++;
            }
        }
        max = noOfVowels;
        
        for (int i = k; i < s.length(); i++){
            if (checkForVowels(s[i-k])) noOfVowels--; 
            if (checkForVowels(s[i])) noOfVowels++;   
            if (noOfVowels > max) max = noOfVowels;
        }

        return max;
    }
};
