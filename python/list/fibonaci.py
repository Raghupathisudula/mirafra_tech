n = int(input("Enter a number: "))
a, b = 0, 1

for i in range(0, n):
    c = a + b
    print(c)
    a, b = b, c

print("The nth term in the Fibonacci sequence is:", c)

