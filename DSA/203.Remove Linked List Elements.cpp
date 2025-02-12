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
    // using recursion
    ListNode* hh(ListNode* head1,ListNode* temp1,int val){

        if(head1==NULL)return NULL;
        if(head1->val!=val){
            temp1->next=new ListNode(head1->val);
            temp1=temp1->next;
        }
        head1=head1->next;
        return hh(head1,temp1,val);
    }
    ListNode* removeElements(ListNode* head, int val) {
        //USING NORMAL METHOD
        // ListNode* t=head;
        // ListNode* temp1=new ListNode(0);
        // ListNode* temp2=temp1;
        // while(t!=NULL){
        //     if(t->val!= val){
        //         temp1->next=new ListNode(t->val);
        //         temp1=temp1->next;
        //     }
        //     t=t->next;
        //    // q=t->next->next;
        // }
        // temp2=temp2->next;
        // return temp2;
        ListNode* temp1=new ListNode(0);
        ListNode* temp2=temp1;
        hh(head,temp1,val);
        temp2=temp2->next;
        return temp2;
    }
};
