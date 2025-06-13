class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        if (head == null || k == 1)
            return head;

        // Step 1: Check if there are at least k nodes
        ListNode temp = head;
        int count = 0;
        while (temp != null && count < k) {
            temp = temp.next;
            count++;
        }

        if (count < k) {
            return head; // Not enough nodes to reverse
        }

        // Step 2: Reverse k nodes
        ListNode prev = null;
        ListNode curr = head;
        ListNode next = null;
        count = 0;

        while (curr != null && count < k) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Step 3: Recursively call for the next group
        head.next = reverseKGroup(curr, k);

        // prev is the new head of this segment
        return prev;
    }
}