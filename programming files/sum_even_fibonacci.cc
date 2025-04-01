#include <iostream>

int main()
{
    // initialize local variables a, b, sum_even
    int a = 0, b = 1;
    int sum_even = 0;


    while (b < 4000000) {
      // if b is even, add to sum_even
        if (b % 2 == 0) {
            sum_even += b;
        }
      // create temp variable to store b
        int temp = b;

      // reassign b to the sum of a and b
        b = a + b;

      // the value initially held by b is now stored in a
        a = temp;
    }
    // print the resulting sum
    std::cout << sum_even << std::endl;

    return 0;
}

// answer should be 4613732
