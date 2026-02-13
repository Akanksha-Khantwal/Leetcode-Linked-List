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
    ListNode* partition(ListNode* head, int x) {
        ListNode* smalldummy=new ListNode(0);
        ListNode* bigdummy=new ListNode(0);
        ListNode*small=smalldummy;
        ListNode* big=bigdummy;
        while(head!=NULL){
            if(head->val<x){
                small->next=head;
                small=small->next;
            }
            else{
                big->next=head;
                big=big->next;
            }
            head=head->next;

        }
        big->next=NULL;
        small->next=bigdummy->next;
        head=smalldummy->next;
        return head;
    
        
    }
};