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
14    TreeNode* buildBST(vector<int>& nums, int left, int right){
15        if(left > right) return NULL;
16
17        int mid = left + (right - left) / 2;
18
19        TreeNode* root = new TreeNode(nums[mid]);
20
21        root->left = buildBST(nums, left, mid - 1);
22        root->right = buildBST(nums, mid + 1, right);
23
24        return root;
25    }
26
27    TreeNode* sortedArrayToBST(vector<int>& nums) {
28        return buildBST(nums, 0, nums.size() - 1);
29    }
30};