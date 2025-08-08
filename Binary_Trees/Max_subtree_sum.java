package Binary_Trees;

public class Max_subtree_sum {
    static int maxSum;

    private static int solve(Node root) {
        if (root == null) {
            return 0;
        }

        int leftSum = solve(root.left);
        int rightSum = solve(root.right);

        int subtreeSum = root.data + leftSum + rightSum;

        maxSum = Math.max(maxSum, subtreeSum);

        return subtreeSum;

    }

    public static int findLargestSubtreeSum(Node root) {
        maxSum = Integer.MIN_VALUE;
        solve(root);

        return maxSum;

    }
}
