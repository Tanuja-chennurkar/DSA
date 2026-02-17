1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int tilt=0;
15    int dfs(TreeNode* root){
16        if(root==NULL) return 0;
17
18        int left=dfs(root->left);
19        int right=dfs(root->right);
20
21        tilt+=abs(left-right);
22        return left+right+root->val;
23
24    }
25    int findTilt(TreeNode* root) {
26        dfs(root);
27        return tilt;
28    }
29};