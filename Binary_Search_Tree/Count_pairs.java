package Binary_Search_Tree;

public class Count_pairs {
    static int count;

    static boolean searchBST(Node root, int val) {
        if (root == null) {
            return false;
        }
        if (root.data == val) {
            return true;
        }

        if (val < root.data) {
            return searchBST(root.left, val);
        }

        return searchBST(root.right, val);
    }

    static void solve(Node root1, Node root2, int x) {
        if (root1 == null) {
            return;
        }

        if (searchBST(root2, x - root1.data)) {
            count++;
        }

        solve(root1.left, root2, x);
        solve(root1.right, root2, x);
    }

    public static int countPairs(Node root1, Node root2, int x) {

        count = 0;
        solve(root1, root2, x);

        return count;

    }

}
