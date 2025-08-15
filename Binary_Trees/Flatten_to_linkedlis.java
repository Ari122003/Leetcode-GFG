package Binary_Trees;

public class Flatten_to_linkedlis {
    public void flatten(TreeNode root) {
        if (root == null) {
            return;
        }

        flatten(root.right);

        TreeNode temp = root.right;

        if (root.left == null) {
            return;
        }
        flatten(root.left);

        TreeNode tail = root.left;

        while (tail.right != null) {
            tail = tail.right;
        }

        root.right = root.left;

        root.left = null;

        tail.right = temp;

    }
}
