1class Solution {
2public:
3    int countStudents(vector<int>& students, vector<int>& sandwiches) {
4        queue<int>q;
5        for(int s:students){
6            q.push(s);
7        }
8
9        int i=0;
10        int counter=0;
11
12        while(!q.empty()&&counter<q.size()){
13            if(q.front()==sandwiches[i]){
14                q.pop();
15                i++;
16                counter=0;
17            }
18            else{
19                q.push(q.front());
20                q.pop();
21                counter++;
22            }
23        }
24        return q.size();
25    }
26};