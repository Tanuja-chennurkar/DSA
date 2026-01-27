1class Solution {
2public:
3    int hIndex(vector<int>& citations) {
4        sort(citations.begin(),citations.end());
5        int n=citations.size(),i;
6        
7        
8        for( i=1;i<=citations.size();i++){
9            if(citations[n-i]<i){
10                break;
11            }
12            
13        }
14        return i-1;
15    }
16};