package Two_Pointer;

public class Reverse_an_array {
    public static void main(String[] args) {

        int[] arr = { 1, 2, 3, 4, 5 };

        // i starts at the first element and j starts at the last element.
        // These two pointers identify the pair of elements that must exchange
        // positions to move both values to their final reversed locations.
        int i = 0, j = arr.length - 1;

        // Continue only while the pointers have not met or crossed.
        // Once they meet, every outside pair has already been reversed, so
        // processing further would either do unnecessary work or undo a swap.
        while (i < j) {

            // Save the left value before overwriting it. Without this
            // temporary variable, the original left value would be lost.
            int temp = arr[i];

            // Move the value from the right side to its corresponding
            // position on the left side.
            arr[i] = arr[j];

            // Put the saved left value into its corresponding right position.
            arr[j] = temp;

            // Move inward so the next iteration processes the next outer pair.
            i++;
            j--;

        }

        // The array is now reversed in place, so print each element in order.
        for (int p : arr) {
            System.out.print(p);
        }
    }

}
