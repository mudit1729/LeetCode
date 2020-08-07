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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        int left = getDepth(root->left);
        int right = getDepth(root->right);
        int diameter = left + right;
        return max(max(diameter, diameterOfBinaryTree(root->left)), diameterOfBinaryTree(root->right));
    }
    
    int getDepth(TreeNode* root){
        if(root==NULL) return 0;
        return max(getDepth(root->left)+1, getDepth(root->right)+1);
    }
};