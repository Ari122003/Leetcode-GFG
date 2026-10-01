package Sorting;

public class Check_if_array_is_sorted_or_not {
    public static void main(String[] args) {

        // Example array: {1, 2, 9, 3, 4, 5}
        // We want to check whether the array is sorted in ascending order.
        int[] arr = {1, 2, 9, 3, 4, 5};

        // An array with length 0 or 1 is already sorted.
        // There are no pairs to compare, so no violation can exist.
        if (arr.length <= 1) {
            System.out.println("Sorted");
            return;
        }

        // Start from index 1 and compare each element with the previous one.
        // If any element is smaller than the previous element, the array is not sorted.
        for (int i = 1; i < arr.length; i++) {

            // This condition means: current element should not go backward.
            // For non-decreasing ascending order, arr[i] must be >= arr[i - 1].
            // If arr[i] < arr[i - 1], then the order breaks.
            if (arr[i] < arr[i - 1]) {
                System.out.println("Not sorted");
                return;
            }
        }

        // If no such inversion is found, the array is sorted in ascending order.
        // Note: this algorithm allows equal values, such as {1, 1, 2, 3}.
        // It treats that as sorted because 1 is not less than 1.
        System.out.println("Sorted");
    }
}

