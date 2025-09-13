/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1,v2;
        while(l1!=nullptr){
            v1.push_back(l1->val);
            l1=l1->next;
        }

        while(l2!=nullptr){
            v2.push_back(l2->val);
            l2=l2->next;
        }

        ListNode* head=nullptr;
        int i=v1.size()-1;
        int j=v2.size()-1;
        int carry=0;

        while(i>=0||j>=0||carry){
            int sum=carry;
            if(i>=0) sum+=v1[i--];
            if(j>=0) sum+=v2[j--];

            carry=sum/10;

            ListNode* node=new ListNode(sum%10);
            node->next=head;
            head=node;
        }
        return head;
    }
};