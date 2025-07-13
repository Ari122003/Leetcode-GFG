import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashSet;

public class Two_Sum {
    public static ArrayList<ArrayList<Integer>> findPairsWithGivenSum(int target,
            Node head) {
        HashSet<Integer> set = new HashSet<>();

        Node temp = head;

        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();

        while (temp != null) {
            if (set.contains(target - temp.data)) {

                ArrayList<Integer> store = new ArrayList<>();

                store.add(target - temp.data);
                store.add(temp.data);

                ans.add(store);

            }

            set.add(temp.data);

            temp = temp.next;
        }

        Collections.sort(ans, Comparator.comparing(list -> list.get(0)));

        return ans;

    }
}
