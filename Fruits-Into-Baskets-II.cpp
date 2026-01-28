1class Solution {
2public:
3    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
4        vector<bool> used(baskets.size(),false);
5        int unplaced=0;
6
7        for(int fruit:fruits){
8            bool placed=false;
9            for(int i=0;i<baskets.size();i++){
10                if(!used[i] &&baskets[i]>=fruit){
11                    used[i]=true;
12                    placed=true;
13                    break;
14                }
15                
16            }
17            if(!placed){
18                    unplaced++;
19                }
20        }
21        return unplaced;
22    }
23};