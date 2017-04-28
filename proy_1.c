#include <stdio.h>
#include </home/jorge/Escritorio/proyecto_git/len_c/suma.h>

int main(){
    int a,b;

    printf("Hola mundo!!\n");
    printf("Dame dos números enteros para sumarlos\n");
    scanf("%d %d",&a,&b);
    printf("\n%d + %d = %d\n", a,b,suma(a,b));

	return 0;
}
