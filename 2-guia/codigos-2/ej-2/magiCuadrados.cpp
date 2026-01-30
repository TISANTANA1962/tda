#include <iostream>
#include <vector>
#include <set>


using Matriz = std::vector<std::vector<int>>;
using ListaDeMatrices = std::vector<Matriz>;
using Conjunto = std::set<int>;

int magiCuadrados(int fila, int col, int n, Matriz matriz, Conjunto usados){
    if (fila == n-1 && col == n-1) return 1;
    
    int sumaFila{0};
    for(int i{0}; i < n; i++)
    {
       sumaFila += matriz[fila][i]; 
       if sumaFila > 
    }

    for 
     magiCuadrados(fila+1, (col+1) % 9, n-1, matriz, usados.erase(n));
}

int main(){
    int n=3;
    Matriz matriz(n, {0});
    Conjunto usados;

    magiCuadrados(0,0,n, matriz, usados);
    return 0;
}
