/*
Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

class Solution {
public:
    int lsub(string s){
        if( s.length() == 0 || s.empty())
            return 0;
        if(s.length() == 1)
            return 1;
        string c= "";
        string f(1,s.at(0));
        c.append(f);
        //cout << c ;
        for(int i =1; i<s.length() ; i++){
            
            string f1(1,s.at(i));
            
            if(c.find(f1) == -1){
                c.append(f1);
                //cout<<c;
            }
            else
                return c.length();
        }
        
        return c.length();
    }
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        for(int i =0; i< s.length() ; i++){
            string s1 = s.substr(i);
            int l  = lsub(s1);
            if(l>max)
                max = l;
        }
        return max;
    }
};
