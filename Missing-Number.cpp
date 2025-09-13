class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int total =n*(n+1)/2;
        int actual=0;
        for(int num:nums){
            actual+=num;
        }

        return total-actual;
    }
};