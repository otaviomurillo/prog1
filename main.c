#include <stdio.h>
#include <stdlib.h>

int main()
{   float l1,l2,l3;
    int num;
do{ l1=l2=l3=0;
    printf("Vamos classificar seu triangulo!\n");
    printf("entre com a medida do primeiro lado\n");
    scanf("%f",&l1);
    printf("entre com a medida do segundo lado\n");
    scanf("%f",&l2);
    printf("entre com a medida do terceiro lado\n");
    scanf("%f",&l3);




    if((l1==l2)&& (l2==l3)){
    printf("\nEste triangulo eh equilatero!\n");
    }
    if((l1==l2)||(l2==l3)||(l1==l3)){
        printf("\nEste triangulo eh isosceles!\n");

    }
    else printf("\nEste triangulo eh escaleno\n");
    printf("Deseja classificar outro triangulo?/n(1-Sim/2-Nao)?");
        scanf("%d",&num);
}while(num==1);
getchar();

    return 0;
}
