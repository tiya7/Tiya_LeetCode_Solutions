class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == NULL)
            return 0;

        int leftHeight = 0;
        int rightHeight = 0;

        TreeNode* left = root;
        TreeNode* right = root;

        while (left != NULL) {
            leftHeight++;
            left = left->left;
        }

        while (right != NULL) {
            rightHeight++;
            right = right->right;
        }

        // If both heights are same, tree is completely full
        if (leftHeight == rightHeight) {
            return (1 << leftHeight) - 1;
        }

        // Otherwise count left and right subtrees
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};