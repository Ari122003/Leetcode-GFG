package Hashing;

import java.util.Arrays;
import java.util.Map;
import java.util.stream.Collectors;

public class Frequency_of_elements {

    public static void main(String[] args) {

        // Sample input array: repeated elements are present, so we need to count how many times each value appears.
        int[] arr = { 1, 1, 1, 2, 3, 3, 3, 3, 3, 4, 4, };

        // Step 1: Convert int[] to Stream<Integer> so we can work with Java Streams.
        // Step 2: Collect elements into a map where:
        //         - key = each distinct element
        //         - value = number of times that element appears
        // This works because groupingBy(e -> e) groups identical numbers together,
        // and counting() counts how many elements are in each group.
        // Result type: Map<Integer, Long>
        Map<Integer, Long> map = Arrays.stream(arr).boxed()
                .collect(Collectors.groupingBy(e -> e, Collectors.counting()));

        // Step 3: Print each distinct element and its frequency.
        // We iterate over all entries in the map; each entry represents one unique value and its count.
        // Note: The order of iteration is not guaranteed for a normal HashMap-based map.
        map.forEach((key, value) -> {

            System.out.println(key + " - " + value);

        });

    }

}
