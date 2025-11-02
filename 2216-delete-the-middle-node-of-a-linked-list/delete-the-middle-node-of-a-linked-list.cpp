/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 --------------------------------------------------------------------
  Author:Nazmul Islam
  Complexity: O(n)
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* dummyNode = new ListNode(0);
        dummyNode->next = head;
        ListNode *slow, *fast;
        slow = fast = dummyNode;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = slow->next->next;

        ListNode* newHead = dummyNode->next;
        delete dummyNode;

        return newHead;
    }
};