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
13    ListNode* sortList(ListNode* head) {
14        if(!head||!head->next){
15            return head;
16        }
17    ListNode* slow=head;
18    ListNode* fast=head->next;
19
20    while(fast&&fast->next){
21        slow=slow->next;
22        fast=fast->next->next;
23    }
24    ListNode* mid=slow->next;
25    slow->next=NULL;
26
27    ListNode* left=sortList(head);
28    ListNode* right=sortList(mid);
29
30    return merge(left,right);
31    }
32
33    ListNode* merge(ListNode* l1,ListNode* l2){
34        ListNode* dummy=new ListNode(-1);
35        ListNode* tail=dummy;
36
37        while(l1&&l2){
38            if(l1->val<l2->val){
39                tail->next=l1;
40                l1=l1->next;
41            }
42            else{
43                tail->next=l2;
44                l2=l2->next;
45            }
46            tail=tail->next;
47        }
48        if(l1)tail->next=l1;
49        else tail->next=l2;
50
51        return dummy->next;
52    }
53};