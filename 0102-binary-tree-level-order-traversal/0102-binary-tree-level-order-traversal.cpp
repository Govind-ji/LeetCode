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
void leveltraversal(vector<vector<int>>&level,TreeNode* root,int l)
{
    if(!root)return ;
    if(level.size()<=l)
    level.push_back({});
    level[l].push_back(root->val);
    leveltraversal(level,root->left,l+1);
    leveltraversal(level,root->right,l+1);
    return;
}
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> level;
        leveltraversal(level,root,0);
        return level;
    }
};