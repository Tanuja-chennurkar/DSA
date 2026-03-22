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
13ListNode* reverseList(ListNode* head) {
14        ListNode* prev=nullptr;
15        ListNode* temp=head;
16        while(temp){
17           ListNode* front=temp->next;
18            temp->next=prev;
19            prev=temp;
20            temp=front;
21        }
22        return prev;
23    }
24    ListNode* reverseKGroup(ListNode* head, int k) {
25        ListNode* temp=head;
26        ListNode* prev=NULL;
27
28        while(temp!=NULL){
29            ListNode* kth=temp;
30            for(int i=1;i<k&&kth;i++){
31                kth=kth->next;
32            }
33            if(kth==nullptr) {
34                if(prev) prev->next = temp;
35                break;
36            }
37            ListNode*nextnode=kth->next;
38            kth->next=NULL;
39            reverseList(temp);
40            if(temp==head){
41                head=kth;
42            }
43            else{
44                prev->next=kth;
45            }
46                prev=temp;
47                temp=nextnode;
48        }
49        return head;
50    }
51};