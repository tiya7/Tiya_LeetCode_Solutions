class Solution {
public:
    unordered_map<int, int> mp;
    int idx = 0;

    TreeNode* solve(vector<int>& preorder, int l, int r) {
        if (l > r) return nullptr;

        TreeNode* root = new TreeNode(preorder[idx++]);
        int mid = mp[root->val];

        root->left = solve(preorder, l, mid - 1);
        root->right = solve(preorder, mid + 1, r);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;
        return solve(preorder, 0, inorder.size() - 1);
    }
};