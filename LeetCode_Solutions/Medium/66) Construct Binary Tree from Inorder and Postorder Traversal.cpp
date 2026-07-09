class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == NULL)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            vector<int> level;
            int size = q.size();

            for (int i = 0; i < size; i++) {

                TreeNode* temp = q.front();
                q.pop();

                level.push_back(temp->val);

                if (temp->left != NULL)
                    q.push(temp->left);

                if (temp->right != NULL)
                    q.push(temp->right);
            }

            ans.push_back(level);
        }

        vector<vector<int>> result;

        for (int i = ans.size() - 1; i >= 0; i--) {
            result.push_back(ans[i]);
        }

        return result;
    }
};
