class Solution {
public:
    bool isVowel(char ch){
        ch=tolower(ch);
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    string reverseVowels(string s) {
        int left=0;
        int right=s.size();
        while(left<right){
            if(!isVowel(s[left])){
                left++;
            } 

            if(!isVowel(s[right])){
                 right--;
                 }
            if(isVowel(s[left])&&isVowel(s[right])){
            swap(s[left],s[right]);
            left++;
            right--;
            }
        }
        return s;
    }
};