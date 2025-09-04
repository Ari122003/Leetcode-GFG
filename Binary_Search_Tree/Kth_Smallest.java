package Binary_Search_Tree;

public class Kth_Smallest {
    int x;

    int solve(Node root) {
        if (root == null) {
            return -1;
        }

        int left = solve(root.left);

        if (left != -1) {
            return left;
        }

        x--;
        if (x == 0) {
            return root.data;

        }

        return solve(root.right);

    }

    public int kthSmallest(Node root, int k) {

        x = k;

        return solve(root);
    }
}
