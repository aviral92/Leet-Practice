/*
Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0;
        if((haystack=="" && needle == "") || needle==""){
            return 0;
        }
        for (int i =0; i<haystack.length();i++){
            if(haystack[i]== needle[j])
            {
                j++;
                if(j==needle.length())
                    return i-j+1;
            }
            else{
                i=i-j;
                j=0;
            }
        }
        return -1;
    }
};
