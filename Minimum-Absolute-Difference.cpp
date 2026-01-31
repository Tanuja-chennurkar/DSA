1class Solution {
2public:
3    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
4        sort(arr.begin(),arr.end());
5        int n=arr.size();
6        vector<vector<int>> result;
7        int temp=arr[1]-arr[0];
8        int i=0;
9        int j=1;
10        while(j<n){
11            temp=min(temp,arr[j]-arr[i]);
12            i++;
13            j++;
14        }
15        i=0;j=1;
16        while(j<n){
17            if(arr[j]-arr[i]==temp){
18                result.push_back({arr[i],arr[j]});
19            }
20            i++;
21            j++;
22        }
23        return result;
24    }
25};
26