# odd sum and even sum
even = 0
odd = 0

for num in range(1, 101):
    if num % 2 == 0:
        even = even + num
    else:
        odd = odd + num

print("sum of even numbers: ", even)
print("sum of odd numbers: ", odd)
