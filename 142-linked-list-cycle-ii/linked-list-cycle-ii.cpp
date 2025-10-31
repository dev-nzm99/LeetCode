/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
 Author:Nazmul Islam
 Created: 2025-10-31 15:16
 Complexity: O(n) time & O(1) space
*/
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode *s_ptr = head, *f_ptr = head;
        // Check if cycle exist or not
        bool f = false;
        while (f_ptr != NULL && f_ptr->next != NULL) {
            s_ptr = s_ptr->next;
            f_ptr = f_ptr->next->next;
            if (s_ptr == f_ptr) {
                f = true;
                break;
            }
        }
        if (!f)
            return NULL;

        // Logic for begining node of the cycle
        s_ptr = head;
        while (f_ptr != s_ptr) {
            s_ptr = s_ptr->next;
            f_ptr = f_ptr->next;
        }
        return s_ptr;
    }
};