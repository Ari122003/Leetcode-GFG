package Math;

public class Count_all_digits_of_a_number {
    public static void main(String[] args) {

        // Example number: 84627
        // We want to count how many digits it has.
        int num = 84627;

        // count will store the number of digits.
        int count = 0;

        // Repeat until the number becomes 0.
        // In each iteration, we remove the last digit by dividing by 10.
        // Example: 84627 -> 8462 -> 846 -> 84 -> 8 -> 0
        while (num > 0) {
            // Divide by 10 to remove the last digit.
            // 84627 / 10 = 8462
            // 8462 / 10 = 846
            // and so on...
            num = num / 10;

            // Increase count every time we delete one digit.
            count++;
        }

        // Print the total number of digits.
        System.out.println("Total digits: " + count);
    }
}

