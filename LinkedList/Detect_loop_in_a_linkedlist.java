
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

public class Detect_loop_in_a_linkedlist {
    public static boolean detectLoop(Node head) {

        Node slow = head;
        Node fast = head;

        while (fast != null && fast.next != null) {
            slow = slow.next; // Move one step
            fast = fast.next.next; // Move two steps

            if (slow == fast) {
                return true; // Loop detected
            }
        }

        return false;
    }
}
