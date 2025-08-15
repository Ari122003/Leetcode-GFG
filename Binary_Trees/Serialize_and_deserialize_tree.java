package Binary_Trees;

public class Serialize_and_deserialize_tree {
    // Encodes a tree to a single string.
    private StringBuilder ser;

    public Serialize_and_deserialize_tree() {
        ser = new StringBuilder();
    }

    private void solve(TreeNode root) {
        if (root == null) {
            ser.append("#,");
            return;
        }

        ser.append(root.data).append(',');
        solve(root.left);
        solve(root.right);
    }

    public String serialize(TreeNode root) {
        ser.setLength(0);
        solve(root);
        return ser.toString();
    }

    // Decodes your encoded data to tree.
    private int index;

    private TreeNode des(String ser) {
        if (ser.charAt(index) == '#') {
            index += 2;
            return null;
        }
        int len = ser.length();

        boolean neg = false;
        if (ser.charAt(index) == '-') {
            neg = true;
            index++;
        }

        int num = 0;
        while (index < len && ser.charAt(index) != ',') {

            num = num * 10 + (ser.charAt(index) - '0');
            index++;
        }

        if (neg) {
            num *= -1;
        }
        index++;

        TreeNode node = new TreeNode(num);

        node.left = des(ser);
        node.right = des(ser);

        return node;
    }

    public TreeNode deserialize(String data) {
        index = 0;
        return des(data);
    }
}
