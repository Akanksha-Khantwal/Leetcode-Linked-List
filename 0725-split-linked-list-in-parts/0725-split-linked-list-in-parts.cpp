class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        vector<ListNode*> result(k, NULL);
        
        // Count nodes safely
        int count = 0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        
        int basesize = count / k;
        int extra = count % k;
        
        ListNode* curr = head;
        
        for(int i = 0; i < k && curr; i++){
            
            result[i] = curr;
            
            int size = basesize + (i < extra ? 1 : 0);
            
            for(int j = 1; j < size; j++){
                curr = curr->next;
            }
            
            ListNode* next = curr->next;
            curr->next = NULL;
            curr = next;
        }
        
        return result;
    }
};