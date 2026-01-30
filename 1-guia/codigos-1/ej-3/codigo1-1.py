def leftiano(input: list[int]) -> bool:
    if len(input) < 2:
        return True

    medio: int = len(input) // 2

    if medio == 1:  
        return input[0] > input[1]

    izq: list[int] = input[:medio]
    der: list[int] = input[medio:]

    if sum(izq) > sum(der):
        return leftiano(izq)
    else:
        return False
