def busqueda_binaria(arr, objetivo, izq=0, der=len(arr) - 1):
    if izq > der:
        return False
    medio = (izq + der) // 2
    if arr[medio] == objetivo:
        return medio
    elif arr[medio] > objetivo:
        return busqueda_binaria(arr, objetivo, izq, medio - 1)
    else:
        return busqueda_binaria(arr, objetivo, medio + 1, der)
