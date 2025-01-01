
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        count=count-n;
        ListNode* current=head;
        ListNode* prev=NULL;
        if(count==0){
            head = current->next;
            delete current;
            
        }
        else{
            while(count--){
                prev=current;
                current=current->next;
            }
            prev->next=current->next;
            delete current;
        }
        return head;
    }
};
