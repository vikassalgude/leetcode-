class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int>a;
        vector<int>b;
        while(head){
            if(head->val<x)a.push_back(head->val);
            else{
                b.push_back(head->val);
            }
            head=head->next;
        }
        head=new ListNode(0);
        ListNode* x1=head;
        for(int i=0;i<a.size();i++){
            head->next=new ListNode(a[i]);
            head=head->next;
        }
        for(int i=0;i<b.size();i++){
            head->next=new ListNode(b[i]);
            head=head->next;

        }
        return x1->next;


    }
};
