package Binary_Trees;

public class Consttruct_from_inorder_and_preorder {
    static int preIndex = 0;

    private static int findIndex(int[] inorder, int val, int start, int end) {
        for (int i = start; i <= end; i++) {
            if (inorder[i] == val)
                return i;
        }
        return -1;
    }

    private static Node construct(int[] inorder, int[] preorder, int start, int end) {
        if (preIndex >= preorder.length || start > end) {
            return null;
        }

        int currVal = preorder[preIndex++];
        Node root = new Node(currVal);

        int rootIndex = findIndex(inorder, currVal, start, end);

        root.left = construct(inorder, preorder, start, rootIndex - 1);
        root.right = construct(inorder, preorder, rootIndex + 1, end);

        return root;
    }

    public static Node buildTree(int[] inorder, int[] preorder) {
        preIndex = 0;
        return construct(inorder, preorder, 0, inorder.length - 1);
    }
}
