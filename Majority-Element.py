class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count=0
        k=0
        for i in nums:
            if count ==0:
                k=i
            count +=(1 if i==k else -1)
        return k