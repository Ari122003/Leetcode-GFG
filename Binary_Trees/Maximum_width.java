package Binary_Trees;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

class Pair {
    int index;
    TreeNode node;

    Pair(int index, TreeNode node) {
        this.index = index;
        this.node = node;
    }
}

public class Maximum_width {

    public int widthOfBinaryTree(TreeNode root) {

        Queue<Pair> q = new LinkedList<>();

        q.add(new Pair(0, root));

        int maxWidth = -1;

        while (!q.isEmpty()) {

            int size = q.size();
            ArrayList<Integer> level = new ArrayList<>();

            for (int i = 0; i < size; i++) {
                Pair p = q.poll();

                int index = p.index;
                TreeNode node = p.node;

                level.add(index);

                if (node.left != null) {
                    q.add(new Pair(2 * index, node.left));
                }
                if (node.right != null) {
                    q.add(new Pair((2 * index) + 1, node.right));
                }
            }

            maxWidth = Math.max(maxWidth, level.get(level.size() - 1) - level.get(0) + 1);

        }

        return maxWidth;
    }
}
