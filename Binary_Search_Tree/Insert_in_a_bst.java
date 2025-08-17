package Binary_Search_Tree;

public class Insert_in_a_bst {
    public TreeNode insertIntoBST(TreeNode root, int val) {
        TreeNode temp = root;
        TreeNode node = new TreeNode(val);
        TreeNode prev = null;

        if (root == null)
            return node;

        while (temp != null) {
            prev = temp;

            if (val < temp.val) {
                temp = temp.left;
            } else {
                temp = temp.right;
            }
        }

        if (val < prev.val) {
            prev.left = node;
        } else {
            prev.right = node;
        }

        return root;
    }
}
