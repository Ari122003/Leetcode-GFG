
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

public class Add_two_number_as_linked_list {
    static Node reverse(Node head) {

        Node temp = head;
        Node prev = null;
        Node front = null;

        while (temp != null) {
            front = temp.next;
            temp.next = prev;
            prev = temp;
            temp = front;
        }

        return prev;
    }

    static Node addTwoLists(Node num1, Node num2) {

        num1 = reverse(num1);
        num2 = reverse(num2);

        Node p = num1;
        Node q = num2;

        Node res = null;
        Node temp = res;

        int carry = 0;

        while (p != null || q != null || carry != 0) {
            int sum = carry;

            if (p != null) {
                sum += p.data;
                p = p.next;
            }
            if (q != null) {
                sum += q.data;
                q = q.next;
            }

            carry = sum / 10;
            sum = sum % 10;

            if (res == null) {
                res = new Node(sum);
                temp = res;
            } else {

                temp.next = new Node(sum);
                temp = temp.next;
            }

        }

        res = reverse(res);
        temp = res;

        while (temp.data == 0) {
            temp = temp.next;
        }

        return temp;

    }
}
