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
    ListNode *detectCycle(ListNode *head) {
        
    if (head == NULL) return NULL; // Check for empty list

    ListNode *slow = head;
    ListNode *fast = head;

    // Step 1: Detect if there is a cycle
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          // Move slow by one
        fast = fast->next->next;   // Move fast by two

        if (slow == fast) { // Cycle detected
            break;
        }
    }

    // If there is no cycle
    if (fast == NULL || fast->next == NULL) {
        return NULL;
    }

    // Step 2: Find the start of the cycle
    slow = head; // Reset slow to head

    while (slow != fast) {
        slow = slow->next; // Move both pointers at the same pace
        fast = fast->next;
    }

    // The point where they meet is the start of the cycle
    return slow;
    }
        
    
};
