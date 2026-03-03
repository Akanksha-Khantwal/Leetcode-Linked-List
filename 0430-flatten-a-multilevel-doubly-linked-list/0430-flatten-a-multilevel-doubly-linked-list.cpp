/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    
    Node* flatten(Node* head) {
        if (!head) return NULL;
        
        flattenDFS(head);
        return head;
    }
    
private:
   
    Node* flattenDFS(Node* head) {
        
        Node* curr = head;
        Node* last = head;
        
        while (curr) {
            
            Node* nextNode = curr->next;
            
        
            if (curr->child) {
                
                Node* childHead = curr->child;
                Node* childTail = flattenDFS(childHead);
                
               
                curr->next = childHead;
                childHead->prev = curr;
                
                
                if (nextNode) {
                    childTail->next = nextNode;
                    nextNode->prev = childTail;
                }
                
                curr->child = NULL;
                last = childTail;
            }
            else {
                last = curr;
            }
            
            curr = nextNode;
        }
        
        return last;
    }
};