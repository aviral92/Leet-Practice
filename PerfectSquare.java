//Given a positive integer num, write a function which returns True if num is a perfect square else False.
class Solution {
    public boolean isPerfectSquare(int num) {
        if(num == 1)
            return true;
        for(int i =0; i<=num/2; i++)
        {
            if(i*i == num)
                return true;
        }
        return false;
    }
}
