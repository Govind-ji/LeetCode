/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
pair<int,int> rec(TreeNode* root)
{
    if(!root)return {0,0};
    auto i=rec(root->left);
    auto j=rec(root->right);
    int inc=root->val+i.second+j.second;
    int exc=max(i.second,i.first)+max(j.second,j.first);
    return {inc,exc};
}

    int rob(TreeNode* root) {
        auto t=rec(root);
        return max(t.first,t.second);
    }
};