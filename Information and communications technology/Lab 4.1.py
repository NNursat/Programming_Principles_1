## calculator
num1 = float(input("enter first num: "))
num2 = float(input("enter second num: "))

znak = input("+, -, *, /: ")

if znak == '+':
    result = num1 + num2
    print("otvet: ", result)
elif znak == '-':
    result = num1 - num2
    print("otvet: ", result)
elif znak == '*':
    result = num1 * num2
    print("otvet: ", result)
elif znak == '/':
    if num2 != 0:
        result = num1 / num2
        print("otvet: ", result)
    else:
        print("error: na zero delit' nelzya")
else:
    print("error: ispolzui + - * /")
