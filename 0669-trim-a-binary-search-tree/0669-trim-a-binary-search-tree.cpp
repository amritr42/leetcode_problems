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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        TreeNode*temp=root;
        TreeNode*k;
        if(root==NULL){
            return root;
        }
        
         k=temp;
         if(temp->val>=low&&temp->val<=high){
             temp->left=trimBST(temp->left,low,high);
             temp->right=trimBST(temp->right,low,high);

             return temp;

         }
        
        if(temp->val>high)
        return trimBST(temp->left,low,high);
        else if(temp->val<low)
        return trimBST(temp->right,low,high);
        return temp;
        
    }
};