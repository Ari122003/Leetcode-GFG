package Math;

public class Largest_digit {

    public static void main(String[] args) {

        // Example number: 56913
        // We want to find the largest digit among all digits in this number.
        int num = 56913;

        // maxDig stores the largest digit found so far.
        // Start with 0 because 0 is smaller than any digit from 1 to 9.
        int maxDig = 0;

        // Keep going until all digits have been processed.
        while (num > 0) {

            // Extract the last digit from the number.
            // Example: 56913 % 10 = 3
            int dig = num % 10;

            // Compare the current digit with the largest digit seen so far.
            // Math.max(a, b) returns the larger of the two values.
            // If the current digit is bigger, it becomes the new max.
            // Otherwise, maxDig stays unchanged.
            maxDig = Math.max(dig, maxDig);

            // Remove the last digit from the number.
            // Example: 56913 / 10 = 5691
            // Next, we process 1, then 9, then 6, then 5.
            num /= 10;
        }

        // After processing all digits, maxDig contains the largest digit.
        System.out.println("Largest digit: " + maxDig);
    }
}

