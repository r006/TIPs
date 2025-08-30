/*
Search for needle string in haystack string. Return the index of the first letter in the first occurence of the needle string

Sliding window approach

Initialize 2 pointers equal to 0, i - keeps tack of postion in haystack string, j - keeps track of position in neddle string
Loop through ever character in the haystack array where needle can fit. Ensure haystack is >= needle.
If the ith charcter matches the first character of the needle string (j = 0), enter loop and increment j else exit loop and incremnt i
compare the ith + j position of haystack with jth position of needle
If j = length of needle, return the ith position
Else return -1

*/


class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        while (i <= (haystack.length() - needle.length()) && (haystack.length() >= needle.length())) {
            int j =0;
            while (haystack[i+j] == needle[j] && j < needle.length()){
                j++;
            }
            if (j == needle.length()){
                return i;
            }
            i++;
        }
        return -1;
    }
};
