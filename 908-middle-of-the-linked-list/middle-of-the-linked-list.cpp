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

/*
 Author: Nazmul Islam
 Created: 2025-10-20 20:53
 O(n) time, O(1) space
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *fastPtr, *slowPtr;
        fastPtr = slowPtr = head;
        while (fastPtr && fastPtr->next) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        return slowPtr;
    }
};