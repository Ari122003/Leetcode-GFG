package Binary_Search_Tree;

public class Deletion {
    private TreeNode inorderSuccessor(TreeNode root) {
        if (root == null) {
            return null;
        }

        if (root.left == null) {
            return root;
        }

        return inorderSuccessor(root.left);
    }

    public TreeNode deleteNode(TreeNode root, int key) {
        if (root == null) {
            return null;
        }

        if (key < root.val) {
            root.left = deleteNode(root.left, key);
        } else if (key > root.val) {
            root.right = deleteNode(root.right, key);
        } else {
            if (root.left == null && root.right == null) {
                return null;
            } else if (root.left == null) {
                return root.right;
            } else if (root.right == null) {
                return root.left;
            }

            TreeNode successor = inorderSuccessor(root.right);

            root.val = successor.val;

            root.right = deleteNode(root.right, successor.val);

        }

        return root;

    }
}
