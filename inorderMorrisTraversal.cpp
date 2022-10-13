/**
 * Morris Traversal: Using Morris Traversal, we can traverse the tree without using stack and recursion. The idea of Morris Traversal is based on Threaded Binary Tree. In this traversal, we first create links to Inorder successor and print the data using these links, and finally revert the changes to restore original tree. 
 */



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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        TreeNode *cur = root;
        while(cur!=NULL){
            if(cur->left==NULL){
                res.push_back(cur->val);
                cur=cur->right;
            }
            else {
                TreeNode *pr = cur->left;
                while(pr->right!=NULL&&pr->right!=cur)pr=pr->right;
                if(pr->right==NULL){
                    pr->right=cur;
                    cur=cur->left;
                }
                else{
                    pr->right=NULL;
                    res.push_back(cur->val);
                    cur=cur->right;
                }
            }
        }
        return res;
    }
};
