/*Calculadora Basica en c++*/
#include <stdio.h>

float potencia(float base, int exponente) {
    float resultado = 1;
    int i;
    for (i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}


int main() {
    float x, y, resultado;
    char op;
    int valido = 1;

    printf("Ingrese operacion: ");
    scanf("%c", &op);
    printf("Ingrese x: ");
    scanf("%f", &x);
    printf("Ingrese y: ");
    scanf("%f", &y);

    switch (op) {
        case '+':
            resultado = x + y;
            break;
        case '-':
            resultado = x - y;
            break;
        case '*':
        case 'x':
            resultado = x * y;
            break;
        case '/':
            resultado = x / y;
            break;
        case '^':
            resultado = potencia(x, (int) y);
            break;
        default:
            valido = 0;
    }

    if (valido)
        printf("El resultado es %f\n", resultado);
    else
        printf("Operacion invalida\n");

    return 0;
}

/*
Signo	Operación
+	Suma
-	Resta
*	Multiplicación
/	División
^	Potencia
*/

/*La multiplicación también puede ser indicada con una x minúscula.

A continuación, se debe ingresar los dos operandos. Finalmente, el programa muestra el resultado de la operación.

Escriba, compile y ejecute este programa.

En este programa puede ver que es posible asignar un valor inicial a una variable al momento de declararla:
*/

/*Sentencias Switch*/

//switch (expresion) {
    //case 1:
        /* que hacer cuando expresion == 1 */

    //case 2:
        /* que hacer cuando expresion == 2 */

    //default:
        /* que hacer cuando la expresion no es igual
         * a ninguno de los casos anteriores */

// }
