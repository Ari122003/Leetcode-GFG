package Binary_Trees;

import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;

public class BurningTree {
    private static void parentMapper(Node node, Node parent, HashMap<Node, Node> map) {
        if (node == null) {
            return;
        }

        map.put(node, parent);

        parentMapper(node.left, node, map);
        parentMapper(node.right, node, map);

    }

    private static Node finder(Node root, int target) {
        if (root == null) {
            return null;
        }

        if (root.data == target) {
            return root;
        }

        Node left = finder(root.left, target);
        Node right = finder(root.right, target);

        return left != null ? left : right;
    }

    public static int minTime(Node root, int target) {
        HashMap<Node, Node> parentMap = new HashMap<>();

        parentMapper(root, null, parentMap);

        Node fuse = finder(root, target);

        Queue<Node> q = new LinkedList<>();

        Set<Node> visited = new HashSet<>();

        int time = 0;

        q.add(fuse);
        visited.add(fuse);

        while (!q.isEmpty()) {

            int size = q.size();
            boolean spread = false;

            for (int i = 0; i < size; i++) {

                Node node = q.poll();

                if (node.left != null && visited.add(node.left)) {
                    q.add(node.left);
                    spread = true;
                }
                if (node.right != null && visited.add(node.right)) {
                    q.add(node.right);
                    spread = true;
                }
                if (parentMap.get(node) != null && visited.add(parentMap.get(node))) {
                    q.add(parentMap.get(node));
                    spread = true;
                }

            }

            if (spread) {
                time++;
            }
        }
        return time;
    }
}
