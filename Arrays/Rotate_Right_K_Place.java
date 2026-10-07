package Arrays;

import java.util.Arrays;

public class Rotate_Right_K_Place {

    /*
     * Problem:
     * Given an array and an integer k, rotate the array to the right by k places.
     *
     * Example:
     * arr = {1, 2, 3, 4, 5, 6}
     * k = 2
     *
     * After rotating right by 2 positions:
     * {5, 6, 1, 2, 3, 4}
     *
     * Approach:
     * We use the Reversal Algorithm.
     *
     * Instead of shifting every element one position at a time, we perform
     * three reversals to achieve the rotation efficiently.
     *
     * Reversal steps for k = 2:
     *
     * Original:
     * {1, 2, 3, 4, 5, 6}
     *
     * Step 1: Reverse the complete array
     * {6, 5, 4, 3, 2, 1}
     *
     * Step 2: Reverse the first k elements
     * {5, 6, 4, 3, 2, 1}
     *
     * Step 3: Reverse the remaining elements
     * {5, 6, 1, 2, 3, 4}
     *
     * Therefore, the array is rotated right by k positions.
     *
     * Data Structure:
     * - We use only the input integer array.
     * - No additional array, List, Stack, Queue, or other data structure is
     * required.
     *
     * Algorithm:
     * 1. Reduce k using k % arr.length.
     * 2. Reverse the entire array.
     * 3. Reverse the first k elements.
     * 4. Reverse the remaining elements.
     *
     * Why k % arr.length?
     * Rotating an array by its length produces the same array.
     * For example, rotating 6 elements by 6, 12, or 18 positions
     * gives the original array.
     *
     * Therefore:
     * effective rotations = k % arr.length
     *
     * Example:
     * k = 8361 and array length = 6
     * rotate = 8361 % 6 = 3
     *
     * So rotating by 8361 positions is equivalent to rotating by 3 positions.
     */

    /*
     * Reverses the elements between the given start and end indexes.
     *
     * Two-pointer technique is used:
     * - 'start' points to the beginning of the range.
     * - 'end' points to the end of the range.
     * - Swap both elements and move the pointers towards the center.
     *
     * The reversal is performed in-place, so no extra array is needed.
     */
    static void reverse(int[] arr, int start, int end) {

        while (start < end) {

            // Swap the elements at start and end.
            int temp = arr[start];

            arr[start] = arr[end];

            arr[end] = temp;

            // Move both pointers towards the center.
            start++;
            end--;
        }
    }

    public static void main(String[] args) {

        int[] arr = { 1, 2, 3, 4, 5, 6 };

        // Number of positions by which the array needs to be rotated.
        int k = 8361;

        /*
         * Calculate the effective number of rotations.
         *
         * This prevents unnecessary rotations when k is larger than
         * the length of the array.
         */
        int rotate = k % arr.length;

        /*
         * Step 1:
         * Reverse the complete array.
         *
         * {1,2,3,4,5,6}
         * becomes
         * {6,5,4,3,2,1}
         */
        reverse(arr, 0, arr.length - 1);

        /*
         * Step 2:
         * Reverse the first 'rotate' elements.
         *
         * Index range:
         * 0 to rotate - 1
         *
         * This places the elements that should appear at the beginning
         * of the rotated array in their correct order.
         */
        reverse(arr, 0, rotate - 1);

        /*
         * Step 3:
         * Reverse the remaining elements.
         *
         * Index range:
         * rotate to arr.length - 1
         *
         * This puts the remaining elements into their correct order.
         */
        reverse(arr, rotate, arr.length - 1);

        // Print the final rotated array.
        System.out.println(Arrays.toString(arr));

        /*
         * Edge Cases:
         *
         * 1. k = 0:
         * No rotation is required.
         *
         * 2. k > array length:
         * Use k % arr.length to get the effective rotation.
         *
         * 3. k is exactly equal to array length:
         * k % arr.length = 0, so the array remains unchanged.
         *
         * 4. Single-element array:
         * {5} -> remains {5}.
         *
         * 5. Empty array:
         * arr.length is 0, so k % arr.length causes division by zero.
         * Therefore, an empty array should be handled separately if
         * it is allowed by the problem constraints.
         *
         * 6. rotate = 0:
         * The current implementation still performs the reversal
         * operations, but the final result remains unchanged.
         *
         * Time Complexity: O(n)
         * - The complete array is reversed once.
         * - The first part is reversed once.
         * - The remaining part is reversed once.
         * - Overall, the number of operations is proportional to n.
         *
         * Space Complexity: O(1)
         * - The rotation is performed in-place.
         * - Only a temporary variable is used for swapping.
         *
         * Algorithm Used:
         * - Reversal Algorithm for Array Rotation.
         * - Two-pointer technique is used inside reverse().
         */
    }
}