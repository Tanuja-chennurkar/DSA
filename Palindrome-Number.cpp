class Solution {
public:
    bool isPalindrome(int x) {
        long long reversed=0;
        int temp=x;
        if(x<0) return false;
        while(x!=0){
            int digit= x %10;
            reversed= reversed *10+ digit;
            x=x/10;
        }
        return temp==reversed;
    }
};