package Binary_Search_Tree;

public class LCA {
    public Node lca(Node root, Node n1, Node n2) {

        if (root == null) {
            return null;
        }

        if (n1.data < root.data && n2.data < root.data) {
            return lca(root.left, n1, n2);
        }

        if (n1.data > root.data && n2.data > root.data) {
            return lca(root.right, n1, n2);
        }

        return root;
    }
}
