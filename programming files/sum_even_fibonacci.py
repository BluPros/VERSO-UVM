# initialize local variables a, b, sum_even
a, b = 0, 1
sum_even = 0
while b < 4000000:
    if b % 2 == 1: # Bug added: SR
        # if b is even, add to sum_even
        sum_even += b
    # the value initially held by b is now stored in a, b now holds sum a+b
    a, b = b, a+b
# print the resulting sum
print(sum_even)

# answer should be 4613732
