package Binary_Trees;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class Print_level_by_level {
    public List<List<Integer>> levelOrder(TreeNode root) {

        Queue<TreeNode> q = new LinkedList<>();

        List<List<Integer>> ans = new ArrayList<>();
        if (root == null)
            return ans;

        q.add(root);

        while (!q.isEmpty()) {

            int size = q.size();

            List<Integer> level = new ArrayList<>();

            for (int i = 0; i < size; i++) {

                TreeNode front = q.poll();

                level.add(front.val);

                if (front.left != null) {

                    q.add(front.left);
                }
                if (front.right != null) {

                    q.add(front.right);
                }
            }

            ans.add(level);

        }

        return ans;
    }
}
