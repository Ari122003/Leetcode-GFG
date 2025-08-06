package Binary_Trees;

public class Sum_Tree {
    private int solve(Node root) {

        if (root == null) {
            return 0;
        }

        if (root.left == null && root.right == null) {

            return root.data;
        }

        int leftSum = solve(root.left);
        int rightSum = solve(root.right);

        if (leftSum == -1 || rightSum == -1) {
            return -1;
        }

        if (leftSum + rightSum == root.data) {
            return leftSum + rightSum + root.data;
        }

        return -1;

    }

    boolean isSumTree(Node root) {

        return solve(root) != -1;

    }
}
