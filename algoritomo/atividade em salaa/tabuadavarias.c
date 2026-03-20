#include <stdio.h>
int main ()
{
    int i,t;
    printf("qual tabuada deseja calcular\n");
    scanf("%d",&t);
    for(i=0; i<=10; i++){
        printf("%d x %d = %d \n",i,t,i*t);
    }
    return 0;
}