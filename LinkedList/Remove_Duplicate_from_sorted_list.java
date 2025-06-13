
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

class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null) {
            return head;
        }
        ListNode temp = head;
        ListNode curr = head.next;

        while (curr != null) {

            if (temp.val == curr.val) {
                temp.next = curr.next;
            } else {
                temp = curr;
            }
            curr = curr.next;
        }

        return head;
    }
}

public class Remove_Duplicate_from_sorted_list {

}
