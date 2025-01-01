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
// void rotateArray(std::vector<int>& arr, int k) {
//     int n = arr.size();
//     k = k % n; // Handle cases where k is greater than n
//     std::rotate(arr.begin(), arr.end() - k, arr.end());
// }
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        //METHOD 1 USING ARRAYS
        // if (!head || !head->next || k == 0) {
        //     return head; // No rotation needed
        // }

        // // Step 1: Convert linked list to array
        // std::vector<int> arr;
        // ListNode* temp = head;
        
        // while (temp != nullptr) {
        //     arr.push_back(temp->val); // Use push_back to add elements
        //     temp = temp->next;
        // }

        // // Step 2: Rotate the array
        // rotateArray(arr, k);

        // // Step 3: Reconstruct the linked list from rotated array
        // ListNode* newHead = new ListNode(arr[0]);
        // ListNode* current = newHead;

        // for (int i = 1; i < arr.size(); i++) {
        //     current->next = new ListNode(arr[i]);
        //     current = current->next;
        // }

        // return newHead;
        //METHOD 2 WITHOUT USING ARRAYS
        ListNode* curr=head,*prev=NULL;
        if(head==NULL||head->next==NULL)return head;
        ListNode* temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        k=k%count;
        if(k==0)return head;
        count-=k;
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        ListNode* tail=curr;
        while(tail->next){
            tail=tail->next;
        }
        tail->next=head;
        return curr;
    }
};
