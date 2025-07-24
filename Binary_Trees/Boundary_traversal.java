package Binary_Trees;

import java.util.ArrayList;

public class Boundary_traversal {
    private void leftSide(Node root, ArrayList<Integer> arr) {

        if (root == null || (root.left == null && root.right == null)) {
            return;
        }

        arr.add(root.data);

        if (root.left != null) {

            leftSide(root.left, arr);
        } else {
            leftSide(root.right, arr);
        }

    }

    private void leaves(Node root, ArrayList<Integer> arr) {

        if (root == null) {
            return;
        }

        if (root.left == null && root.right == null) {
            arr.add(root.data);
            return;
        }

        leaves(root.left, arr);
        leaves(root.right, arr);
    }

    private void rightSide(Node root, ArrayList<Integer> arr) {

        if (root == null || (root.left == null && root.right == null)) {
            return;
        }

        if (root.right != null) {

            rightSide(root.right, arr);
        } else {
            rightSide(root.left, arr);

        }

        arr.add(root.data);
    }

    ArrayList<Integer> boundaryTraversal(Node node) {

        ArrayList<Integer> ans = new ArrayList<>();

        if (node == null)
            return ans;

        if (!(node.left == null && node.right == null)) {

            ans.add(node.data);
        }

        leftSide(node.left, ans);

        leaves(node, ans);

        rightSide(node.right, ans);

        return ans;

    }
}
