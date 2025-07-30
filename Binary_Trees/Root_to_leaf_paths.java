package Binary_Trees;

import java.util.ArrayList;

public class Root_to_leaf_paths {
    private static void solve(Node root, ArrayList<ArrayList<Integer>> arr, ArrayList<Integer> path) {
        if (root == null) {
            return;
        }

        path.add(root.data);

        if (root.left == null && root.right == null) {
            arr.add(new ArrayList<>(path));
        }

        solve(root.left, arr, path);
        solve(root.right, arr, path);

        path.remove(path.size() - 1);

    }

    public static ArrayList<ArrayList<Integer>> Paths(Node root) {

        ArrayList<ArrayList<Integer>> res = new ArrayList<>();

        ArrayList<Integer> path = new ArrayList<>();

        solve(root, res, path);

        return res;

    }
}
