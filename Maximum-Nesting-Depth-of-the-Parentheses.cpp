1class Solution {
2public:
3    int maxDepth(string s) {
4        int count=0;
5        int maxdepth=0;
6
7        for(char c:s){
8            if(c=='('){
9                count++;
10                maxdepth=max(count,maxdepth);
11            }
12            else if(c==')'){
13                count--;
14            }
15        }
16        return maxdepth;
17    }
18};