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
pair<int,int> dphelp(TreeNode* root)
{
    if(!root)return {0,0};
    pair<int,int> l=dphelp(root->left);
    pair<int,int> r=dphelp(root->right);
    int inc=root->val+l.second+r.second;
    int exc=max(l.first,l.second)+max(r.second,r.first);
    return {inc,exc};
}
    int rob(TreeNode* root) {
        pair<int,int> dp=dphelp(root);
        return max(dp.first,dp.second);
    }
};