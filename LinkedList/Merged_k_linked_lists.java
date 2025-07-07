import java.util.List;

public class Merged_k_linked_lists {
    public Node mergeTwoLists(Node list1, Node list2) {

        if (list1 == null && list2 == null) {
            return null;
        }
        if (list1 != null && list2 == null) {
            return list1;
        }

        if (list1 == null && list2 != null) {
            return list2;
        }

        Node first = list1;
        Node second = list2;
        Node last = null;
        Node third = null;

        if (first.data <= second.data) {
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
            if (first.data <= second.data) {
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

    Node solve(List<Node> arr, int i, int n) {

        if (i == n) {
            return null;
        }

        Node merged = mergeTwoLists(arr.get(i), solve(arr, i + 1, n));

        return merged;

    }

    Node mergeKLists(List<Node> arr) {

        return solve(arr, 0, arr.size());

    }
}
