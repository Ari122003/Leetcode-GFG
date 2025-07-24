package Binary_Trees;

public class Diameter {
    int dia = 0;

    private int height(TreeNode root) {
        if (root == null) {
            return 0;
        }

        int leftHeight = height(root.left);
        int rightHeight = height(root.right);

        dia = Math.max(leftHeight + rightHeight, dia);
        return Math.max(leftHeight, rightHeight) + 1;
    }

    public int diameterOfBinaryTree(TreeNode root) {
        height(root);
        return dia;
    }
}
