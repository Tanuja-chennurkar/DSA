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
14    int widthOfBinaryTree(TreeNode* root) {
15        if(root==NULL) return 0;
16
17        long long width=0;
18        queue<pair<TreeNode*,long long>> q;
19        q.push({root,0});
20
21        while(!q.empty()){
22            int size=q.size();
23            long long start= q.front().second;
24            long long end=q.back().second;
25
26            width=max(width,end-start+1);
27
28            for(int i=0;i<size;i++){
29                auto curr=q.front();
30                q.pop();
31
32                TreeNode* node=curr.first;
33                long long index=curr.second-start;
34                if(node->left){
35                    q.push({node->left,2*index+1});
36                }
37                if(node->right){
38                    q.push({node->right,2*index+2});
39                }
40            }
41        }
42    return width;
43    }
44};