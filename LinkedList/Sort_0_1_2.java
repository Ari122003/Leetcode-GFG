public class Sort_0_1_2 {
    static Node segregate(Node head) {
        // code here

        Node zero = new Node(-1), one = new Node(-1), two = new Node(-1);

        Node z = zero, o = one, t = two;

        Node temp;

        while (head != null) {
            temp = head;
            head = head.next;
            temp.next = null;

            if (temp.data == 0) {

                z.next = temp;
                z = z.next;

            }
            if (temp.data == 1) {

                o.next = temp;
                o = o.next;

            }
            if (temp.data == 2) {

                t.next = temp;
                t = t.next;

            }
        }

        if (one.next != null) {
            z.next = one.next;
            o.next = two.next;
        } else {
            z.next = two.next;
        }

        return zero.next;
    }
}
