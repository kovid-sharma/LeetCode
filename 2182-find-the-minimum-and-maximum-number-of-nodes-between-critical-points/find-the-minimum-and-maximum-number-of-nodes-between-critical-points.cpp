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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int last = -1;
        int first = -1;
        int previ = -1;
        ListNode* prev = head;
        int minD = INT_MAX;
        int idx = 1;

        ListNode* curr = head->next;
        while (curr->next != nullptr) {
            if ((curr->val > prev->val && curr->val > curr->next->val) ||
                curr->val < prev->val && curr->val < curr->next->val) {
                if (first == -1) {
                    first = idx;
                    last = idx;
                } else {
                    previ = last;
                    last = idx;
                    minD = min(minD, last - previ);
                }
            }
            curr = curr->next;
            prev = prev->next;
            idx++;
        }
        if (first == last)
            return {-1, -1};

        return {minD, last - first};
    }
};