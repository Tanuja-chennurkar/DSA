class Solution:
    def isValid(self, s: str) -> bool:
        st=[]
        n=len(s)

        for i in range(n):
            if(s[i]=='('or s[i]=='[' or s[i]=='{'):
                st.append(s[i])
            else:
                if(len(st)==0):
                    return False
                ch=st[-1]

                if (ch=='('and s[i]==')') or (ch=='['and s[i]==']') or (ch=='{'and s[i]=='}'):
                    st.pop()
                else:
                    return False
        if len(st)==0:
            return True
        else:
            return False
