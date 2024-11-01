# factorial
number = int(input("num: "))
factorial = 1

if number < 0:
    print("error")
elif number == 0:
    print("1")
else:
    for i in range(1, number + 1):
        factorial = factorial * i
    print(factorial)
