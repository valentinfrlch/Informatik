# Aufgabe 9: Simple calculator

def calculator():
    toParse = input("input: ")

    parsed = toParse.split(" ")  # [list]
    a = int(parsed[0])
    operator = parsed[1]
    b = int(parsed[2])

    if operator == "+":
        return a + b
    if operator == "-":
        return a - b
    if operator == "*":
        return a * b
    if operator == "/":
        return a / b


# Aufgabe 10: Teilbarkeit

def divideable():
    toParse = input("input a, b: ")
    parsed = toParse.split(", ")
    n = int(parsed[0])
    m = int(parsed[1])

    if n % m == 0:
        return True
    else:
        return False


print(divideable())
