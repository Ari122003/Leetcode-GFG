package Binary_Search_Tree;

import java.util.ArrayList;
import java.util.Collections;

public class Convert_tree_to_bst {
    private void inorder(Node root, ArrayList<Integer> list) {
        if (root == null) {
            return;
        }

        inorder(root.left, list);
        list.add(root.data);
        inorder(root.right, list);
    }

    private int index;

    private void construct(Node root, ArrayList<Integer> list) {
        if (root == null) {
            return;
        }

        construct(root.left, list);

        root.data = list.get(index++);

        construct(root.right, list);

    }

    Node binaryTreeToBST(Node root) {

        ArrayList<Integer> list = new ArrayList<>();

        inorder(root, list);

        Collections.sort(list);

        index = 0;

        construct(root, list);

        return root;
    }
}
