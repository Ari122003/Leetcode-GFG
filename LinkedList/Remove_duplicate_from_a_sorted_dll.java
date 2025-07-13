
class Node {
    int data;
    Node next;
    Node prev;
}

public class Remove_duplicate_from_a_sorted_dll {
    Node removeDuplicates(Node head) {

        Node temp = head;

        while (temp.next != null) {

            if (temp.data == temp.next.data) {
                if (temp.next.next == null) {
                    temp.next = null;
                } else {
                    temp.next = temp.next.next;
                    temp.next.prev = temp;
                }
            } else {

                temp = temp.next;
            }

        }

        return head;
    }
}
