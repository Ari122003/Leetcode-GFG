package Binary_Trees;

import java.util.ArrayList;

public class K_sum_path {

    private static void solve(Node root, int sum, int target, ArrayList<Integer> path,
            ArrayList<ArrayList<Integer>> allPaths) {

        if (root == null) {
            return;
        }

        sum += root.data;

        path.add(root.data);

        if (sum == target) {
            allPaths.add(new ArrayList<>(path));

        }

        solve(root.left, sum, target, path, allPaths);
        solve(root.right, sum, target, path, allPaths);

        path.remove(path.size() - 1);

    }

    public static ArrayList<ArrayList<Integer>> printPaths(Node root, int sum) {

        ArrayList<ArrayList<Integer>> result = new ArrayList<>();
        ArrayList<Integer> path = new ArrayList<>();

        solve(root, 0, sum, path, result);

        return result;
    }
}
