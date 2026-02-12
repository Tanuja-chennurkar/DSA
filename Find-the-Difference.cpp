1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        sort(s.begin(),s.end());
5        sort(t.begin(),t.end());
6        if(s.empty()){
7            return t[0];
8        }
9        int left=0;
10        int right=0;
11
12        while(left<s.size()&&right<t.size()){
13            if(s[left]==t[right]){
14                left++;
15                right++;
16            }
17            else{
18                return t[right];
19            }
20        }
21    return t[t.size()-1];
22    }
23
24};