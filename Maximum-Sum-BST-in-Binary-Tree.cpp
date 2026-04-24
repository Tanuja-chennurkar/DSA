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
14    int ans=0;
15    struct Info{
16        bool isbst;
17        int sum;
18        int minval;
19        int maxval;
20    };
21
22    Info helper(TreeNode* root){
23        if(!root) return{true,0,INT_MAX,INT_MIN};
24        Info left=helper(root->left);
25        Info right=helper(root->right);
26        if(left.isbst&&right.isbst&&
27        left.maxval<root->val&&right.minval>root->val){
28            int sum=left.sum+right.sum+root->val;
29            ans=max(sum,ans);
30
31            return {
32                true,sum,
33                min(root->val,left.minval),
34                max(root->val,right.maxval)
35            };
36        }
37        return{false,0,INT_MIN,INT_MAX};
38    }
39    int maxSumBST(TreeNode* root) {
40        helper(root);
41        return ans;
42    }
43};