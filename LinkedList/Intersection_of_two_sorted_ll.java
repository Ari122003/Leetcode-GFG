import java.util.HashSet;
import java.util.LinkedHashSet;

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

public class Intersection_of_two_sorted_ll {
    public static Node findIntersection(Node head1, Node head2) {
        // code here.

        HashSet<Integer> hash1 = new HashSet<>();
        LinkedHashSet<Integer> hash2 = new LinkedHashSet<>();

        Node temp = head1;

        while (temp != null) {
            hash1.add(temp.data);
            temp = temp.next;
        }

        temp = head2;

        while (temp != null) {

            if (hash1.contains(temp.data)) {

                hash2.add(temp.data);
            }

            temp = temp.next;
        }

        Node res = null;

        for (int i : hash2) {

            if (res == null) {
                res = new Node(i);
                temp = res;
            } else {
                temp.next = new Node(i);
                temp = temp.next;
            }
        }

        return res;

    }
}
