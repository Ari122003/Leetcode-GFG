
class Node {
    int data;
    Node next;
    Node bottom;

}

public class Flattening_of_ll {
    Node merge(Node list1, Node list2) {
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

            first = first.bottom;
            last.bottom = null;
        } else {
            third = second;
            last = second;

            second = second.bottom;
            last.bottom = null;
        }

        while (first != null && second != null) {
            if (first.data <= second.data) {
                last.bottom = first;
                last = first;
                first = first.bottom;
                last.bottom = null;
            } else {
                last.bottom = second;
                last = second;
                second = second.bottom;
                last.bottom = null;
            }
        }

        if (first != null) {
            last.bottom = first;
        } else {
            last.bottom = second;
        }

        return third;
    }

    Node flatten(Node root) {
        // code here
        if (root == null) {
            return null;
        }

        Node merged = flatten(root.next);

        return merge(root, merged);

    }
}
