class Solution:
    def trap(self, height: List[int]) -> int:
        n=len(height)
        left=0
        right=0
        maxl=[0]* n
        maxr=[0]* n
        unit=0
        for i in range(n):
            j= -i-1
            maxl[i]=left
            maxr[j]=right
            left=max(left,height[i])
            right=max(right,height[j])
        
        for i in range(n):
            st = min(maxl[i], maxr[i])
            unit+=max(0,st -height[i])
        return unit