package Binary_Trees;

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {
    }

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

public class Max_Path_Sum {
    int ans = Integer.MIN_VALUE;

    int solve(TreeNode root) {
        if (root == null) {
            return 0;
        }

        int leftMaxPathSum = Math.max(0, solve(root.left));
        int rightMaxPathSum = Math.max(0, solve(root.right));

        ans = Math.max(ans, root.val + leftMaxPathSum + rightMaxPathSum);

        return root.val + Math.max(leftMaxPathSum, rightMaxPathSum);
    }

    public int maxPathSum(TreeNode root) {
        solve(root);

        return ans;
    }
}
