//Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

class Solution {
public:
    
    bool hasAlternatingBits(int n) {
        int a,b;
        if(n%2 == 0)
            a=0;
        else
            a=1;
        while((n/2)!=0){
            n=n/2;
            b=a;
            a = n%2;
            if(a==b)
                return false;
        }
        if(a== (n/2))
            return false;
        return true;
    }
};
