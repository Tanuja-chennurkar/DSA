class Solution:
    def climbStairs(self, n: int) -> int:
        if n==0 or n==1:
            return 1
        a=0
        b=1
        for i in range(n):
            temp=b
            b=a+b
            a=temp
        return b

            
    