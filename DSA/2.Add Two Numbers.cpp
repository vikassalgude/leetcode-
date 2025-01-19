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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* temp3=new ListNode(0);
        ListNode* ans=temp3;
        int sum=0,carry=0;
        while(temp1&&temp2){
            sum=temp1->val+temp2->val+carry;
            carry=sum/10;
            temp1=temp1->next;
            temp2=temp2->next;
            temp3->next=new ListNode(sum%10);
            temp3=temp3->next;
        }
        
    
    sum=0;
    while(temp1){
        sum=temp1->val+carry;
        temp3->next=new ListNode(sum%10);
        carry=sum/10;
        temp3=temp3->next;
        temp1=temp1->next;
        }
    while(temp2){
        sum=temp2->val+carry;
        temp3->next=new ListNode(sum%10);
        carry=sum/10;
        temp3=temp3->next;
        temp2=temp2->next;
        }
    if(carry){
        temp3->next=new ListNode(carry%10);
        
    }

    return ans->next;
    }
};
