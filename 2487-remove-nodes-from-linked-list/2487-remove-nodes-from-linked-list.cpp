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
    ListNode* removeNodes(ListNode* head) {
        vector<int> v;
        while(head)
        {
            v.push_back(head->val);
            head=head->next;
        }
        reverse(v.begin(),v.end());
        int maxi=v[0];
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<maxi)
            v[i]=-1;
            else
            maxi=v[i];
        }
        reverse(v.begin(),v.end());
        ListNode* ptr=new ListNode(0);
        head=ptr;
        for(int i:v)
        {
            if(i!=-1)
            {
                ListNode* p=new ListNode(i);
            head->next=p;
            head=head->next;
            }
        }
        return ptr->next;
    }
};