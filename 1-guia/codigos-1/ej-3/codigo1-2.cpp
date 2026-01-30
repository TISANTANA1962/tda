int leftiano(int arr[], const std::size_t size) {
    if (size < 2) return 1;
    const std::size_t medio = size / 2;

    int izq[medio], der[medio], sumaIzq{0}, sumaDer{0};

    for (std::size_t i{0}; i < medio; i++) {
        izq[i] = arr[i];
        der[i]   = arr[medio + i];

        sumaIzq += izq[i];
        sumaDer   += der[i];
    }
    return (sumaIzq > sumaDer) 
           ? (leftiano(izq, medio) && leftiano(der, medio))
           : 0;
}
