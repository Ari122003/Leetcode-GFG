package Binary_Search_Tree;

import java.util.ArrayList;

public class Median {
    private static void trav(Node root, ArrayList<Integer> arr) {
        if (root == null) {
            return;
        }

        trav(root.left, arr);

        arr.add(root.data);

        trav(root.right, arr);
    }

    public static float findMedian(Node root) {

        ArrayList<Integer> arr = new ArrayList<>();

        trav(root, arr);

        int size = arr.size();

        if (size % 2 == 0) {
            return (float) (arr.get(size / 2) + arr.get(size / 2 - 1)) / 2;
        }

        return arr.get(size / 2);
    }
}
