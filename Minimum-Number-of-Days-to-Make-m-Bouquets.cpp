1class Solution {
2public:
3    bool ispossible(vector<int>& bloomDay, int day,int m, int k){
4        int count=0;
5        int mboquets=0;
6        for(int i=0;i<bloomDay.size();i++){
7            if(bloomDay[i]<=day){
8                count++;
9            }
10            else{
11                mboquets+=count/k;
12                count=0;
13            }
14        }
15        mboquets+=count/k;
16        return mboquets>=m;
17    }
18    int minDays(vector<int>& bloomDay, int m, int k) {
19        int low=*min_element(bloomDay.begin(),bloomDay.end());
20        int high=*max_element(bloomDay.begin(),bloomDay.end());
21        int days=0;
22        long long val=m*1LL*k*1LL;
23      if(val>bloomDay.size()){
24        return -1;
25      } 
26      while(low<=high){
27        int mid=low+(high-low)/2;
28        if(ispossible(bloomDay,mid,m,k)){
29            days=mid;
30            high=mid-1;
31        }
32        else{
33            low=mid+1;
34        }
35      }
36      return days; 
37    }
38};