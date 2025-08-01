package Binary_Trees;

import java.util.ArrayList;
import java.util.TreeMap;

public class Vertical_order_traversal {
    void traverse(Node root, TreeMap<Integer, TreeMap<Integer, ArrayList<Integer>>> map, int hd, int level) {
        if (root == null)
            return;

        map
                .computeIfAbsent(hd, k -> new TreeMap<>())
                .computeIfAbsent(level, k -> new ArrayList<>())
                .add(root.data);

        traverse(root.left, map, hd - 1, level + 1);
        traverse(root.right, map, hd + 1, level + 1);
    }

    public ArrayList<Integer> vertical(Node root) {
        TreeMap<Integer, TreeMap<Integer, ArrayList<Integer>>> map = new TreeMap<>();
        traverse(root, map, 0, 0);

        ArrayList<Integer> result = new ArrayList<>();
        for (TreeMap<Integer, ArrayList<Integer>> levelMap : map.values()) {
            for (ArrayList<Integer> nodes : levelMap.values()) {
                result.addAll(nodes);
            }
        }

        return result;
    }
}
