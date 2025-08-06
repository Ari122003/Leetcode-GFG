package Binary_Trees;

public class Convert_to_sum_tree {
    int solve(Node root) {
        if (root == null) {
            return 0;
        }

        if (root.left == null && root.right == null) {

            int data = root.data;
            root.data = 0;
            return data;
        }

        int leftSum = solve(root.left);
        int rightSum = solve(root.right);

        int data = root.data;

        root.data = leftSum + rightSum;

        return data + leftSum + rightSum;

    }

    public void toSumTree(Node root) {

        solve(root);

    }
}
