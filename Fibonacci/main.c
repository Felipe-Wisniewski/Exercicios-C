#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ant = 0;
    int pos = 1;
    int res = 0;
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    for(int i=0;i<=num;i++){

        if(res<1){
            printf("%d = %d\n", i, res);
            res++;
        }else{
            printf("%d = %d\n", i, res);
            res = ant + pos;
            ant = pos;
            pos = res;
        }
    }

    return 0;
}
