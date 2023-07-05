#include <stdio.h>

int main() {
    // Write C code here
    int X;
    double Y, resultado;
    
    scanf("%i", &X);
    scanf("%lf", &Y);
    resultado = X/Y;
    printf("%.3f km/l\n",resultado);
    
    return 0;
}
