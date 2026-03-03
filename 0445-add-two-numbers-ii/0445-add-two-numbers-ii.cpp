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
    ListNode* reverselist(ListNode* head){
        ListNode * prev=NULL;
        while(head){
            ListNode *nextnode=head->next;
            head->next=prev;
            prev=head;
            head=nextnode;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2)
        return NULL;
        ListNode *dummy=new ListNode(0);
        ListNode *curr=dummy;
        ListNode*first=reverselist(l1);
        ListNode*second=reverselist(l2);
        int carry=0;
        while(first || second|| carry){
            int sum=0;
            sum+=carry;
            if(first) {
                sum+=first->val;
                first=first->next;
            }
            if(second){
                sum+=second->val;
                second=second->next;
            }
            carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;
            
        }
        return reverselist(dummy->next);
    }
};