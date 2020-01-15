#include <stdio.h>

int main (void){

    int dias;
    int km;
    int kmi;
    int categoria;
    float seguro;
    float tarifa;
    float total;

    printf("Quantos dias quer alugar?\n");
        scanf(" %d", &dias);
    
    printf("Qual a categoria que quer usar entre A a D?\n");
        scanf(" %d", &categoria);
    
    switch (categoria) {
 case 1:
     printf("A- 1-Km-ilimitado = 27.50\n 2-Diaria + km = 14.00 + 0.17\n");
        scanf(" %d", &km);

    printf("quer seguro?\n 1- sim, 2- nao");
        scanf(" %d", &seguro);
        if(seguro == 1){
            seguro = 6.50;
        total = (dias * kmi) + seguro;
        printf(" total = %d", total);

        }else if(seguro == 2){
            seguro = 6.50;
            km = 0.17;
        total = (dias * km) + seguro;
        printf(" total = %d", total);
        }
    break;

    case 2:
     printf("B- 1-Km-ilimitado = 27.50\n 2-Diaria + km = 14.00 + 0.17\n");
        scanf(" %d", &km);

    printf("quer seguro?\n 1- sim, 2- nao");
        scanf(" %d", &seguro);
        if(seguro == 1){
            seguro = 7.50;
        total = (dias * kmi) + seguro;
        printf(" total = %d", total);

        }else if(seguro == 2){
            seguro = 7.50;
            km = 0.20;
        total = (dias * km) + seguro;
        printf(" total = %d", total);
        }
    break;

    case 3:
     printf("C- 1-Km-ilimitado = 27.50\n 2-Diaria + km = 14.00 + 0.17\n");
        scanf(" %d", &km);

    printf("quer seguro?\n 1- sim, 2- nao");
        scanf(" %d", &seguro);
        if(seguro == 1){
            seguro = 8.50;
        total = (dias * kmi) + seguro;
        printf(" total = %d", total);

        }else if(seguro == 2){
            seguro = 8.50;
            km = 0.25;
        total = (dias * km) + seguro;
        printf(" total = %d", total);
        }
    break;

    case 4:
     printf("D- 1-Km-ilimitado = 27.50\n 2-Diaria + km = 14.00 + 0.17\n");
        scanf(" %d", &km);

    printf("quer seguro?\n 1- sim, 2- nao");
        scanf(" %d", &seguro);
        if(seguro == 1){
            seguro = 10.00;
        total = (dias * kmi) + seguro;
        printf(" total = %d", total);

        }else if(seguro == 2){
            seguro = 10.00;
            km = 0.30;
        total = (dias * km) + seguro;
        printf(" total = %d", total);
        }
    break;
    
    }
    
return 0;
}