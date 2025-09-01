package Binary_Search_Tree;

public class Floor {
    public static int floor(Node root, int x) {
        // Code here

        if (root == null) {

            return -1;
        }

        if (root.data == x) {
            return root.data;
        }

        if (x < root.data) {

            return floor(root.left, x);
        }

        int f = floor(root.right, x);

        return f == -1 ? root.data : f;
    }
}
