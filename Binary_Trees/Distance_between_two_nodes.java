package Binary_Trees;

public class Distance_between_two_nodes {
    Node getLCA(Node root, int n1, int n2) {
        if (root == null) {
            return null;
        }
        if (root.data == n1 || root.data == n2) {
            return root;
        }

        Node leftValue = getLCA(root.left, n1, n2);
        Node rightValue = getLCA(root.right, n1, n2);

        if (leftValue != null && rightValue == null) {
            return leftValue;
        }

        if (leftValue == null && rightValue != null) {
            return rightValue;
        }

        if (leftValue != null && rightValue != null) {
            return root;
        }

        return null;

    }

    int getPath(Node root, int level, int target) {

        if (root == null) {
            return -1;
        }

        if (root.data == target) {
            return level;
        }

        int hasLeft = getPath(root.left, level + 1, target);

        if (hasLeft != -1) {
            return hasLeft;
        }

        return getPath(root.right, level + 1, target);
    }

    int findDist(Node root, int a, int b) {

        Node lca = getLCA(root, a, b);

        int aPath = getPath(lca, 0, a);
        int bPath = getPath(lca, 0, b);

        return aPath + bPath;
    }
}
