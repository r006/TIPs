/*
1. Identify the vowels in the string - list vowels ['A','a','E','e','I','i','O','o','U','u']
2. Store the position of the vowel (i) and vowel (j) in 2d list
3. Swap vowels
*/


class Solution {
public:
    string reverseVowels(string s) {
        // vector <int> vowels = {65, 69, 73,79,85, 97, 101, 105, 111, 117}; ASCII 
        vector <char> vowels ={'A','a','E','e','I','i','O','o','U','u'};
        vector <int> pos;

        for (int i =0; i<s.length(); i++){
            for (int j = 0; j<vowels.size(); j++){
                if (s[i] == vowels[j]){
                   pos.push_back(i);
                }
            }
        }

        int head = 0;
        int tail = pos.size() - 1;

        while (head <= tail) {
            swap(s[pos[head]], s[pos[tail]]);
            head++;
            tail--;
        }

        return s;
    }
};
