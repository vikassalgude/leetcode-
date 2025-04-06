
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<int>s;
        ListNode* curr=head;
        s.push(curr->val);
        curr=curr->next;
        while(curr){
            while(!s.empty()&&curr->val>s.top()){
               s.pop();
            }
            s.push(curr->val);
            curr=curr->next;
        }
        ListNode* temp = new ListNode(0);
        ListNode* currNew = temp;
        stack<int>s1;
        while (!s.empty()) {
           s1.push(s.top());
           s.pop();
           
        }
    // Pop values from the stack and create new nodes
        while (!s1.empty()) {
           currNew->next = new ListNode(s1.top());
           s1.pop();
           currNew = currNew->next;
        }

        return temp->next;
    }
};
