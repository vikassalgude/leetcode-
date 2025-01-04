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
     bool hasCycle(ListNode *head) {
    //METHOD 1  
    //     unordered_map<ListNode*,bool>visit;
    //     ListNode* curr=head;
    //     while(curr!=NULL ){
    //     if(visit[curr]==1){
    //         return true;
    //     }
    //     visit[curr]=1;
    //     curr=curr->next;
    //     }
    //     return false;
    // method 2
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)return true;
    }
    return false;   
    }
};
