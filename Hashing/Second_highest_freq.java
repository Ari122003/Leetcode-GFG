package Hashing;

import java.util.HashMap;
import java.util.Map;

/*
 * Problem:
 * --------
 * Given an integer array, find the element(s) whose frequency is the
 * SECOND HIGHEST DISTINCT frequency.
 *
 * Example:
 * arr = {1, 1, 2, 2, 2, 3}
 *
 * Frequency:
 * 1 -> 2
 * 2 -> 3
 * 3 -> 1
 *
 * Highest frequency = 3
 * Second highest distinct frequency = 2
 *
 * Therefore, the answer is:
 * 1
 *
 *
 * Important:
 * ----------
 * We are looking for the second HIGHEST DISTINCT frequency.
 *
 * For example:
 * {1,1,2,2,3,3}
 *
 * Frequencies:
 * 1 -> 2
 * 2 -> 2
 * 3 -> 2
 *
 * There is only one distinct frequency: 2.
 * Therefore, there is NO second-highest frequency.
 *
 *
 * Data Structure Used:
 * --------------------
 * HashMap<Integer, Integer>
 *
 * Key   -> Array element
 * Value -> Frequency of that element
 *
 * Example:
 * arr = {1,1,2}
 *
 * HashMap:
 * 1 -> 2
 * 2 -> 1
 *
 *
 * Why HashMap?
 * ------------
 * We need to count how many times every element occurs.
 *
 * HashMap allows us to store:
 *
 * element -> frequency
 *
 * and update the frequency efficiently using getOrDefault().
 *
 *
 * Algorithm:
 * ----------
 * 1. Build a frequency map using HashMap.
 *
 * 2. Find the highest frequency among all elements.
 *
 * 3. Find the largest frequency that is strictly smaller than
 *    the highest frequency.
 *    This gives us the second-highest DISTINCT frequency.
 *
 * 4. If no such frequency exists, print:
 *    "No 2nd highest exists"
 *
 * 5. Otherwise, traverse the HashMap and print every element
 *    whose frequency is equal to the second-highest frequency.
 *
 *
 * Time Complexity:
 * ----------------
 * Let n = number of elements in the array.
 * Let k = number of distinct elements.
 *
 * Building the HashMap:
 * O(n)
 *
 * Finding highest frequency:
 * O(k)
 *
 * Finding second-highest frequency:
 * O(k)
 *
 * Finding the elements with second-highest frequency:
 * O(k)
 *
 * Overall:
 * O(n + k)
 *
 * Since k <= n:
 * O(n)
 *
 *
 * Space Complexity:
 * -----------------
 * The HashMap stores every distinct element.
 *
 * Therefore:
 * O(k)
 *
 * In the worst case, when every element is unique:
 * O(n)
 */

public class Second_highest_freq {

    public static void main(String[] args) {

        // Input array.
        // Here:
        // 1 occurs 2 times
        // 2 occurs 1 time
        //
        // Therefore:
        // Highest frequency = 2
        // Second-highest frequency = 1
        //
        // Answer = 2
        int[] arr = {1, 1, 2};


        /*
         * STEP 1: Create the frequency map
         *
         * HashMap is used because we want to store each unique
         * array element along with its frequency.
         *
         * Map<Integer, Integer>
         *
         * Key   = element
         * Value = frequency
         */
        Map<Integer, Integer> map = new HashMap<>();


        /*
         * Traverse the array and calculate the frequency
         * of every element.
         *
         * getOrDefault(e, 0):
         *
         * If 'e' already exists in the map,
         * return its current frequency.
         *
         * If 'e' does not exist,
         * return 0.
         *
         * Then we add 1 to that frequency.
         *
         * Example:
         *
         * First 1:
         * map.put(1, 0 + 1)
         * map = {1=1}
         *
         * Second 1:
         * map.put(1, 1 + 1)
         * map = {1=2}
         *
         * Then 2:
         * map.put(2, 0 + 1)
         * map = {1=2, 2=1}
         */
        for (int e : arr) {
            map.put(e, map.getOrDefault(e, 0) + 1);
        }


        /*
         * STEP 2: Find the highest frequency.
         *
         * We initially set the highest frequency to 0.
         *
         * Then we compare every frequency stored in the map
         * with the current highest frequency.
         *
         * Math.max() keeps the larger value.
         *
         * Example:
         *
         * map.values() = {2, 1}
         *
         * Start:
         * mostHigestFreq = 0
         *
         * count = 2:
         * mostHigestFreq = max(0, 2) = 2
         *
         * count = 1:
         * mostHigestFreq = max(2, 1) = 2
         *
         * Final:
         * mostHigestFreq = 2
         */
        int mostHigestFreq = 0;

        for (int counts : map.values()) {

            mostHigestFreq = Math.max(mostHigestFreq, counts);

        }


        /*
         * STEP 3: Find the second-highest DISTINCT frequency.
         *
         * We start with 0.
         *
         * The condition:
         *
         * count < mostHigestFreq
         *
         * is very important.
         *
         * It prevents the highest frequency from being selected
         * again.
         *
         * The second condition:
         *
         * count > secondMostHighestFreq
         *
         * ensures that among all frequencies smaller than the
         * highest frequency, we keep the largest one.
         *
         * Example:
         *
         * Frequencies = {3, 2, 1}
         *
         * Highest = 3
         *
         * count = 3:
         * 3 < 3 -> false
         *
         * count = 2:
         * 2 < 3 && 2 > 0 -> true
         * secondMostHighestFreq = 2
         *
         * count = 1:
         * 1 < 3 && 1 > 2 -> false
         *
         * Final:
         * secondMostHighestFreq = 2
         */
        int secondMostHighestFreq = 0;

        for (int count : map.values()) {

            if (count < mostHigestFreq
                    && count > secondMostHighestFreq) {

                secondMostHighestFreq = count;
            }
        }


        /*
         * STEP 4: Check whether a second-highest frequency exists.
         *
         * If secondMostHighestFreq is still 0, it means that
         * we could not find any frequency smaller than the
         * highest frequency.
         *
         * This can happen in cases such as:
         *
         * {1, 1, 1}
         * -> only one distinct frequency: 3
         *
         * {1, 1, 2, 2}
         * -> frequencies: 2, 2
         * -> only one distinct frequency: 2
         *
         * {1, 2, 3}
         * -> frequencies: 1, 1, 1
         * -> only one distinct frequency: 1
         */
        if (secondMostHighestFreq == 0) {

            System.out.println("No 2nd highest exists");

            return;
        }


        /*
         * STEP 5: Find the element(s) having the second-highest
         * frequency.
         *
         * We traverse every entry of the HashMap.
         *
         * entry.getKey()
         * -> gives the element.
         *
         * entry.getValue()
         * -> gives its frequency.
         *
         * If the frequency equals the second-highest frequency,
         * we print that element.
         *
         * Example:
         *
         * map:
         * 1 -> 3
         * 2 -> 2
         * 3 -> 2
         *
         * secondMostHighestFreq = 2
         *
         * Therefore:
         * 2 and 3 are printed.
         */
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {

            if (entry.getValue() == secondMostHighestFreq) {

                System.out.println(entry.getKey());
            }
        }
    }
}