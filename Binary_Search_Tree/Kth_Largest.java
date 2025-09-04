package Binary_Search_Tree;

class Node {
    public int data;
    public Node left;
    public Node right;
}

public class Kth_Largest {
    int x;

    int solve(Node root) {
        if (root == null) {
            return -1;
        }

        int right = solve(root.right);

        if (right != -1) {
            return right;
        }

        x--;
        if (x == 0) {
            return root.data;

        }

        return solve(root.left);

    }

    public int kthLargest(Node root, int k) {

        x = k;

        return solve(root);

    }
}
