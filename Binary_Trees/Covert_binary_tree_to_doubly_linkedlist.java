package Binary_Trees;

public class Covert_binary_tree_to_doubly_linkedlist {
    private Node head;

    Node solve(Node temp, Node prev) {

        if (temp == null) {
            return prev;
        }

        prev = solve(temp.left, prev);

        if (prev == null) {
            head = temp;
        } else {
            prev.right = temp;
            temp.left = prev;
        }
        prev = temp;

        return solve(temp.right, prev);
    }

    Node bToDLL(Node root) {

        head = null;

        solve(root, null);

        return head;
    }
}
