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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        int n=0;
        while(fast->next!=NULL){
            n++;
            fast=fast->next;
            if(n%2==0){
                slow=slow->next;
            }
        }
        if(n%2==0){
            return slow;
        }else{
            return slow->next;
        }
    }
};
