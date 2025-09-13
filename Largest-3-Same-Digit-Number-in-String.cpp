class Solution {
public:
    string largestGoodInteger(string num) {
        int n= num.size();
        string a="";
        int count=1;
        for(int i=1;i<n;i++){
            if(num[i]==num[i-1]){
                count++;
               if(count==3){
                string triple(3,num[i]);
                a=max(a,triple);
               }
               
            }
            else{
                count=1;
               }
        }
        return a;
    }
};