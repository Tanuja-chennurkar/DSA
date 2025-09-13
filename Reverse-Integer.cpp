class Solution {
public:
    int reverse(int x) {
        long reversed=0;
        while(x!=0){
            int digit=x%10;
            x/=10;
            
            if(reversed>INT_MAX/10){
                return 0;
            }
            if(reversed<INT_MIN/10){
                return 0;
            }
            reversed=reversed*10+digit;
        }
        return int(reversed);
    }
};