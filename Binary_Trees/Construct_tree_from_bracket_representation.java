package Binary_Trees;

public class Construct_tree_from_bracket_representation {
    private static int i;

    private static Node solve(String str) {
        if (i < str.length() && str.charAt(i) == ')') {
            return null;
        }
        int sign = 1;

        if (i < str.length() && str.charAt(i) == '-') {
            sign = -1;
            i++;
        }
        int num = 0;

        while (i < str.length() && Character.isDigit(str.charAt(i))) {

            num = num * 10 + (str.charAt(i) - '0');
            i++;
        }

        Node node = new Node(sign * num);

        if (i < str.length() && str.charAt(i) == '(') {
            i++;
            node.left = solve(str);
            i++;
        }

        if (i < str.length() && str.charAt(i) == '(') {
            i++;
            node.right = solve(str);
            i++;
        }

        return node;
    }

    public static Node treeFromString(String s) {
        if (s == null || s.isEmpty())
            return null;

        i = 0;

        return solve(s);

    }
}
