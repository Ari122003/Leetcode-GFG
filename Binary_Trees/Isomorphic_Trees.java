package Binary_Trees;

public class Isomorphic_Trees {
    boolean isIsomorphic(Node root1, Node root2) {
        if (root1 == null && root2 == null) {
            return true;
        }

        if (root1 == null || root2 == null) {
            return false;
        }

        if (root1.data != root2.data) {
            return false;
        }

        boolean noSwap = isIsomorphic(root1.left, root2.left) &&
                isIsomorphic(root1.right, root2.right);

        boolean swap = isIsomorphic(root1.left, root2.right) &&
                isIsomorphic(root1.right, root2.left);

        return swap || noSwap;

    }
}
