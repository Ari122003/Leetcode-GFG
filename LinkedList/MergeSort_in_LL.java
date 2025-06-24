public class MergeSort_in_LL {
    private ListNode merge(ListNode list1, ListNode list2) {
        if (list1 == null && list2 == null) {
            return null;
        }
        if (list1 != null && list2 == null) {
            return list1;
        }

        if (list1 == null && list2 != null) {
            return list2;
        }

        ListNode first = list1;
        ListNode second = list2;
        ListNode last = null;
        ListNode third = null;

        if (first.val <= second.val) {
            third = first;
            last = first;

            first = first.next;
            last.next = null;
        } else {
            third = second;
            last = second;

            second = second.next;
            last.next = null;
        }

        while (first != null && second != null) {
            if (first.val <= second.val) {
                last.next = first;
                last = first;
                first = first.next;
                last.next = null;
            } else {
                last.next = second;
                last = second;
                second = second.next;
                last.next = null;
            }
        }

        if (first != null) {
            last.next = first;
        } else {
            last.next = second;
        }

        return third;
    }

    private ListNode findMid(ListNode head) {
        ListNode slow = head, fast = head;

        ListNode prev = null;

        while (fast != null && fast.next != null) {
            prev = slow;
            slow = slow.next;
            fast = fast.next.next;
        }

        if (prev != null) {
            prev.next = null;
        }

        return slow;
    }

    public ListNode sortList(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }

        ListNode mid = findMid(head);

        ListNode left = head;
        ListNode right = mid;

        left = sortList(left);
        right = sortList(right);

        return merge(left, right);
    }
}
