package Binary_Trees;

class TreeNode {
    int data;
    TreeNode left, right;

    TreeNode(int item) {
        data = item;
        left = right = null;
    }
}

public class Maximum_Depth {
    int solve(TreeNode root, int h) {
        if (root == null) {
            return 0;
        }

        return Math.max(solve(root.left, h), solve(root.right, h)) + 1;
    }

    public int maxDepth(TreeNode root) {
        return solve(root, 0);
    }
}
