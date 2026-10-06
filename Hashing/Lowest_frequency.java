```java
package Hashing;

import java.util.Arrays;
import java.util.LinkedHashMap;
import java.util.Map;

/*
 * Problem: Find the element with the lowest frequency in an array.
 *
 * Given an integer array, return the element that occurs the fewest
 * number of times.
 *
 * Example:
 * Input:  {77, 1, 2, 1, 2, 2, 4}
 * Output: 77
 *
 * Explanation:
 * 77 occurs 1 time, 1 occurs 2 times, 2 occurs 3 times,
 * and 4 occurs 1 time.
 *
 * Both 77 and 4 have the minimum frequency of 1.
 * Since 77 appears first in the original array, it is returned
 * by the Hash_Map approach using LinkedHashMap.
 *
 * Assumptions and constraints:
 * 1. The array contains integers and may contain duplicates.
 * 2. An empty array returns -1 in the Hash_Map approach.
 * 3. If multiple elements share the minimum frequency,
 *    return the one encountered first in the original array.
 * 4. The Sorting approach modifies the original array.
 *
 * Algorithms used:
 * 1. Sorting + consecutive frequency counting.
 * 2. Hashing + frequency counting.
 */

/*
 * APPROACH 1: SORTING
 *
 * Data structure: Integer array.
 * Algorithm: Comparison-based sorting followed by linear traversal.
 *
 * Idea:
 * After sorting, identical elements become adjacent.
 * We can count their occurrences by tracking the start index
 * of each group of equal elements.
 *
 * Time complexity: O(n log n) due to sorting.
 * Auxiliary space: Depends on the sorting implementation.
 */
class Sorting {

    static int solve(int[] arr) {

        // Edge case: An empty array has no element to return.
        // This check must happen before accessing arr[0].
        if (arr.length == 0) {
            return -1;
        }

        // Sort the array in ascending order.
        // Equal elements become consecutive, allowing us to count
        // each element's frequency without using a map.
        // Note: This modifies the original array.
        Arrays.sort(arr);

        // Stores the smallest frequency found so far.
        // Integer.MAX_VALUE ensures the first group can update it.
        int leastFreq = Integer.MAX_VALUE;

        // Stores the element having the smallest frequency.
        // Initially, use the first sorted element as a fallback.
        int leastFreqEle = arr[0];

        // Marks the starting index of the current group of equal
        // elements. Initially, the first group starts at index 0.
        int i = 0;

        // Traverse the sorted array to identify groups of equal
        // elements. Each group represents one distinct element.
        for (int j = 0; j < arr.length; j++) {

            // When arr[j] differs from arr[i], the current group
            // has ended and a new group begins at index j.
            if (arr[j] != arr[i]) {

                // The current element's frequency equals the
                // distance between the group boundaries: j - i.
                if (j - i < leastFreq) {

                    // Update the minimum frequency found so far.
                    leastFreq = j - i;

                    // arr[i] represents the element in this group.
                    leastFreqEle = arr[i];
                }

                // Start counting the next group from index j.
                i = j;
            }
        }

        // The loop detects group boundaries, but it does not
        // automatically evaluate the final group because no
        // different element follows it.
        //
        // Therefore, calculate the last group's frequency using
        // the array length minus its starting index.
        if (arr.length - i < leastFreq) {

            // Update the minimum frequency and corresponding element.
            leastFreqEle = arr[i];
            leastFreq = arr.length - i;
        }

        // Return the element with the smallest frequency.
        return leastFreqEle;
    }
}

/*
 * APPROACH 2: HASH MAP
 *
 * Data structure: LinkedHashMap<Integer, Integer>.
 *
 * Key = distinct array element.
 * Value = frequency of that element.
 *
 * Algorithm:
 * 1. Build a frequency map in one traversal.
 * 2. Traverse the map to find the smallest frequency.
 *
 * LinkedHashMap preserves insertion order, so when frequencies
 * tie, the first distinct element encountered in the original
 * array wins.
 *
 * Expected time complexity: O(n).
 * Auxiliary space: O(k), where k is the number of distinct elements.
 */
class Hash_Map {

    static int solve(int[] arr) {

        // Edge case: An empty array has no valid answer.
        // Return -1 instead of accessing arr[0].
        if (arr.length == 0) {
            return -1;
        }

        // LinkedHashMap stores each distinct element and its count.
        // Unlike HashMap, it preserves insertion order.
        // This makes tie-breaking follow the original array order.
        Map<Integer, Integer> map = new LinkedHashMap<>();

        // STEP 1: Build the frequency map.
        // Visit every element exactly once.
        for (int e : arr) {

            // If e already exists, increment its frequency.
            // Otherwise, initialize its frequency to 1.
            //
            // getOrDefault(e, 0) returns the existing count
            // or 0 when the element is encountered for the first time.
            map.put(e, map.getOrDefault(e, 0) + 1);
        }

        // Stores the smallest frequency found so far.
        // Initialize to the largest possible integer so the first
        // map entry can update the minimum.
        int leastFreq = Integer.MAX_VALUE;

        // Fallback result for a non-empty array.
        // This is also the first element encountered in the array.
        int leastEle = arr[0];

        // STEP 2: Find the element with the lowest frequency.
        // Each entry contains an element and its total frequency.
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {

            // Compare the current element's frequency with
            // the smallest frequency found so far.
            if (entry.getValue() < leastFreq) {

                // Update the minimum frequency.
                leastFreq = entry.getValue();

                // Store the element corresponding to that frequency.
                leastEle = entry.getKey();
            }

            // Use '<' rather than '<=' to preserve the first
            // encountered element when multiple elements tie.
        }

        // Return the element with the minimum frequency.
        return leastEle;
    }
}

/*
 * DRIVER CLASS
 *
 * Demonstrates the Hash Map approach.
 */
public class Lowest_frequency {

    public static void main(String[] args) {

        // Test array containing repeated and unique elements.
        int[] arr = {77, 1, 2, 1, 2, 2, 4};

        // Find and print the element with the lowest frequency.
        System.out.println(Hash_Map.solve(arr));
    }
}```