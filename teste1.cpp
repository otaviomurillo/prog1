

#include <stdio.h> 
#include <stdlib.h>

int main() {
     int n, div =0, i=1,num; 
     do{ do{ 
         printf("entre com um numero para saber se eh primo: \n"); 
         scanf("%d",&n); 
     }while(n<1); 
     for (i=1;i<=n && div<=3;i++){
          if(n%i==0) div++; } 
          if(div==2) 
          printf("o numero eh primo! \n"); 
          else printf("o numero nao eh primo \n");

printf("deseja continuar (1-Sim/2-Nao)?");
    scanf("%i",&num);
}
while(num==1);
getchar();


return 0;

}
