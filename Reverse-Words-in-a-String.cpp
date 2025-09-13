class Solution {
public:
    string reverseWords(string s) {
       string trimmed;
       int left=0;
       int right=s.size();
       while(left<right){
        if(s[left]!=' '){
            trimmed+=s[left];
            
        }
        else if(!trimmed.empty()&&trimmed.back()!=' '){
            trimmed+=' ';
            
        }
        left++;
       }

       vector<string> words;
       string word="";

       for(char ch: trimmed){
        if(ch!=' '){
            word+=ch;
        }
        else{
            words.push_back(word);
            word="";
        }
       }
       if(!word.empty()) words.push_back(word);

       reverse(words.begin(),words.end());

       string result;
       for(int i=0;i<words.size();i++){
        result+=words[i];
        if(i !=words.size()-1) result+=' ';
       }
       return result;
    }
};