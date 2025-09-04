class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        int second=INT_MIN;

        for(int i=n-1;i>=0;i--){
            int num=nums[i];

            if(num<second) return true;
            while(!st.empty()&&num>st.top()){
                second=st.top();
                st.pop();
            }
            st.push(num);
        }
        return false;
    }
};