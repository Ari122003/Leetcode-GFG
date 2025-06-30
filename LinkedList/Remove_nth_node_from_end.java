class ListNode {
    int val;
    ListNode next;

    ListNode() {
    }

    ListNode(int val) {
        this.val = val;
    }

    ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}

public class Remove_nth_node_from_end {
    public ListNode removeNthFromEnd(ListNode head, int n) {

        int size = 0;

        ListNode temp = head;

        while (temp != null) {
            size++;
            temp = temp.next;
        }

        if (size - n == 0) {
            head = head.next;
            return head;
        }

        int count = 1;

        temp = head;

        while (count < size - n) {
            temp = temp.next;
            count++;
        }

        temp.next = temp.next.next;

        return head;

    }
}
