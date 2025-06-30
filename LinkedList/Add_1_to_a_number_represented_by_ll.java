public class Add_1_to_a_number_represented_by_ll {
    public Node rev(Node head) {

        Node temp = head;
        Node prev = null;
        Node front = null;

        while (temp != null) {
            front = temp.next;
            temp.next = prev;
            prev = temp;
            temp = front;

        }

        head = prev;

        return head;
    }

    public Node addOne(Node head) {

        head = rev(head);

        Node temp = head;

        int carry = 0;

        while (temp != null) {

            int sum;

            if (temp == head) {
                sum = temp.data + 1;
            } else {
                sum = temp.data + carry;
            }

            temp.data = sum % 10;

            carry = sum / 10;

            temp = temp.next;
        }

        head = rev(head);

        if (carry == 1) {
            temp = head;
            head = new Node(1);

            head.next = temp;
        }

        return head;

    }
}
