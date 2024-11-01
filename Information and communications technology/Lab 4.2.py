## calculator loop
while True:
    num1 = input("first num or press q for break")
    if num1 == 'q':
        break
    num1 = float(num1)
    num2 = float(input("second num: "))

    znak = input("+, -, *, /: ")

    if znak == '+':
        print("result: ", num1 + num2)
    elif znak == '-':
        print("result: ", num1 - num2)
    elif znak == '*':
        print("result: ", num1 * num2)
    elif znak == '/':
        if num2 != 0:
            print("result: ", num1 / num2)
        else:
            print("error")
    else:
        print("error znak")
