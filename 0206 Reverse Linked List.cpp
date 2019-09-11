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
    ListNode* reverseList(ListNode* head) {
        vector<int> tmp;
        ListNode* p=head;
        ListNode* ret=head;
        while(head){
            tmp.push_back(head->val);
            head=head->next;
        }
        int len=tmp.size();
        for(int i=len-1;i>=0;i--){
            p->val=tmp[i];
            p=p->next;
        }
        return ret;
    }
};
