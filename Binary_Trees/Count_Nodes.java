package Binary_Trees;

public class Count_Nodes {
    private int count(TreeNode root) {
        if (root == null) {
            return 0;
        }

        return count(root.left) + count(root.right) + 1;
    }

    public int countNodes(TreeNode root) {

        return count(root);

    }

}
