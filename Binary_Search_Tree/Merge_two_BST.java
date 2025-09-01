package Binary_Search_Tree;

import java.util.ArrayList;
import java.util.Collections;

public class Merge_two_BST {
    private void inorder(Node root, ArrayList<Integer> list) {

        if (root == null) {
            return;
        }

        inorder(root.left, list);

        list.add(root.data);

        inorder(root.right, list);
    }

    public ArrayList<Integer> merge(Node root1, Node root2) {

        ArrayList<Integer> list1 = new ArrayList<>();
        ArrayList<Integer> list2 = new ArrayList<>();

        inorder(root1, list1);
        inorder(root2, list2);

        list1.addAll(list2);

        Collections.sort(list1);

        return list1;

    }
}
