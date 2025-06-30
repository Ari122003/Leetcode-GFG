public class Remove_duplicates_from_sorted_ll {
    Node removeDuplicates(Node head) {
        // Your code here

        Node store = head, temp = head.next;

        while (temp != null) {

            if (temp.data != store.data) {
                store.next = temp;
                store = temp;
            }

            temp = temp.next;
        }

        store.next = null;

        return head;
    }
}
