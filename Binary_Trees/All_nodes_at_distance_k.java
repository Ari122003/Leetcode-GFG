package Binary_Trees;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class All_nodes_at_distance_k {
    private void parentMapper(TreeNode node, TreeNode parent, HashMap<TreeNode, TreeNode> map) {
        if (node == null) {
            return;
        }

        map.put(node, parent);

        parentMapper(node.left, node, map);
        parentMapper(node.right, node, map);

    }

    private void solve(TreeNode node, TreeNode parent, int distance, int k, HashMap<TreeNode, TreeNode> map,
            List<Integer> result) {
        if (node == null) {
            return;
        }

        if (distance == k) {
            result.add(node.data);
            return;
        }

        if (node.left != parent) {
            solve(node.left, node, distance + 1, k, map, result);
        }
        if (node.right != parent) {
            solve(node.right, node, distance + 1, k, map, result);
        }

        if (map.get(node) != parent) {
            solve(map.get(node), node, distance + 1, k, map, result);

        }
    }

    public List<Integer> distanceK(TreeNode root, TreeNode target, int k) {

        HashMap<TreeNode, TreeNode> map = new HashMap<>();

        parentMapper(root, null, map);

        List<Integer> result = new ArrayList<>();

        solve(target, null, 0, k, map, result);

        return result;

    }
}
