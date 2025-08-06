package Binary_Trees;

public class Lowest_common_Ancestor {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {

        if (root == null) {
            return null;
        }
        if (root.data == p.data || root.data == q.data) {
            return root;
        }

        TreeNode leftValue = lowestCommonAncestor(root.left, p, q);
        TreeNode rightValue = lowestCommonAncestor(root.right, p, q);

        if (leftValue != null && rightValue == null) {
            return leftValue;
        }

        if (leftValue == null && rightValue != null) {
            return rightValue;
        }

        if (leftValue != null && rightValue != null) {
            return root;
        }

        return null;

    }
}
