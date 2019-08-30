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
    bool hasCycle(ListNode *head) {
        while(head){
            if(head->val=='hnjzsdx'){
                return true;
            }else{
                head->val='hnjzsdx';
            }
            head=head->next;
        }
        return false;
    }
};
