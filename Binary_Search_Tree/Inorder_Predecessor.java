package Binary_Search_Tree;

public class Inorder_Predecessor {
    public Node pre(Node root, int key) {
        if (root == null) {
            return null;
        }

        if (key <= root.data) {

            return pre(root.left, key);
        }

        Node right = pre(root.right, key);

        return right != null ? right : root;

    }
}
