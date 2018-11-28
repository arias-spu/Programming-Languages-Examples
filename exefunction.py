


value =int(input('Option: '))
if value == 2:
    def operation(p):
        return 2 * p
else:
    def operation(p):
        return 2 + p

number = int(input('Number: '))
print(operation(number))

