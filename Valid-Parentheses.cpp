1class Solution {
2public:
3    bool isValid(string s) {
4        int n=s.size();
5        stack<char>st;
6        for(int i=0;i<n;i++){
7            char ch=s[i];
8            if(s[i]=='('||s[i]=='{'||s[i]=='['){
9                st.push(s[i]);
10            }
11            else{
12                if(st.empty()){
13                    return false;
14                }
15                char top=st.top();
16                if(top=='('&&s[i]==')'||top=='{'&&s[i]=='}'||top=='['&&s[i]==']'){
17                    st.pop();
18                }
19                else{
20                    return false;
21                }
22            }
23        }
24        if(st.empty()){
25            return true;
26        }
27        else return false;
28    }
29};