class Solution {
// private:
//     int depth(TreeNode* root, bool dir, int d) {
//         if (!root) return d;
//         if (dir) return depth(root->left, dir, d + 1);
//         return depth(root->right, dir, d + 1);
//     }
public:
    int countNodes(TreeNode* root) {
        // int left =  depth(root, true, 0);
        // int right = depth(root, false, 0);

        if (!root) return 0;
        int lh = 0, rh = 0;
        TreeNode *l = root, *r = root;
        while (l) { ++lh; l = l->left; }
        while (r) { ++rh; r = r->right; }
        if (left == right) return (1 << lh) - 1;
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};