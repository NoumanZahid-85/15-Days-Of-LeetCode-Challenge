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
 // Solution 1 in Pyhton.
//  # Definition for a binary tree node.
// # class TreeNode:
// #     def __init__(self, val=0, left=None, right=None):
// #         self.val = val
// #         self.left = left
// #         self.right = right
// class Solution:
//     def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
//         self.result = 0
//         def dfs(cur):
//             if not cur:
//                 return 0

//             left = dfs(cur.left)    
//             right = dfs(cur.right)
//             self.result = max(self.result, left + right)
//             return 1 + max(left, right)
//         dfs(root)    
//         return self.result
 
// Soution 2 in C++.
class Solution {
public:
    // Height helper function.
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int leftHt = height(root->left);
        int rightHt = height(root->right);
        return 1 + max(leftHt, rightHt);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);
        int currentDiameter = height(root->left) + height(root->right);
        // ({}) it is initializer list index for compering more than two numbers.
        return max({leftDiameter, rightDiameter, currentDiameter});
    }
};