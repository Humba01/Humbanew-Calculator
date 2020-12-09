#ifndef USER_INTERFACES_H
#define USER_INTERFACES_H

#include <stdio.h>
#include <stdlib.h>

int valor;


int ui0() {
    char textos = {
    "\nSeja Bem Vindo a Humbanew Calculator!",
    "\n\nOpções:",
    "\n\t00 => Sair do Programa",
    "\n\t01 => Calculadora Comum",
    "\n\t02 => Calculadora Científica",
    "\n\t03 => Calculadora Suprema",
    "\n\t04 => Calculadora Desmontada",
    "\n\t05 => Calculadora Gráfica"
    };

    for(int q = 0; q < sizeof(textos); q++) {
        printf("%s", textos[q]);
    }

    printf("\n\n\t|>> ");
    scanf("%d", &valor);

    switch(valor) {
        case 0:
            exit(1);
            break;
        case 1:
          //  ui1();
            break;
        case 2:
          //  ui2();
            break;
        case 3:
          // ui3();
            break;
        case 4:
          //  ui4();
            break;
        case 5:
          //  ui5();
            break;
        default:
            printf("Opção Inexistente! Tente Novamente.");
            printf("\n\n\t|>> ");   
            scanf("%d", &valor);
            ui0();
    }
}

#endif