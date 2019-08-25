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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p=new ListNode(-1);
        p->next=head;
        ListNode* fast=p->next;
        ListNode* slow=p;
        while(fast){
            if(fast->val==val){
                slow->next=fast->next;
                fast=fast->next;
            }else{
                fast=fast->next;
                slow=slow->next;
            }
        }
        return p->next;
    }
};
