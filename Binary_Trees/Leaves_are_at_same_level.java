package Binary_Trees;

public class Leaves_are_at_same_level {
    int compareLevel = -1;

    private boolean solve(Node root, int level) {
        if (root == null) {
            return true;
        }

        if (root.left == null && root.right == null) {

            if (compareLevel == -1) {
                compareLevel = level;
            }

            return compareLevel == level;

        }

        return solve(root.left, level + 1) && solve(root.right, level + 1);

    }

    boolean check(Node root) {

        return solve(root, 0);
    }
}
