package Binary_Search_Tree;

class Node {
    int data;
    Node left, right;

    Node(int x) {
        data = x;
        left = right = null;
    }
}

public class Inorder_Successor {
    public Node suc(Node root, int key) {
        if (root == null) {
            return null;
        }

        if (key >= root.data) {

            return suc(root.right, key);
        }

        Node left = suc(root.left, key);

        return left != null ? left : root;
    }
}
