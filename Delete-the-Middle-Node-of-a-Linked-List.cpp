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
13    ListNode* deleteMiddle(ListNode* head) {
14        if(head->next==nullptr){
15            return nullptr;
16        }
17
18        ListNode* slow=head;
19        ListNode* fast=head;
20        ListNode* temp=NULL;
21
22        while(fast&&fast->next){
23            temp=slow;
24            slow=slow->next;
25            fast=fast->next->next;
26        }
27        temp->next=slow->next;
28        delete(slow);
29
30        return head;
31    }
32};