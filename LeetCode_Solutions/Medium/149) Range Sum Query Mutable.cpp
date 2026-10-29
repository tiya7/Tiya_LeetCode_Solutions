class NumArray {
    vector<int> nums;
    vector<int> tree;
    int n;

public:
    NumArray(vector<int>class NumArray {
    vector<int> nums;
    vector<int> tree;
    int n;

public:
    NumArray(vector<int>& nums) {
        this->nums = nums;
        n = nums.size();
        tree.resize(4 * n);
        build(1, 0, n - 1);
    }

    void build(int node, int start, int end) {
        if (start == end) {
            tree[node] = nums[start];
            return;
        }

        int mid = (start + end) / 2;
        build(node * 2, start, mid);
        build(node * 2 + 1, mid + 1, end);

        tree[node] = tree[node * 2] + tree[node * 2 + 1];
    }

    void update(int index, int val) {
        updateTree(1, 0, n - 1, index, val);
        nums[index] = val;
    }

    void updateTree(int node, int start, int end, int index, int val) {
        if (start == end) {
            tree[node] = val;
            return;
        }

        int mid = (start + end) / 2;

        if (index <= mid)
            updateTree(node * 2, start, mid, index, val);
        else
            updateTree(node * 2 + 1, mid + 1, end, index, val);

        tree[node] = tree[node * 2] + tree[node * 2 + 1];
    }

    int sumRange(int left, int right) {
        return query(1, 0, n - 1, left, right);
    }

    int query(int node, int start, int end, int left, int right) {
        if (left <= start && end <= right)
            return tree[node];

        if (end < left || start > right)
            return 0;

        int mid = (start + end) / 2;

        return query(node * 2, start, mid, left, right)
             + query(node * 2 + 1, mid + 1, end, left, right);
    }
}; nums) {
        this->nums = nums;
        n = nums.size();
        tree.resize(4 * n);
        build(1, 0, n - 1);
    }

    void build(int node, int start, int end) {
        if (start == end) {
            tree[node] = nums[start];
            return;
        }

        int mid = (start + end) / 2;
        build(node * 2, start, mid);
        build(node * 2 + 1, mid + 1, end);

        tree[node] = tree[node * 2] + tree[node * 2 + 1];
    }

    void update(int index, int val) {
        updateTree(1, 0, n - 1, index, val);
        nums[index] = val;
    }

    void updateTree(int node, int start, int end, int index, int val) {
        if (start == end) {
            tree[node] = val;
            return;
        }

        int mid = (start + end) / 2;

        if (index <= mid)
            updateTree(node * 2, start, mid, index, val);
        else
            updateTree(node * 2 + 1, mid + 1, end, index, val);

        tree[node] = tree[node * 2] + tree[node * 2 + 1];
    }

    int sumRange(int left, int right) {
        return query(1, 0, n - 1, left, right);
    }

    int query(int node, int start, int end, int left, int right) {
        if (left <= start && end <= right)
            return tree[node];

        if (end < left || start > right)
            return 0;

        int mid = (start + end) / 2;

        return query(node * 2, start, mid, left, right)
             + query(node * 2 + 1, mid + 1, end, left, right);
    }
};