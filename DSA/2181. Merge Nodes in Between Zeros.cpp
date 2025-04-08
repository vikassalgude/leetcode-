class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        int sum=0;
        vector<int>ans;
        head=head->next;
        while(head){
            if(head->val==0){
                ans.push_back(sum);
                sum=0;
            }
            else{
                sum+=head->val;
            }
            head=head->next;
        }
        ListNode* head1=new ListNode(0);
        ListNode* curr=head1;
        for(int i=0;i<ans.size();i++){
            head1->next=new ListNode(ans[i]);
            head1=head1->next;
        }
        return curr->next;

    }
};
