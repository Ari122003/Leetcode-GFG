package Binary_Trees;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class Right_view {
    // Iterrative
    ArrayList<Integer> rightView(Node root) {
        Queue<Node> q = new LinkedList<>();

        ArrayList<Integer> ans = new ArrayList<>();
        if (root == null)
            return ans;

        q.add(root);

        while (!q.isEmpty()) {

            int size = q.size();

            for (int i = 0; i < size; i++) {

                Node front = q.poll();

                if (i == size - 1) {
                    ans.add(front.data);
                }

                if (front.left != null) {

                    q.add(front.left);
                }
                if (front.right != null) {

                    q.add(front.right);
                }
            }

        }

        return ans;
    }

    // Recursive

    void solve(Node root, int level, ArrayList<Integer> arr) {
        if (root == null) {
            return;
        }

        if (level == arr.size()) {
            arr.add(root.data);
        }

        solve(root.right, level + 1, arr);
        solve(root.left, level + 1, arr);
    }

    ArrayList<Integer> rightVieww(Node root) {
        ArrayList<Integer> ans = new ArrayList<>();

        solve(root, 0, ans);

        return ans;
    }
}
