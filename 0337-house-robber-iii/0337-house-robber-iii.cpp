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
    pair<int,int> l=rec(root->left);
    pair<int,int> r=rec(root->right);
    int inc=root->val+l.second+r.second;  //if we are including the current node then we have to take the exc part
    int exc=max(l.first,l.second)+max(r.first,r.second);//if we are excluding the current node then we can include or excude the previous node
    return {inc,exc};
}
    int rob(TreeNode* root) {
        pair <int,int> maxi=rec(root);
        return max(maxi.first,maxi.second);
    }
};