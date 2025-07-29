package Binary_Trees;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Queue;
import java.util.TreeMap;

class Tuple {
    TreeNode node;
    int col;
    int row;

    public Tuple(TreeNode node, int row, int col) {
        this.node = node;
        this.row = row;
        this.col = col;
    }
}

public class Column_by_volumn_vertical_order {
    public List<List<Integer>> verticalTraversal(TreeNode root) {

        List<List<Integer>> ans = new ArrayList<>();

        if (root == null)
            return ans;

        // mapping of row - column - priority queue of node values of each level
        TreeMap<Integer, TreeMap<Integer, PriorityQueue<Integer>>> map = new TreeMap<>();

        Queue<Tuple> q = new LinkedList<>();

        q.add(new Tuple(root, 0, 0));

        while (!q.isEmpty()) {

            Tuple front = q.poll();

            TreeNode curr = front.node;
            int row = front.row;
            int col = front.col;

            map
                    .computeIfAbsent(col, x -> new TreeMap<>())
                    .computeIfAbsent(row, x -> new PriorityQueue<>())
                    .offer(curr.data);

            if (curr.left != null) {
                q.offer(new Tuple(curr.left, row + 1, col - 1));
            }

            if (curr.right != null) {
                q.offer(new Tuple(curr.right, row + 1, col + 1));
            }

        }

        // trversing outer tree map

        for (TreeMap<Integer, PriorityQueue<Integer>> rows : map.values()) {

            List<Integer> cols = new ArrayList<>();

            // traversing inner tree map

            for (PriorityQueue<Integer> pq : rows.values()) {

                while (!pq.isEmpty()) {
                    cols.add(pq.poll());
                }
            }

            ans.add(cols);
        }

        return ans;

    }
}
