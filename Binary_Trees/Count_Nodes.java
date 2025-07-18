package Binary_Trees;

public class Count_Nodes {
    private int count(TreeNode root, int c) {
        if (root == null) {
            return 0;
        }

        return count(root.left, c) + count(root.right, c) + 1;
    }

    public int countNodes(TreeNode root) {

        return count(root, 0);

    }
}
