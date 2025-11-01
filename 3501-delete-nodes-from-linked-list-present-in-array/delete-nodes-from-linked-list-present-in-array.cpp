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
  Created: 2025-11-01 19:41
  Complexity: O(n+m) time, O(n) space
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode dummyNode(0, head);
        unordered_set<int> s(nums.begin(), nums.end());
        ListNode* curr = &dummyNode;
        while (curr->next) {
            if (s.contains(curr->next->val)) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }
        return dummyNode.next;
    }
};