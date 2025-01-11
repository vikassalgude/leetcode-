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
    ListNode* deleteDuplicates(ListNode* head) {
        set<int>ans;
        ListNode* temp=head;
        while(temp){
            ans.insert(temp->val);
            temp=temp->next;
        }
        int i=ans.size(),j=0;
        ListNode* head1=new ListNode(0);
        ListNode* curr =head1;
        for (int value : ans) {
            ListNode* newNode = new ListNode(value);
        
            curr->next = newNode;  // Link the new node
            curr = curr->next;     // Move current pointer
        }return head1->next;
    
    }
};
