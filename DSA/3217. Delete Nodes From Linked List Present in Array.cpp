class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st(begin(nums), end(nums));
    
        while(head){
            if(!st.count(head->val)){
                break;
            }
            head=head->next;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr){
            
            int currVal = curr->val;
            if (!st.count(currVal)) {
                prev = curr;
                curr = curr->next;
            } else {
                prev->next = curr->next;
                curr = curr->next;
            }
        }
        return head;
    }
};
