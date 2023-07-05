#include <stdio.h>
 
int main() {
 
    double qntLitrosNecessario;
    double  velocidadeMedia;
    int tempoGasto;
    
    scanf("%d",&tempoGasto);
    scanf("%lf",&velocidadeMedia);
    qntLitrosNecessario = velocidadeMedia / 12* tempoGasto;
    printf("%.3lf\n",qntLitrosNecessario);
    
    return 0;
}
