class Solution {
public:
    ListNode* reverseListIterative(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* current = head;
    ListNode* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev; // Return the new head
}
    int getDecimalValue(ListNode* head) {
        head= reverseListIterative (head);
        int i=0;
        int ans=0;
        while(head){
           ans+=head->val*pow(2,i);
           i++;
           head=head->next;
        }
        return ans;
    }
};
