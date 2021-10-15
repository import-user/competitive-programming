// https://leetcode.com/problems/insert-into-a-binary-search-tree/

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode * newNode= new TreeNode(val);
        auto ptr = root;
        if(root == NULL) return newNode;
        while(ptr){
            if(ptr->val > val){
                if(!ptr->left){
                    ptr->left = newNode;
                    return root;
                }
                ptr = ptr->left;
            }
            else{
                if(!ptr->right){
                    ptr->right = newNode;
                    return root;
                }
                ptr = ptr->right;
            }
        }
        return root;
    }
};