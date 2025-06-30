public class Palindrome {
    public ListNode reverseList(ListNode head) {


        if(head == null || head.next == null){
            return head;
        }

        ListNode temp = head;
        ListNode prev = null;
        ListNode front = null;

        while (temp != null) {
            front = temp.next;
            temp.next = prev;
            prev = temp;
            temp = front;

        }

        head = prev;

        return head;
    }
    public boolean isPalindrome(ListNode head) {

        ListNode mid = head, fast = head;

        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            mid = mid.next;
        }

        mid = reverseList(mid);

        ListNode firstHalf = head;
        ListNode secondHalf = mid;

        while (secondHalf != null) {
            if (firstHalf.val != secondHalf.val) {
                return false;
            }

            secondHalf = secondHalf.next;
            firstHalf = firstHalf.next;

        }

        return true;

    }
}
