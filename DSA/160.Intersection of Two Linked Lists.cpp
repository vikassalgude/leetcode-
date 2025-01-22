/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a=0,b=0;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1){
            a++;
            temp1=temp1->next;
        }
        while(temp2){
            b++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        int c=0;
        if(a>b){
            c=a-b;
            while(c){
                temp1=temp1->next;
                c--;
            }
        }
        else {
            c=b-a;
            while(c){
                temp2=temp2->next;c--;
            }
        }
        
        while(temp1&&temp2){
             if(temp1==temp2){
                return temp1;
             }
             temp2=temp2->next;
             temp1=temp1->next;
             
        }

        return nullptr;
    }
};
