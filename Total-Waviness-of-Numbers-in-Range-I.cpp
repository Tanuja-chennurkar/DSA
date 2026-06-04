1class Solution {
2public:
3    int result(int num){
4        string s=to_string(num);
5        int count=0;
6        for(int i=1;i<s.size()-1;i++){
7            if((s[i]>s[i-1]&&s[i]>s[i+1])||
8            (s[i]<s[i-1]&&s[i]<s[i+1])){
9                count++;
10            }
11        }
12        return count;
13    }
14    int totalWaviness(int num1, int num2) {
15        int ans=0;
16        for(int num=num1;num<=num2;num++){
17            ans+=result(num);
18        }
19        return ans;
20    }
21};