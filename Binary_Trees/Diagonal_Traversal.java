package Binary_Trees;

import java.util.ArrayList;
import java.util.TreeMap;

public class Diagonal_Traversal {
    void traverse(Node root, TreeMap<Integer, ArrayList<Integer>> map, int diagonal) {
        if (root == null) {
            return;
        }

        map.computeIfAbsent(diagonal, k -> new ArrayList<>()).add(root.data);

        traverse(root.left, map, diagonal + 1);
        traverse(root.right, map, diagonal);

    }

    public ArrayList<Integer> diagonal(Node root) {

        // diagonal vs nodes mapping

        TreeMap<Integer, ArrayList<Integer>> map = new TreeMap<>();

        traverse(root, map, 0);

        ArrayList<Integer> result = new ArrayList<>();

        for (ArrayList<Integer> nodes : map.values()) {
            result.addAll(nodes);
        }

        return result;

    }
}
