class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        dummy=[]
        a=0
        b=0

        while a<m and b<n:
            if nums1[a]<nums2[b]:
                dummy.append(nums1[a])
                a+=1
            else:
                dummy.append(nums2[b])
                b+=1
        while a<m:
            dummy.append(nums1[a])
            a+=1
        while b<n:
            dummy.append(nums2[b])
            b+=1
        for k in range(m+n):
            nums1[k]=dummy[k]
        return nums1

        