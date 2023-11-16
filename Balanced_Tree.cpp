// 110. Balanced Binary Tree

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
    // Optimize solution 
    pair<bool,int> isBalancedFast(TreeNode* node){
        // base case 
        if(node == NULL){
            pair<bool,int> p = make_pair(true,0);
            return p;
        }

        pair<int,int> left = isBalancedFast(node->left);
        pair<int,int> right = isBalancedFast(node->right);

        bool leftAns = left.first;
        bool rightAns = right.first;
        bool cond = (left.second - right.second) <= 1;

        pair<bool,int> ans;
        ans.second = max(left.second,right.second) +1;

        if(leftAns && rightAns && cond){
            ans.first = true;
        }else{
            ans.first = false;
        }
        return ans;
    }

    bool isBalanced(TreeNode* root) {
        return isBalancedFast(root).first;
    }
};
