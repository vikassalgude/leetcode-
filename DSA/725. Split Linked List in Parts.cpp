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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int total=0;
        ListNode* temp=head;
        while(temp){
            total++;
            temp=temp->next;
        }
        int extra=total % k;
        int base=total/k;
        vector<ListNode*> result(k, nullptr);
        ListNode* current = head;
        for(int i=0;i<k;i++){
            int partsize=base;
            ListNode* parthead = current;
            if(extra>0){
                partsize++;
                extra--;
            }
            for(int j=0;j<partsize-1;j++){
                if (current) current = current->next;
            }
             if (current) {
                ListNode* nextPart = current->next;
                current->next = nullptr;
                current = nextPart;
            }
            result[i]=parthead;
        }
        return result;
    }
};
