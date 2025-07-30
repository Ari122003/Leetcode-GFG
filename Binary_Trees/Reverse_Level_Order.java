package Binary_Trees;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class Reverse_Level_Order {
    public ArrayList<Integer> reverseLevelOrder(Node root) {

        Stack<ArrayList<Integer>> stack = new Stack<>();

        Queue<Node> q = new LinkedList<>();

        ArrayList<Integer> result = new ArrayList<>();

        q.add(root);

        while (!q.isEmpty()) {

            int size = q.size();

            ArrayList<Integer> level = new ArrayList<>();

            for (int i = 0; i < size; i++) {

                Node front = q.poll();

                level.add(front.data);

                if (front.left != null) {
                    q.add(front.left);
                }
                if (front.right != null) {
                    q.add(front.right);
                }
            }

            stack.push(level);
        }

        while (!stack.empty()) {
            result.addAll(stack.pop());
        }

        return result;

    }
}
