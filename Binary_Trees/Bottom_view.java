package Binary_Trees;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.TreeMap;

public class Bottom_view {
    public ArrayList<Integer> bottomView(Node root) {
        ArrayList<Integer> ans = new ArrayList<>();

        TreeMap<Integer, List<Integer>> map = new TreeMap<>();

        Queue<Pair> q = new LinkedList<>();

        q.add(new Pair(root, 0));

        while (!q.isEmpty()) {

            Pair front = q.poll();

            Node curr = front.node;
            int horizontalDistance = front.hd;

            if (!map.containsKey(horizontalDistance)) {
                map.put(horizontalDistance, new ArrayList<>());
            }

            // remove the last

            map.get(horizontalDistance).clear();

            // then push in that vertical level

            map.get(horizontalDistance).add(curr.data);

            if (curr.left != null) {
                q.offer(new Pair(curr.left, horizontalDistance - 1));
            }
            if (curr.right != null) {
                q.offer(new Pair(curr.right, horizontalDistance + 1));
            }

        }

        for (List<Integer> nodes : map.values()) {
            ans.addAll(nodes);
        }

        return ans;

    }
}
