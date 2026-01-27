1class Solution {
2public:
3    bool ispossible(vector<int> &piles,int totalhr,int speed){
4        long currenthr=0;
5        for(int i: piles){
6            currenthr=currenthr+i/speed;
7            if(i%speed!=0) currenthr++;
8            
9        }
10        if(currenthr<=totalhr) return true;
11        else return false;
12    }
13    int minEatingSpeed(vector<int>& piles, int h) {
14        int left=1;
15        int right=*max_element(piles.begin(),piles.end());
16        int ans=right;
17
18        while(left<=right){
19            int mid=left+(right-left)/2;
20            if(ispossible(piles,h,mid)){
21                ans=mid;
22                right=mid-1;
23            }
24            else{
25                left=mid+1;
26            }
27        }
28        return ans;
29    }
30};