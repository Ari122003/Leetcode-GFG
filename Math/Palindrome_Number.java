package Math;

public class Palindrome_Number {
    public static void main(String[] args) {
        // Example number: 6116
        // A palindrome reads the same from left to right and right to left.
        int num = 6116;

        // temp will hold a copy of the original number.
        // We do this so the original number remains unchanged for comparison later.
        int temp = num;

        // rev will store the reversed version of temp.
        int rev = 0;

        // Keep extracting the last digit until no digits remain.
        while (temp > 0) {
            // Extract the last digit.
            // Example: 6116 % 10 = 6
            int digit = temp % 10;

            // Build the reversed number.
            // This works exactly like the reverse-number algorithm.
            // rev * 10 shifts existing digits left, then we add the new digit.
            rev = (rev * 10) + digit;

            // Remove the last digit from temp.
            // Example: 6116 / 10 = 611
            // Then 611 / 10 = 61, and so on.
            temp /= 10;
        }

        // Compare the reversed number with the original number.
        // If they are equal, the number is a palindrome.
        if (rev == num) {
            System.out.println("Palindrome");
            return;
        }

        // Otherwise, it is not a palindrome.
        System.out.println("Not Palindrome");
    }
}

