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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL|| k==0 )return head;
        ListNode* dummy=new ListNode(0,head);
        ListNode*fast=dummy;
        ListNode*slow=dummy;
        ListNode* prev=head;
        int count=0;
        while(prev){
            count++;
            prev=prev->next;
        }
        k=k%count;
        if(k==0)
        return head;

       
        for(int i=0;i<k;i++){
            fast=fast->next;
        }
        while(fast->next!=NULL ){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* temp=slow->next;
        slow->next=NULL;
        fast->next=head;
        dummy->next=temp;
        head=temp;
        return head;
        
    }
};