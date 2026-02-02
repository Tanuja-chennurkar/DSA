1class Solution {
2public:
3    int climbStairs(int n) {
4        if(n==0||n==1) return 1;
5        int temp=0;
6        int a=0;
7        int b=1;
8        for(int i=0;i<n;i++){
9            temp=b;
10            b=a+b;
11            a=temp;
12        }
13        return b;
14    }
15};