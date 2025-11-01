/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 ---------------------------------------------------------------------------
  Author:Nazmul Islam
  Created: 2025-11-02 01:10
  Approach: Using Two Pointers Pattern (Fixed Separation)
  Complexity: O(n) time & O(1) space  
*/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create a dummy node to simplify edge cases (like removing the head)
        ListNode* dummyNode = new ListNode(0);
        dummyNode->next = head;
        ListNode *f, *s;
        f = s = dummyNode;
        //Move fast pointer (n+1) steps
        for (int i = 0; i <= n; ++i) {  
            if (f) f = f->next;
        }
        while (f) {
            s = s->next;
            f = f->next;
        }
        ListNode* tmp = s->next;
        s->next = s->next->next;
        delete tmp;

        ListNode* newHead = dummyNode->next;
        delete dummyNode;
        return newHead;
    }
};