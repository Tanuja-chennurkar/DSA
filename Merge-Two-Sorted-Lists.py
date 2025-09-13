# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        dummy=ListNode()
        c=dummy
        l1=list1
        l2=list2

        while l1 and l2:
            if l1.val < l2.val:
                c.next=l1
                c=l1
                l1=l1.next
            else:
                c.next=l2
                c=l2
                l2=l2.next
        c.next =l1 if l1 else l2
        return dummy.next
            
        