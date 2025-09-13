class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        i=0
        j=1
        nums.sort()
        while j<len(nums):
            if nums[i] == nums[j]:
                return True
            
            i+=1
            j+=1
        return False