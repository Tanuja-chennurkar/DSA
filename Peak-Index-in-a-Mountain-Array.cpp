1class Solution {
2public:
3    int peakIndexInMountainArray(vector<int>& arr) {
4        int left=0;
5        int right=arr.size()-1;
6
7        while(left<=right){
8            int mid=left+(right-left)/2;
9            if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
10                return mid;
11            }
12            else if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1]){
13                left=mid+1;
14            }
15            else{
16                right=mid;
17            }
18        }
19        return -1;
20    }
21};