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
    void DFS(TreeNode* root,int max,int &ans)
    {
        if(root==NULL) return;
        if(root->val >= max){
            ans++;
            max = root->val;
        }
        DFS(root->left,max,ans);
        DFS(root->right,max,ans);
    }
    int goodNodes(TreeNode* root) {
        int ans = 0;
        DFS(root,root->val,ans);
        return ans;
    }
};