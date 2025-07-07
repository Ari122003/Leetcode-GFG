class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

class Pair<K, V> {

    public final K key;
    public final V value;

    public Pair(K key, V value) {

        this.key = key;
        this.value = value;

    }
}

public class Split_Circular_ll_into_two_halves {
    public Pair<Node, Node> splitList(Node head) {

        Node slow = head, fast = head.next;

        while (fast != head && fast.next != head) {

            fast = fast.next.next;
            slow = slow.next;
        }

        Node other = slow.next;

        slow.next = head;

        Node temp = other;

        while (temp.next != head) {
            temp = temp.next;
        }

        temp.next = other;

        Pair<Node, Node> ans = new Pair<>(head, other);

        return ans;

    }
}
