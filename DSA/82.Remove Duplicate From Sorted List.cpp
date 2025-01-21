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
    ListNode* deleteDuplicates(ListNode* head1) {
    
    unordered_map<int, int> freqMap; // To store frequency of each value
    ListNode* temp = head1;

    // First pass: Count occurrences of each value
    while (temp) {
        freqMap[temp->val]++;
        temp = temp->next;
    }

    stack<int> s; // Stack to store unique values
    temp = head1;

    // Second pass: Push only unique values (frequency == 1) onto the stack
    while (temp) {
        if (freqMap[temp->val] == 1) { // Only push unique values onto the stack
            s.push(temp->val);
        }
        temp = temp->next;
    }
   ListNode* head = nullptr; // Initialize an empty linked list

    // While there are elements in the stack
    while (!s.empty()) {
        // Create a new node with the top element of the stack
        ListNode* newNode = new ListNode(s.top());
        s.pop(); // Remove the top element from the stack

        // Insert at the head of the linked list
        newNode->next = head;
        head = newNode;
    }

    return head;
    }
};
