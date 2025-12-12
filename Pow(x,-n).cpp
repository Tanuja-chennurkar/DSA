1class Solution {
2public:
3    double myPow(double x, int n) {
4        if(x==1) return 1.00;
5        if(n==1) return x;
6        if(n==0) return 1.00;
7        double result=1.0;
8        long long binaryform=n;
9        
10        if(binaryform<0){
11            x=1/x;
12            binaryform=-binaryform;
13        }
14        
15        while(binaryform>0){
16            if(binaryform%2==1){
17                result*=x;
18            }
19            x*=x;
20            binaryform/=2;
21        }
22        return result;
23    }
24};