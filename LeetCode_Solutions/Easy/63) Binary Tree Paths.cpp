class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;

        if (!root)
            return ans;

        if (!root->left && !root->right) {
            ans.push_back(to_string(root->val));
            return ans;
        }

        vector<string> left = binaryTreePaths(root->left);
        vector<string> right = binaryTreePaths(root->right);

        for (string s : left)
            ans.push_back(to_string(root->val) + "->" + s);

        for (string s : right)
            ans.push_back(to_string(root->val) + "->" + s);

        return ans;
    }
};