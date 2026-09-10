/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int ans=0;
    public int [] rec(TreeNode root)
    {
        if(root==null)
        return new int []{0,0};
        int left[]=rec(root.left);
        int right[]=rec(root.right);
        int sum=left[0]+root.val+right[0];
        int cnt=left[1]+right[1]+1;
        if(sum/cnt==root.val)ans++;
        return new int []{sum,cnt};
    }
    public int averageOfSubtree(TreeNode root) {
        rec(root);
        return ans;
    }
}