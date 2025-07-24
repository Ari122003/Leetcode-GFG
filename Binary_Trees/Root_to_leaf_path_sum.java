package Binary_Trees;

public class Root_to_leaf_path_sum {
    boolean hasPathSum(Node root, int target) {

        if (root == null) {
            return false;
        }

        if (root.left == null && root.right == null) {
            return target == root.data;
        }

        return hasPathSum(root.left, target - root.data) || hasPathSum(root.right, target - root.data);

    }
}
