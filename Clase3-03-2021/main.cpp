//
//  main.cpp
//  Clase3-03-2021
//
//  Created by Countyfoot on 4/2/21.
//
// Lo que haremos en esta clase consistira en calcular los numeros pares desde 1 hasta 100.
// Comenzaremos incluyendo las librerias.

#include <iostream>
#include <cmath>

// Lo que realizaremos ahora consiste en crear una función para poder organizar mejor nuestro  programa y lograr manipularlo de una manera mas optima desde la función principal "main".
// Comenzaremos declarando la función que crearemos, SOLO LA DECLARAREMOS, utilizamos el termino "void" ya que no queremos que nuestra función returne algun valor, simplemente queremos que imprima unas instrucciones que seran manipuladas desde la función main en donde si tendremos que retornar a un valor.

void print_even(int nmin, int nmax);

// Ahora incluiremos la función principal "main".

int main(void)
{
    // insert code here...
    int m = 1;
    int n = 100;
    std::cout <<"m: "<< m << "\n";
    std::cout <<"n: "<< n << "\n";
    //Ahora insertamos nuestra función en "main" de tal forma que nuestros limites en nuestro programa corresponden ahora a m y n; y no a nmin y nmax. Asi, podemos manipular muchisimo mas facil nuestra función.
    print_even(m, n);
    return 0;
}

// Realizaremos la implementación de la función, para esto luego de declarar la función, abriremos un par de corchetes para explicar que lo que escribiremos dentro de ellos corresponde a las instrucciones y la estructura de la función en si.

void print_even(int nmin, int nmax)
{
// Añadimos un bucle en donde se repitan una instrucciones para muchos datos, utilizaremos la función For.
    for( int ii = nmin; ii <= nmax; ii = ii+1 )
    {
        // Añadiremos un condicional para ir "condicionando" los numeros que nos vayan apareciendo.
        if (ii%2 == 0)
        {
            std::cout << ii << "\n";
        }
    }
}
