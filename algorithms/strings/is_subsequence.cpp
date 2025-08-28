/*
Compare both arrays 

2 pointers: i for s string, j for t string 
if s[i] = t[j], increment i,j match
else increment j only
if match == size of s, return true

*/


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i= 0;
        int j =0;
        int match =0;

        for(j = 0; j < t.length(); j++){
            if (s[i]==t[j]){
                match ++;
                i++;
            } 
        }

        if (match == s.length()){
            return true;
        }else return false;
    }
};
