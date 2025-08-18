package Binary_Search_Tree;

public class Creat_BST_using_rescursion {
    private TreeNode create(TreeNode root, int val) {

        if (root == null) {
            return new TreeNode(val);
        }

        if (val < root.val) {

            root.left = create(root.left, val);
        } else {

            root.right = create(root.right, val);
        }

        return root;
    }

    public TreeNode bstFromPreorder(int[] preorder) {
        TreeNode root = null;
        for (int i = 0; i < preorder.length; i++) {

            root = create(root, preorder[i]);
        }

        return root;
    }
}
