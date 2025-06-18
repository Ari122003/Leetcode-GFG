
public class Middle_of_Linked_list {
    public ListNode middleNode(ListNode head) {

        ListNode fast = head.next;
        ListNode slow = head;

        while (fast != null) {

            if (fast.next != null) {

                fast = fast.next.next;
            } else {
                fast = fast.next;
            }

            slow = slow.next;

        }

        return slow;

    }
}
