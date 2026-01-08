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
    long long a = 0;
    int findSum(TreeNode* root){
        if(root==nullptr) return 0;
        return root->val + findSum(root->left) + findSum(root->right);
    }
    int findCurrSum(TreeNode* root, int total, long long maxSum)
    {
        if(root==nullptr)return 0;
        int curr = findCurrSum(root->left,total,maxSum) + findCurrSum(root->right,total,maxSum) + root->val;
        long long totalProd = (long long)curr * (total - curr);
        maxSum = max(maxSum, totalProd);
        a = max(totalProd,a);
        return curr;
    }
    int maxProduct(TreeNode* root) {
        int totalSum = findSum(root);
        long long maxSum = 0;
        long long ans = findCurrSum(root,totalSum,maxSum);
        return a % int(1e9+7);
    }
};