class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minprice=prices[0];
        int totalprice=0;
        for(int i=1;i<n;i++){
            if(prices[i]<prices[i-1]){
                minprice=prices[i];
            }

            else{
                totalprice+=prices[i]-minprice;
                minprice=prices[i];
            }
        }
        return totalprice;
    }
};