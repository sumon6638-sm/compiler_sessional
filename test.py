def my_function():
  num1 = int(input("\n\nEnter a first number: "))
  num2 = int(input("Enter a second number: "))

  operand = input("Choose a math operandation (+, -, *, /): ")
  if operand == "+":
    res = num1 + num2
    print('The summation is: ', res)
    choose_opinion()
  elif operand == "-":
    res = num1 - num2
    print('The difference is: ', res)
    choose_opinion()
  elif operand == "*":
    res = num1 * num2
    print('The multiplication is: ', res)
    choose_opinion()
  elif operand == "/":
    res = num1 / num2
    reminder = num1 % num2
    print('The division is: ', res)
    print('The reminder is: ', reminder)
    choose_opinion()

def choose_opinion():
  opinion = input('Do you want to run again? (Type: y or n):')
  if opinion == 'y':
    my_function()
  else:
    return 0

my_function()