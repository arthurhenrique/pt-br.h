#include "../include/brteca.h"

inicio
    inteiro numero = 0;
    
    escreva("numero:");
    leia("%d", &numero);
    escreva("numero: %d\n", numero);
    
    se(numero maior 100) entao
        escreva("Maior que 100\n");
    fim_se
    senao_se (numero menor 100) entao
        escreva("Menor que 100\n");
    fim_senao
    senao
        escreva("igual a 100\n");
    fim_senao
fim
