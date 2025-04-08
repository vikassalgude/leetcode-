class Solution {
public:
    ListNode* mergeInBetween(ListNode* head, int left, int right, ListNode* list2) {
        ListNode* prevLeft = head;
    for (int i = 0; i < left - 1; ++i) {
        prevLeft = prevLeft->next;
    }

    // Find the node after the right position
    ListNode* nextRight = prevLeft;
    for (int i = 0; i < right - left + 2; ++i) {
        nextRight = nextRight->next;
    }

    // Find the last node of list2
    ListNode* lastList2 = list2;
    while (lastList2->next) {
        lastList2 = lastList2->next;
    }

    // Connect the lists
    prevLeft->next = list2;
    lastList2->next = nextRight;

    return head;

    }
};
