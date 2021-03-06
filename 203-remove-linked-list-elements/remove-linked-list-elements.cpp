// Remove all elements from a linked list of integers that have value val.
//
// Example:
//
//
// Input:  1->2->6->3->4->5->6, val = 6
// Output: 1->2->3->4->5
//
//


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
        if(!head) return head;
        ListNode* vihead = new ListNode(0);
        vihead->next = head;
        ListNode *pre = vihead, *cur = head;
        while(cur){
            if(cur->val == val){
                pre->next = cur->next;
                cur = pre->next;
            }
            else{
                pre = cur;
                cur = cur->next;
            }
            
        }
        return vihead->next;
    }
};
