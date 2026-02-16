1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        ListNode* dummy=new ListNode(0);
15        dummy->next=head;
16        ListNode* fast = dummy;
17        ListNode* slow = dummy;
18        for(int i=0;i<n;i++){
19            fast=fast->next;
20        }
21        while(fast->next!=NULL){
22            fast=fast->next;
23            slow=slow->next;
24        }
25
26        slow->next=slow->next->next;
27        return dummy->next;
28    }
29};