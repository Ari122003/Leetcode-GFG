public class Odd_and_even_list {
    public ListNode oddEvenList(ListNode head) {

        if (head == null || head.next == null) {
            return head;
        }

        ListNode odd = head;
        ListNode even = head.next;

        ListNode o = odd;
        ListNode e = even;

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
