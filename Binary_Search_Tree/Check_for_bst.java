package Binary_Search_Tree;

public class Check_for_bst {
    private boolean solve(Node root, int min, int max) {
        if (root == null) {
            return true;
        }

        if (root.data <= min || root.data >= max) {
            return false;
        }

        return solve(root.left, min, root.data) &&
                solve(root.right, root.data, max);

    }

    boolean isBST(Node root) {

        return solve(root, Integer.MIN_VALUE, Integer.MAX_VALUE);

    }
}
