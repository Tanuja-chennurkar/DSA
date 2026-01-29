1class Solution {
2public:
3    int index;
4    int findTheWinner(int n, int k) {
5        index =helper(n,k);
6        return index+1;
7    }
8    int helper(int n,int k){
9        if(n==1) return 0;
10        index=helper(n-1,k);
11        index=(index+k)%n;
12        return index;
13    }
14};