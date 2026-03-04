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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        if(head==NULL || head->next==NULL){
            ans.push_back(0);
            return ans;
        }
        ListNode*curr=head;
        while(curr){
            ListNode *temp=curr->next;
            while(temp !=NULL &&curr->val>=temp->val){
                temp=temp->next;
            }
            if(temp!=NULL){
                ans.push_back(temp->val);
            }
            else{
                ans.push_back(0);
            }
            curr=curr->next;
        }
        return ans;
        
    }
};