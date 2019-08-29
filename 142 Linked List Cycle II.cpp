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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* p=head;
        ListNode* p2=head;
        int flag=0;
        while(p && p->next && p2 && p2->next && p2->next->next){
            p=p->next;
            p2=p2->next->next;
            if(p==p2){
                flag=1;
                break;
            }
        }
        if(flag){
            ListNode* q=head;
            while(q!=p){
                q=q->next;
                p=p->next;
            }
            return q;
        }else{
            return NULL;
        }
    }
};
