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
    ListNode* oddEvenList(ListNode* head) {
        ListNode*edummy= new ListNode(0);
        ListNode*odummy=new ListNode(0);
        ListNode* even=edummy;
        ListNode* odd=odummy;
        ListNode*curr=head;
        int count=1;
        while(curr!=NULL){
            if(count%2==0){
                even->next=curr;
                even=even->next;
            }
            else{
                odd->next=curr;
                odd=odd->next;
            }
            count++;
            curr=curr->next;
        }
        even->next=NULL;
        odd->next=edummy->next;
        return odummy->next;
        
    }
};