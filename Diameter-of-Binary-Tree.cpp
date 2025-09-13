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
int d=0;
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return d;
    }

    int height(TreeNode* root){
        if(!root) return 0;
        else{
            int ld=height(root->left);
            int rd=height(root->right);
             d = max(d,ld+rd);

            return 1+ max(ld,rd);
        }
    }
};