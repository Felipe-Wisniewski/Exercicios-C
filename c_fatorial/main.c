#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    unsigned int fat = 0;

    printf("Digite o !n: ");
    scanf("%d" ,&n);

    if (n<=0) {
        printf("!n invalido\n");
    }else {
        for(int i=0;i<=n;i++){
            if(fat==0){
                printf("fatorial de n 0 = !n 0\n");
                fat++;
            }else{
            fat = fat * i;
            printf("fatorial de n %d = !n %d\n", i,fat);
            }
        }
    }

    return 0;
}
