package Binary_Search_Tree;

public class Two_sum {
    private TreeNode originalRoot;
    private boolean ans;

    private boolean find(TreeNode root, TreeNode skip, int val) {
        if (root == null)
            return false;

        if (root != skip && root.val == val) {
            return true;
        }

        if (val < root.val) {
            return find(root.left, skip, val);
        } else {
            return find(root.right, skip, val);
        }
    }

    private void solve(TreeNode node, int k) {
        if (node == null || ans)
            return;

        if (find(originalRoot, node, k - node.val)) {
            ans = true;
            return;
        }

        solve(node.left, k);
        solve(node.right, k);
    }

    public boolean findTarget(TreeNode root, int k) {
        ans = false;
        originalRoot = root;

        solve(root, k);

        return ans;
    }
}
