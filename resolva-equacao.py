def precedence(op):
    if op == '+' or op == '-':
        return 1
    if op == '*' or op == '/' or op == '%':
        return 2
    return 0

def apply_op(a, b, op):
    if op == '+':
        return a + b
    if op == '-':
        return a - b
    if op == '*':
        return a * b
    if op == '/':
        return a // b  # Integer division
    if op == '%':
        return a % b

def evaluate(tokens):
    values = []
    ops = []
    i = 0
    while i < len(tokens):
        if tokens[i].isdigit() or (tokens[i][0] == '-' and tokens[i][1:].isdigit()):
            values.append(int(tokens[i]))
            i += 1
        else:
            while (ops and precedence(ops[-1]) >= precedence(tokens[i])):
                b = values.pop()
                a = values.pop()
                op = ops.pop()
                values.append(apply_op(a, b, op))
            ops.append(tokens[i])
            i += 1

    while ops:
        b = values.pop()
        a = values.pop()
        op = ops.pop()
        values.append(apply_op(a, b, op))

    return values[0]

N = int(input())
for _ in range(N):
    line = input().strip()
    tokens = line.split()
    result = evaluate(tokens)
    print(result)
