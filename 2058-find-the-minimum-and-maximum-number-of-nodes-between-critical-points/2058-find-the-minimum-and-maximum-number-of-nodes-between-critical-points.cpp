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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v;
        int i=1;
        if(!head || !head->next || !head->next->next)return {-1,-1};
        int prev=head->val;
        head=head->next;
        while(head->next)
        {
            if((head->val>prev && head->next->val<head->val)|| (head->val<prev && head->next->val>head->val))
            v.push_back(i);
            i++;
            prev=head->val;
            head=head->next;
        }
        if(v.size()<2)return {-1,-1};
        int n=v.size();
        int mind=INT_MAX;
        int maxd=v.back()-v.front();
        for(int i1=1;i1<n;i1++)
        mind=min(mind,v[i1]-v[i1-1]);
        return {mind,maxd};
    }
};