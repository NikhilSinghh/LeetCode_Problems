class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> a;

        for (auto i : lists) {
            while (i != NULL) {
                a.push_back(i->val);
                i = i->next;
            }
        }

        sort(a.begin(), a.end());

        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;

        for (int i = 0; i < a.size(); i++) {
            temp->next = new ListNode(a[i]);
            temp = temp->next;
        }

    
        return ans->next;
    }
};
