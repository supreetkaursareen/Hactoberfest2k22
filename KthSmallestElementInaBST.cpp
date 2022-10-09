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
    
    void func(TreeNode *root, int k, int &ct, int &kthElement) {
        if(root==NULL) {
            return;
        }
        func(root->left, k, ct, kthElement);
        ct++;
        if(ct==k) {
            kthElement = root->val;
        }
        func(root->right, k, ct, kthElement);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int kthElement;
        int ct = 0;
        func(root, k, ct, kthElement);
        return kthElement;
    }
};
