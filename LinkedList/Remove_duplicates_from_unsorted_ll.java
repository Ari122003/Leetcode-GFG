import java.util.HashSet;

public class Remove_duplicates_from_unsorted_ll {
    public Node removeDuplicates(Node head) {
        // Your code here

        HashSet<Integer> hash = new HashSet<>();

        Node temp = head, prev = null;

        while (temp != null) {

            if (hash.contains(temp.data)) {
                prev.next = temp.next;
            } else {
                hash.add(temp.data);
                prev = temp;
            }

            temp = temp.next;

        }

        return head;
    }
}
