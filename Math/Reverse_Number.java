package Math;

public class Reverse_Number {

    public static void main(String[] args) {

        // Example number to reverse: 12345
        // We want to get 54321.
        int num = 12345;

        // rev will store the reversed number.
        // It starts at 0 because nothing has been reversed yet.
        int rev = 0;

        // Keep processing digits until the original number becomes 0.
        while (num > 0) {

            // Extract the last digit of the current number.
            // Example: 12345 % 10 = 5
            // This gives the digit that is currently at the end.
            int digit = num % 10;

            // Build the reversed number step by step.
            // rev * 10 shifts the current reversed digits one place to the left.
            // Then we add the new digit at the end.
            // Example:
            // rev = 0, digit = 5 -> rev = (0 * 10) + 5 = 5
            // rev = 5, digit = 4 -> rev = (5 * 10) + 4 = 54
            // rev = 54, digit = 3 -> rev = (54 * 10) + 3 = 543
            // and so on.
            rev = (rev * 10) + digit;

            // Remove the last digit from the original number.
            // Example: 12345 / 10 = 1234
            // Next time, we will process 4, then 3, then 2, then 1.
            num /= 10;
        }

        // After the loop, rev contains the reversed number.
        System.out.println("Reversed number: " + rev);
    }
}

