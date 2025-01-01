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
    bool isPalindrome(ListNode* head) {
        //edge cases 
        if(head==NULL||head->next==NULL)return 1;
        //count no. of nodes
        int count=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            count++;
        }
        //making two parts
        count/=2;
        ListNode* prev=NULL,*curr=head;
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        //rotating second part
        ListNode*back=NULL,*front=NULL;
        while(curr){
            front=curr->next;
            curr->next=back;
            back=curr;
            curr=front;
        }
        ListNode* head1=head,*head2=back;
        while(head1!=NULL){
            if(head1->val!=head2->val){
                return 0;
            }
            head1=head1->next;
            head2=head2->next;

        }return 1;
        

    }
};
