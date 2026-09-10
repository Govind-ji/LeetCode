class Solution {
public:
    int ans = 0;

    pair<int,int> postorder(TreeNode* root) {
        if (!root) return {0, 0};

        auto left = postorder(root->left);
        auto right = postorder(root->right);

        int sum = left.first + right.first + root->val;
        int cnt = left.second + right.second + 1;

        int avg = sum / cnt;

        if (avg == root->val) ans++;

        return {sum, cnt};
    }

    int averageOfSubtree(TreeNode* root) {
        postorder(root);
        return ans;
    }
};