public class sum_even_fibonacci {
    public static void main(String[] args) {
        // initialize local variables a, b, sum_even
        int a = 0, b = 1;
        int sumEven = 0;
        while (b < 4000000) {
            // if b is even, add to sum_even
            if (b % 2 == 0) {
                sumEven += b;
            }
            // create temp variable to store b
            int temp = b;
            // reassign b to the sum of a and b
            b = a + b;
            // the value initially held by b is now stored in a
            a = temp;
        }
        // print the resulting sum
        System.out.println(sumEven);
    }
}

// answer should be 4613732
