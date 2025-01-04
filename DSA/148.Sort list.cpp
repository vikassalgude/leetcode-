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
    ListNode* sortList(ListNode* list1) {
        vector<int>ans1;
        
        ListNode* temp=list1;
        while(temp){
            ans1.push_back(temp->val);
            temp=temp->next;
        }
        sort(ans1.begin(),ans1.end());
        temp=NULL;ListNode* head;
        for(int i=0;i<ans1.size();i++){
            if(temp==NULL){
                temp=new ListNode(ans1[i]);
                head=temp;
            }
            else{
                temp->next=new ListNode(ans1[i]);
                temp=temp->next;
            }
        }return head;
    }
};
