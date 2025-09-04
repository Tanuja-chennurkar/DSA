class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> frequency(26,0);
        vector<bool> instack(26,false);
        stack<char> st;

        for(char c: s){
            frequency[c-'a']++;
        }
        for(char c:s){
            frequency[c-'a']--;

            if(instack[c-'a']) continue;

            while(!st.empty()&&st.top()>c&&frequency[st.top()-'a']>0){
                instack[st.top()-'a']=false;
                st.pop();
            }
            st.push(c);
            instack[c-'a']=true;
        }

        string result="";
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};