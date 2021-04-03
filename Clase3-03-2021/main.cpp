//
//  main.cpp
//  Clase3-03-2021
//
//  Created by Countyfoot on 4/2/21.
//
// Lo que haremos en esta clase consistira en calcular los numeros primos desde 1 hasta 100.
// Comenzaremos incluyendo las librerias.

#include <iostream>

// Ahora incluiremos la función principal "main".

int main(void)
{
    // insert code here...
    int m = 1;
    int n = 100;
    std::cout <<"m: "<< m << "\n";
    std::cout <<"n: "<< n << "\n";
    //Añadimos un bucle en donde se repitan una instrucciones para muchos datos, utilizaremos la función For.
    for(int ii = m; ii <= n; ii = ii+1 )
    {
        std::cout << ii << "\n";
    }
    return 0;
}

