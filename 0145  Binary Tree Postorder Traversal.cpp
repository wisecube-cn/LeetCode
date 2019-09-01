/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> ret;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL){
            return ret;
        }
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        if(root->val){
            ret.push_back(root->val);
        }
        return ret;
    }
};
