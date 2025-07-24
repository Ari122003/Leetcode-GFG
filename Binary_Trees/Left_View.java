package Binary_Trees;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class Left_View {
    ArrayList<Integer> leftView(Node root) {

        Queue<Node> q = new LinkedList<>();

        ArrayList<Integer> ans = new ArrayList<>();
        if (root == null)
            return ans;

        q.add(root);

        while (!q.isEmpty()) {

            int size = q.size();

            for (int i = 0; i < size; i++) {

                Node front = q.poll();

                if (i == 0) {
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
}
