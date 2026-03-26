1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        int start=0;
5        int maxfreq=0;
6        int maxlength=0;
7
8        vector<int>frequency(26,0);
9        for(int i=0;i<s.size();i++){
10            frequency[s[i]-'A']++;
11            maxfreq=max(maxfreq,frequency[s[i]-'A']);
12
13            if((i-start+1)-maxfreq>k){
14                frequency[s[start]-'A']--;
15                start++;
16            }
17            maxlength=max(maxlength,i-start+1);
18        }
19        return maxlength;
20    }
21};