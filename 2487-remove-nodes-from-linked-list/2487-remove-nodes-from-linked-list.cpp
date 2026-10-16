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
ListNode* reverse(ListNode* head)
{
    ListNode* prev=NULL;
    while(head)
    {
        ListNode* next=head->next;
        head->next=prev;
        prev=head;
        head=next;        
    }
    return prev;
}
    ListNode* removeNodes(ListNode* head) {
        head=reverse(head);
        ListNode* ptr=new ListNode(0);
        ListNode* p=ptr;
        while(head)
        {
            if(head->val>=ptr->val)
            {
                ListNode* rt=new ListNode(head->val);
                ptr->next=rt;
                ptr=ptr->next;
            }
            head=head->next;
        }
        p=p->next;
        return reverse(p);
    }
};