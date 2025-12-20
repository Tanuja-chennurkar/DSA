1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_map<char,int> hashmap;
5        int start=0;
6        int maxlength=0;
7        for(int end=0;end<s.length();end++){
8            char ch=s[end];
9            if(hashmap.find(ch)!=hashmap.end()&&hashmap[ch]>=start){
10                start=hashmap[ch]+1;
11            }
12        hashmap[ch]=end;
13        maxlength=max(maxlength, end - start +1);
14            
15        }
16        return maxlength;
17    }
18};