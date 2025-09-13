class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack=[]
        for i in tokens:
            if i=='+' or i=='-' or i=='*' or i =='/':
                a=stack.pop()
                b=stack.pop()

                if i=='+':
                    stack.append(b+a)
                elif i=='-':
                    stack.append(b-a)
                elif i=='*':
                    stack.append(b*a)
                else:
                    d=b/a
                    if d<0:
                        stack.append(ceil(d))
                    else:
                        stack.append(floor(d))
            else:
                stack.append(int(i))
        return stack[0]
        