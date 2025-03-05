class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int>ans;
        while(head){
            ans.push_back(head->val);
            head=head->next;
        }
        sort(ans.begin(),ans.end());
        ListNode *temp=new ListNode(0);
        ListNode * x=temp;
        
        for(int i=0;i<ans.size();i++){
            x->next=new ListNode(ans[i]);
            x=x->next;
        }
        return temp->next;
    }
};
