1class Solution {
2public:
3     
4
5    bool canplace(int distance,int k,vector<int>& position){
6        int count=1;
7        int last=position[0];
8        for(int i=1;i<position.size();i++){
9            if(position[i]-last>=distance){
10                count++;
11                last=position[i];
12            }
13        }
14        if(count>=k) return true;
15        return false;
16    }
17    
18    int maxDistance(vector<int>& position, int m) {
19        // code here
20        sort(position.begin(),position.end());
21        int n=position.size();
22        int l=1;
23        int r=position[n-1]-position[0];
24        int ans=0;
25        while(l<=r){
26            int mid=l+(r-l)/2;
27            if(canplace(mid,m,position)){
28                ans=mid;
29                l=mid+1;
30            }
31            else{
32                r=mid-1;
33            }
34        }
35        return ans;
36    }
37};