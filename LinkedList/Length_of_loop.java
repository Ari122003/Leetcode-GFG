public class Length_of_loop {
    public int countNodesinLoop(Node head) {

        // finding starting node of loop

        Node fast = head, slow = head;

        boolean hasLoop = false;

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;

            if (slow == fast) {
                hasLoop = true;
                break;
            }
        }

        if (!hasLoop) {
            return 0;
        }

        slow = head;

        while (slow != fast) {
            slow = slow.next;
            fast = fast.next;
        }

        // measuring the loop

        int count = 1;

        fast = fast.next;

        while (fast != slow) {
            count++;
            fast = fast.next;
        }

        return count;

    }
}
