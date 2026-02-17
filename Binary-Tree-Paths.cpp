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
14    void dfs(TreeNode* root,string s, vector<string> &result){
15        if(root ==NULL) return ;
16        s+=to_string(root->val);
17
18        if(root->left==NULL&&root->right==NULL){
19            result.push_back(s);
20            return;
21
22        }
23        s+="->";
24        dfs(root->right,s,result);
25        dfs(root->left,s,result);
26    }
27    vector<string> binaryTreePaths(TreeNode* root) {
28        vector<string> result;
29        dfs(root,"",result);
30        return result;
31    }
32};