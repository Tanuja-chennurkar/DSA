class Solution {
public:
    int rob(vector<int>& nums) {
       int a =0;
       int b=0;

       for(int num:nums){
        int temp=max(a,b+num);
        b=a;
        a=temp;
       }
       return a;
    }
};