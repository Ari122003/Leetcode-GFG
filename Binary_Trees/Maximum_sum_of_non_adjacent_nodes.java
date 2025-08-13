package Binary_Trees;

public class Maximum_sum_of_non_adjacent_nodes {

    class Pair {
        int include;
        int exclude;

        Pair(int i, int e) {
            this.include = i;
            this.exclude = e;
        }
    }

    private Pair solve(Node root) {

        if (root == null) {
            return new Pair(0, 0);
        }

        Pair res = new Pair(0, 0);

        Pair left = solve(root.left);

        Pair right = solve(root.right);

        res.include = root.data + left.exclude + right.exclude;

        res.exclude = Math.max(left.include, left.exclude) + Math.max(right.include, right.exclude);

        return res;

    }

    public int getMaxSum(Node root) {

        Pair res = solve(root);

        return Math.max(res.include, res.exclude);

    }
}
