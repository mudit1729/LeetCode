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
        bool isEqual(TreeNode *s, TreeNode* t) {
            if(s == NULL && t == NULL) return true;
            if(s == NULL || t == NULL) return false;
            if(s->val != t->val) return false;
            return isEqual(s->right, t->right) && isEqual(s->left, t->left);
        }

        bool isSubtree(TreeNode* s, TreeNode* t) {
            if(s==NULL) return false;
            if(s->val == t->val) {if( isEqual(s, t)) return true;}
            return isSubtree(s->left,t) || isSubtree(s->right,t);
        }
    };