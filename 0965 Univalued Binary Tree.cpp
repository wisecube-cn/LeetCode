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
    vector<int> val;
    
    void InOrderTraverse(TreeNode* root){
        if(root==NULL){
            return;
        }
        InOrderTraverse(root->left);
        val.push_back(root->val);
        InOrderTraverse(root->right);
    }
    
    bool isUnivalTree(TreeNode* root) {
        InOrderTraverse(root);
        sort(val.begin(),val.end());
        val.erase(unique(val.begin(),val.end()),val.end());
        return val.size()==1 ? true : false;
    }
};
