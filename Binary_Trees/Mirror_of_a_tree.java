package Binary_Trees;

public class Mirror_of_a_tree {
    public TreeNode invertTree(TreeNode root) {
        if (root == null) {
            return null;
        }

        TreeNode temp = invertTree(root.left);
        root.left = invertTree(root.right);
        root.right = temp;

        return root;

    }
}
