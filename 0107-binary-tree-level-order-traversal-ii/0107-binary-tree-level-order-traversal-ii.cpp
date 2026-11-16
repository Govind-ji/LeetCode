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
void leveltraverse(vector<vector<int>>& level,TreeNode*root,int l)
{
    if(!root)return ;
    if(level.size()<=l)level.push_back({});
    level[l].push_back(root->val);
    leveltraverse(level,root->left,l+1);
    leveltraverse(level,root->right,l+1);
    return ;
}
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> level;
        leveltraverse(level,root,0);
        reverse(level.begin(),level.end());
        return level;
    }
};