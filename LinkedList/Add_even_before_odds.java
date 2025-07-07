public class Add_even_before_odds {
    Node divide(Node head) {
        // code here

        Node odd = null, even = null, o = null, e = null;

        Node temp;

        while (head != null) {
            temp = head;

            head = head.next;
            temp.next = null;

            if (temp.data % 2 == 0) {

                if (even == null) {
                    even = temp;
                    e = temp;
                } else {
                    e.next = temp;
                    e = e.next;
                    
                }

            } else {
                if (odd == null) {
                    odd = temp;
                    o = temp;
                } else {
                    o.next = temp;
                    o = o.next;
                    ;
                }
            }
        }

        if (odd == null) {
            return even;
        }
        if (even == null) {
            return odd;
        }

        e.next = odd;

        return even;
    }
}
