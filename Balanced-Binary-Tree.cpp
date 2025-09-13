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
    bool isBalanced(TreeNode* root) {
        return height(root)!=-1;
    }
private:
    int height(TreeNode* root){
        if(root==nullptr) return 0;
        int ld=height(root->left);
        if(ld==-1) return -1;
        int rd=height(root->right);
        if(rd==-1) return -1;
        if(abs(ld-rd)>1) return -1;
        return 1+max(ld,rd);
    }
};