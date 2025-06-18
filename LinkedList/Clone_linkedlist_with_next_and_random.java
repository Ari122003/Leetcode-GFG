
class Node {
    int data;
    Node next;
    Node random;

    Node(int x) {
        data = x;
        next = null;
        random = null;
    }
}

public class Clone_linkedlist_with_next_and_random {
    public Node cloneLinkedList(Node head) {

        // cloning without random

        Node temp = head;

        Node clone = null;

        Node p = null;

        while (temp != null) {

            if (clone == null) {
                clone = new Node(temp.data);
                p = clone;
            } else {
                p.next = new Node(temp.data);
                p = p.next;
            }

            temp = temp.next;
        }

        // Inserting clone in between original

        temp = head;
        p = clone;

        Node f = null;

        while (temp != null) {
            f = temp.next;
            temp.next = p;
            temp = p;
            p = f;

        }

        // Connecting randoms

        temp = head;

        while (temp != null) {
            p = temp.next;

            if (temp.random != null) {
                p.random = temp.random.next;
            }

            temp = p.next;

        }

        // removing the clone from original

        p = clone;

        temp = head;

        while (temp != null) {
            temp.next = p.next;
            temp = temp.next;

            if (temp != null) {
                p.next = temp.next;
                p = p.next;
            }
        }

        return clone;

    }
}
