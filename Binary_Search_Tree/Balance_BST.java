package Binary_Search_Tree;

import java.util.ArrayList;

public class Balance_BST {
    private void inorder(Node root, ArrayList<Node> list) {
        if (root == null) {
            return;
        }

        inorder(root.left, list);
        list.add(root);
        inorder(root.right, list);
    }

    private Node construct(ArrayList<Node> list, int low, int high) {

        if (low > high) {

            return null;
        }

        int mid = low + (high - low) / 2;

        Node root = list.get(mid);

        root.left = construct(list, low, mid - 1);

        root.right = construct(list, mid + 1, high);

        return root;
    }

    Node balanceBST(Node root) {

        ArrayList<Node> list = new ArrayList<>();

        inorder(root, list);

        Node res = construct(list, 0, list.size() - 1);

        return res;

    }
}
