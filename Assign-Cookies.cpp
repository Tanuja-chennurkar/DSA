1class Solution {
2public:
3    int findContentChildren(vector<int>& g, vector<int>& s) {
4        sort(g.begin(),g.end());
5        sort(s.begin(),s.end());
6        int count=0;
7        int i=0;
8        int j=0;
9        while(i<g.size()&&j<s.size()){
10            if(g[i]<=s[j]){
11                count++;
12                i++;
13                j++;
14            }
15            else if(g[i]>s[j]){
16                
17                j++;
18            }
19            else{
20                i++;
21                j++;
22            }
23        }
24        return count;
25    }
26};