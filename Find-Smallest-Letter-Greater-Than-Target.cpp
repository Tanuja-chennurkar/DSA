1class Solution {
2public:
3    char nextGreatestLetter(vector<char>& letters, char target) {
4        int left=0;
5        int right=letters.size()-1;
6        char result=letters[0];
7
8        while(left<=right){
9            int mid=left+(right-left)/2;
10            if(letters[mid]>target){
11                result=letters[mid];
12                right=mid-1;
13            }
14            else{
15                left=mid+1;
16            }
17        }
18        return result;
19    }
20};