package Binary_Trees;

public class Children_sum_tree {
    public static int isSumProperty(Node root) {

        if (root == null || (root.left == null && root.right == null)) {
            return 1;
        }

        int leftAns = isSumProperty(root.left);
        int rightAns = isSumProperty(root.right);

        if (root.left != null && root.right == null) {

            return root.data == root.left.data && leftAns == 1 ? 1 : 0;
        }

        if (root.left == null && root.right != null) {
            return root.data == root.right.data && rightAns == 1 ? 1 : 0;
        }

        return leftAns == 1 && rightAns == 1 && root.left.data + root.right.data == root.data ? 1 : 0;

    }
}
