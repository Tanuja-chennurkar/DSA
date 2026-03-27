1class Solution {
2public:
3    int maxScore(vector<int>& cardPoints, int k) {
4        int sum=0;
5        for(int i=0;i<cardPoints.size();i++){
6                sum+=cardPoints[i];
7        }
8        if(cardPoints.size()==k){
9            return sum;
10        }
11        int n=cardPoints.size();
12        int windowsize=n-k;
13        int windowsum=0;
14        for(int i=0;i<windowsize;i++){
15            windowsum+=cardPoints[i];
16        }
17        int minsum=windowsum;
18        for(int i=windowsize;i<n;i++){
19            windowsum+=cardPoints[i];
20            windowsum-=cardPoints[i-windowsize];
21            minsum=min( windowsum,minsum);
22        }
23        return sum-minsum;
24    }
25};