def merge(izq, der):
    mergeados = []
    i = j = 0

    while i < len(izq) and j < len(der):
        if izq[i] < der[j]:
            mergeados.append(izq[i])
            i += 1
        else:
            mergeados.append(der[j])
            j += 1

    mergeados.extend(izq[i:])
    mergeados.extend(der[j:])
    return mergeados
