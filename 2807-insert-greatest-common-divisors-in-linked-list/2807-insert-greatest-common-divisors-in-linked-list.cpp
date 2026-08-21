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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* ptr=head;
        while(head && head->next)
        {
            int x=gcd(head->val,head->next->val);
            ListNode* p=new ListNode(x);
            p->next=head->next;
            head->next=p;
            head=head->next->next;
        }
        return ptr;
    }
};