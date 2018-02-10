//Write a function that takes a string as input and returns the string reversed.
class Solution {
public:
    string reverseString(string s) {
        int j= s.length() -1;
        for (int i =0; i<s.length()/2 ; i++){
            char t = s[i];
            s[i] = s[j];
            s[j] = t;
            j--;
        }
        return s;
    }
};
