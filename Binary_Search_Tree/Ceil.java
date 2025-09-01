package Binary_Search_Tree;

public class Ceil {
    int findCeil(Node root, int x) {
        // code here

        if (root == null) {

            return -1;
        }

        if (root.data == x) {
            return root.data;
        }

        if (x > root.data) {

            return findCeil(root.right, x);
        }

        int ceil = findCeil(root.left, x);

        return ceil == -1 ? root.data : ceil;

    }
}
