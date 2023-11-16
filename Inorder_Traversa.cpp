// 94. Binary Tree Inorder Traversal
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
        //  Iterative approach
        //  Using a Auxilary stack for efficient solution
        // stack<TreeNode*> stk;
        // vector<int> inorder;
        // TreeNode* node = root;
        
        // // While loop 
        // while(true){
        //     // Check loop is null or not
        //     if(node != NULL ){
        //         stk.push(node);
        //         node = node->left;
        //     }else{
        //         if(stk.empty() == true) break;
        //         node = stk.top();
        //         inorder.push_back(node->val);
        //         node = node->right;
        //     }
        // }
        // return inorder;


       // Recursive approch
       vector<int> ans;
       TreeNode* node = root;
       inorder(node,ans);
       return ans;
    }

    void inorder(TreeNode* node, vector<int> &ans){
        if(node == nullptr){
            return;
        }

        inorder(node->left,ans);
        ans.push_back(node->val);
        inorder(node->right,ans);
    }
};
