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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* current = head;
        vector<int> a;

        // Convert linked list values into a vector.
        while (current) {
            a.push_back(current->val);
            current = current->next;
        }

        int n = a.size();
        
        // Reverse groups of size k.
        for (int i = 0; i < n; i += k) {
            if (i + k <= n) {
                reverse(a.begin() + i, a.begin() + i + k);
            }
        }

        current = head;
        
        // Update linked list values with reversed values.
        for (int i = 0; i < n; ++i) {
            current->val = a[i];
            current = current->next;
        }
        
        return head;
    }
};
