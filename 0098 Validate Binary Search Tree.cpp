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
    vector<int> list;
    bool isValidBST(TreeNode* root) {
        InOrderTraverse(root);//中序遍历二叉树
        for(int i=1;i<list.size();i++){
            //如果后面一个元素小于或者等于前面的元素
            //则二叉树不满足题目要求
            if(list[i-1]>=list[i]){
                return false;
            }
        }
        return true;
    }
    
    //中序遍历二叉树
    //将访问到的元素添加到连表list中
    //如果二叉树满足题目条件，所得到的连表list中的元素应该从小到大排序
    void InOrderTraverse(TreeNode* T){
        if(T==NULL){
            return ;
        }
        InOrderTraverse(T->left);
        list.push_back(T->val);
        InOrderTraverse(T->right);
    }
};
