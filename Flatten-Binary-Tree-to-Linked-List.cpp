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
14    void flatten(TreeNode* root) {
15        TreeNode* curr=root;
16        while(curr!=NULL){
17            if(curr->left!=NULL){
18                TreeNode* temp=curr->left;
19            
20            while(temp->right!=NULL){
21                temp=temp->right;
22            }
23            temp->right=curr->right;
24            curr->right=curr->left;
25            curr->left=NULL;
26        }
27        
28        curr=curr->right;
29    }
30    }
31};