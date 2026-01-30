int indiceEspejo(int arr[], const std::size_t h, const std::size_t l)
{
    const std::size_t m             = (h + l) / 2; // O(1)
    int               medioElem = arr[m]; // O(1)

    if ((int)m + 1 == medioElem) return 1; // O(1)

    if (h - l <= 1) return 0;

    return (medioElem > (int)m)
        ? indiceEspejo(arr, m, l)
        : indiceEspejo(arr, h, m);
}

