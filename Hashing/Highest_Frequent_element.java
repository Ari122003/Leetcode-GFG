package Hashing;

import java.util.HashMap;
import java.util.Map;

public class Highest_Frequent_element {
    public static void main(String[] args) {

        int[] arr = {3,3,2,1,2,1,2,2,3,3,4,3};

        // An empty array has no most-frequent element, so reject it explicitly
        // instead of accessing arr[0] and causing an ArrayIndexOutOfBoundsException.
        if (arr.length == 0) {
            throw new IllegalArgumentException("Array must not be empty");
        }

        /*
         * HashMap<Integer, Integer> stores:
         *   key   -> an element from the array
         *   value -> the number of times that element has appeared so far
         *
         * HashMap is suitable here because it provides expected O(1) insertion
         * and lookup, allowing the complete frequency calculation in one pass.
         */
        Map<Integer,Integer> map = new HashMap<>();

        // These variables track the best result seen while scanning the array.
        int mostFreqEle = arr[0] ;
        int maxCount = 0;

        // Count each element and update the answer immediately.
        for(int e : arr){

            // getOrDefault handles both new elements and previously seen elements.
            int currentCount = map.getOrDefault(e, 0)+1;

            map.put(e,currentCount);

            /*
             * If this element now has a strictly larger frequency, make it the
             * current answer. Using '>' (rather than '>=' ) means that ties keep
             * the element that reached the maximum frequency first.
             */
            if(currentCount > maxCount){
                maxCount= currentCount;
                mostFreqEle = e;
           }

        }

        /*
         * Correctness:
         * - After processing each element, map contains its exact frequency
         *   within the processed prefix of the array.
         * - maxCount is the largest frequency found in that prefix, and
         *   mostFreqEle is an element having that frequency.
         * Therefore, after the final iteration, mostFreqEle is the highest
         * frequent element and maxCount is its frequency.
         *
         * Complexity:
         * - Time: O(n) expected, where n is arr.length; each HashMap operation
         *   is expected O(1).
         * - Space: O(k), where k is the number of distinct elements (O(n) worst
         *   case).
         *
         * No special sorting algorithm is required; this is a one-pass hashing
         * / frequency-counting technique.
         */
        System.out.println(mostFreqEle + " Freq- " + maxCount);

    }
    
}
