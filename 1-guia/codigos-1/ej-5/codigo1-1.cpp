int potenciaLogaritmica(int base, int exp) {
    if (exp == 1) return base;

    if (exp % 2 == 0) {
        return potenciaLogaritmica(base * base, exp / 2);
    } else {
        return base * potenciaLogaritmica(base * base, exp / 2);
    }
}
