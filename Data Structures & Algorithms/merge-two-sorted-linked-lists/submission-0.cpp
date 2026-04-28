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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *cur1 = list1;
        ListNode *cur2 = list2;
        ListNode *fin = new ListNode;
        fin->next = NULL;
        ListNode *cur3 = fin;
        while(cur1 != NULL && cur2 != NULL) {
            cur3->next = new ListNode;
            cur3 = cur3->next;
            if(cur1->val < cur2->val) {
                cur3->val = cur1->val;
                cur1 = cur1->next;
            }
            else{
                cur3->val = cur2->val;
                cur2 = cur2->next;
            }
        }
        while(cur1 != NULL) {
            cur3->next = new ListNode;
            cur3 = cur3->next;
            cur3->val = cur1->val;
            cur1 = cur1->next;
        }

         while(cur2 != NULL) {
            cur3->next = new ListNode;
            cur3 = cur3->next;
            cur3->val = cur2->val;
            cur2 = cur2->next;
        }
        return fin->next;
    }
};
