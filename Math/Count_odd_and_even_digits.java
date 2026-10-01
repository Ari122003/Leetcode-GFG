package Math;

public class Count_odd_and_even_digits {
    public static void main(String[] args) {
        // Example number: 1230457
        // We want to count how many digits are even and how many are odd.
        int num = 1230457;

        // odd = number of odd digits
        // even = number of even digits
        int odd = 0, even = 0;

        // Continue until all digits are processed.
        while (num > 0) {
            // Extract the last digit of the current number.
            // Example: 1230457 % 10 = 7
            int digit = num % 10;

            // Check whether the last digit is even or odd.
            if (digit % 2 == 0) {
                // If divisible by 2, it is even.
                even++;
            } else {
                // Otherwise, it is odd.
                odd++;
            }

            // Remove the last digit from the number.
            // Example: 1230457 / 10 = 123045
            // Next, the new last digit becomes 5, then 4, and so on.
            num = num / 10;
        }

        // Print the final counts.
        System.out.println("Even - " + even + " Odd - " + odd);
    }
}

