package Binary_Trees;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class Duplicate_subtrees {
    private String solve(Node root, HashMap<String, Integer> map, List<Node> res) {

        if (root == null) {
            return "#";
        }

        String leftString = solve(root.left, map, res);
        String rightString = solve(root.right, map, res);

        String conc = root.data + "," + leftString + "," + rightString;

        map.put(conc, map.getOrDefault(conc, 0) + 1);

        if (map.get(conc) == 2) {
            res.add(root);
        }

        return conc;
    }

    public List<Node> printAllDups(Node root) {

        HashMap<String, Integer> map = new HashMap<>();

        List<Node> result = new ArrayList<>();

        solve(root, map, result);

        return result;

    }
}
