1class Solution {
2public:
3    int mirrorDistance(int n) {
4        int actual=n;
5        int rev=0;
6        while(n!=0){
7            int digit=n%10;
8            rev=rev*10+digit;
9            n=n/10;
10        }
11        int result=abs(actual-rev);
12        return result;
13    }
14};