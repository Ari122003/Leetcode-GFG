package Binary_Trees;

public class Kth_ancestor {
    private int solve(Node root, int[] k, int node) {

        if (root == null)
            return -1;

        if (root.data == node)
            return root.data;

        int left = solve(root.left, k, node);
        int right = solve(root.right, k, node);

        if (left == -1 && right == -1)
            return -1;

        k[0]--;

        if (k[0] == 0) {
            return root.data;
        }

        return (left != -1) ? left : right;

    }

    public int kthAncestor(Node root, int k, int node) {

        int[] arr = new int[1];

        arr[0] = k;

        int ans = solve(root, arr, node);

        if (ans == -1 || arr[0] > 0) {
            return -1;
        }
        return ans;

    }
}
