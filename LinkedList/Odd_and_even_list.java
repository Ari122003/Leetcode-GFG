public class Odd_and_even_list {
    public Node oddEvenList(Node head) {

        if (head == null || head.next == null) {
            return head;
        }

        Node odd = head;
        Node even = head.next;

        Node o = odd;
        Node e = even;

        while (o != null && e != null) {

            o.next = e.next;
            if (o.next != null) {

                o = o.next;
            }

            if (o != null) {
                e.next = o.next;
                e = e.next;
            }
        }

        o.next = even;

        return head;

    }
}
