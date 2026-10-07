package Arrays;

public class Maximum_Consecutive_Ones {

    public static void main(String[] args) {

        /*
         * Problem:
         * Given a binary array containing only 0s and 1s, find the maximum number
         * of consecutive 1s present in the array.
         *
         * Example:
         * arr = {1, 1, 1, 1, 0, 1, 1, 1, 0}
         *
         * Consecutive groups of 1s are:
         * {1, 1, 1, 1} -> length 4
         * {1, 1, 1} -> length 3
         *
         * Therefore, the answer is 4.
         *
         * Constraints:
         * - Array contains only 0 and 1.
         * - Array can contain any number of elements.
         *
         * Approach:
         * We use a linear traversal of the array.
         * - 'count' stores the current consecutive 1s.
         * - 'maxCount' stores the maximum consecutive 1s found so far.
         *
         * Data Structure:
         * - Only the input array is used.
         * - No additional data structure such as HashMap, Stack, or Queue is required.
         *
         * Algorithm:
         * 1. Traverse every element of the array.
         * 2. If the element is 1, increment 'count'.
         * 3. Update 'maxCount' with the larger value between 'count' and 'maxCount'.
         * 4. If the element is 0, the consecutive sequence is broken, so reset 'count'
         * to 0.
         * 5. After traversal, 'maxCount' contains the answer.
         */

        int[] arr = { 1, 1, 1, 1, 0, 1, 1, 1, 0 };

        // Stores the number of consecutive 1s in the current sequence.
        int count = 0;

        // Stores the maximum consecutive 1s found during traversal.
        int maxCount = 0;

        // Traverse the array once from left to right.
        for (int e : arr) {

            // If the current element is 1, the consecutive sequence continues.
            if (e == 1) {
                count++;

                // Keep track of the longest sequence found so far.
                maxCount = Math.max(count, maxCount);

            } else {

                // A 0 breaks the consecutive sequence, so start counting again.
                count = 0;
            }
        }

        // maxCount contains the maximum number of consecutive 1s.
        System.out.println(maxCount);

        /*
         * Edge Cases:
         *
         * 1. All elements are 1:
         * {1,1,1} -> answer = 3
         *
         * 2. All elements are 0:
         * {0,0,0} -> answer = 0
         *
         * 3. Empty array:
         * {} -> answer remains 0.
         *
         * 4. Single element:
         * {1} -> answer = 1
         * {0} -> answer = 0
         *
         * Time Complexity: O(n)
         * - The array is traversed exactly once.
         *
         * Space Complexity: O(1)
         * - Only two integer variables are used apart from the input array.
         */
    }
}