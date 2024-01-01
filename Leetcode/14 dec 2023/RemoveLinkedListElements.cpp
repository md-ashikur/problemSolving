
//  * Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL ) return head;
        ListNode* tmp = head;
    
        while(tmp != NULL && tmp->next != NULL){
            
            if( tmp->next->val == val){
            tmp->next= tmp->next->next;  
            }
            if(tmp->next == NULL) break;
           
            else if(tmp->val != val){
            tmp= tmp->next;
            
            }
            
        }
        if (head != NULL && head->val == val) {
        return NULL;
    }
        return head;
    }
};