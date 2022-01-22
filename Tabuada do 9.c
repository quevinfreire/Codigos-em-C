//Exercicio fazendo tabuada de Multiplicação numero 9 em C.
// Autor: Quuevin Freire

#include <stdio.h>

int main ()
{
    int numero,
        multiplicador,
        limite;

    printf("TABUADA DE MULTIPLICACAO DO NUMERO 9:\n");

    //Aqui criamos o laço que vai multiplicar ate o numero limite ou condiçao ser false.
    for(numero = 1, multiplicador = 9, limite = 10 ; numero <= 10; ++numero)
    {
        printf("O resultado de %d * %d = %d\n", numero, multiplicador, numero * multiplicador);
    }
}
