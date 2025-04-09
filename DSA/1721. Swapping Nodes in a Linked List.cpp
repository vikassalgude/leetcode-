class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr=head;
        int n=1;
        while(curr){
            n++;
            curr=curr->next;
        }
        int l=n-k-1;
        k--;
        curr=head;
        ListNode* c=head;
        while(k--){
           curr=curr->next;
        }
        while(l--){
            c=c->next;
        }
        int a=c->val;
        c->val=curr->val;
        curr->val=a;
        return head;
    }
};
