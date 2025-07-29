package Binary_Trees;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.TreeMap;

class Pair {
    Node node;
    int hd;

    public Pair(Node node, int hd) {
        this.node = node;
        this.hd = hd;
    }
}

public class Vertical_order_traversal {
    public List<List<Integer>> verticalTraversal(Node root) {

        List<List<Integer>> ans = new ArrayList<>();

        if (root == null)
            return ans;

        TreeMap<Integer, List<Integer>> map = new TreeMap<>();

        Queue<Pair> q = new LinkedList<>();

        q.add(new Pair(root, 0));

        while (!q.isEmpty()) {

            int size = q.size();
            TreeMap<Integer, List<Integer>> level = new TreeMap<>();

            for (int i = 0; i < size; i++) {

                Pair front = q.poll();

                Node curr = front.node;
                int horizontalDistance = front.hd;

                level.computeIfAbsent(horizontalDistance, k -> new ArrayList<>()).add(curr.data);

                if (curr.left != null) {
                    q.offer(new Pair(curr.left, horizontalDistance - 1));
                }
                if (curr.right != null) {
                    q.offer(new Pair(curr.right, horizontalDistance + 1));
                }
            }

            for (Map.Entry<Integer, List<Integer>> entry : level.entrySet()) {

                int hd = entry.getKey();

                map.computeIfAbsent(hd, k -> new ArrayList<>()).addAll(entry.getValue());
            }

        }

        for (List<Integer> nodes : map.values()) {
            ans.add(nodes);
        }

        return ans;

    }
}
