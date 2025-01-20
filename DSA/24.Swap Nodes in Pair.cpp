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
    ListNode* swapPairs(ListNode* head) {
        ListNode* current = head;

    // Traverse the list in pairs
    while (current && current->next) {
        // Swap the values of the current node and the next node
        int temp = current->val;
        current->val = current->next->val;
        current->next->val = temp;

        // Move to the next pair
        current = current->next->next;
    }

        return head;

    }
};
