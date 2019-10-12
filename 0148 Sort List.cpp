/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> num;
        ListNode* p = head;
        ListNode* q = head;
        while(p){
            num.push_back(p->val);
            p = p->next;
        }
        sort(num.begin(),num.end());
        int i=0;
        while(q){
            q->val = num[i];
            i++;
            q = q->next;
        }
        return head;
    }
};
