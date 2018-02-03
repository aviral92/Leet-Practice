class Solution {
public:
    int reverse(int x) {
        int neg ;
        int n = x;
        int oldN= 0;
        int newN = 0;
        if(n>INT_MAX)
            return 0;
        while(n != 0){
            newN = newN*10;
            if(oldN - (newN/10)!=0)
              return 0;
            newN = newN + (n%10);
            
            n= n/10;
            cout<<"n = "<<n;
            cout<<"newN = "<<newN;
            cout<<"max = "<<INT_MAX;
            oldN= newN;
        }
        
        return newN;
    }
};
