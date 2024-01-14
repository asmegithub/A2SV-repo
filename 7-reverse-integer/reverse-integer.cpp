class Solution {
public:
    int reverse(int x) {
        if (x <= INT_MIN||x>=INT_MAX) return 0; // Handle special case where x is out of rnge directly.
        if(x<0) return -1*reverse(-1*x);//handle negstive numbers;
        int pop,rev=0;
        while(x>0){
            pop=x%10;
            x/=10;
            if(rev>INT_MAX/10) return 0;
            rev=rev*10+pop;
        }
        return rev;

    }
};