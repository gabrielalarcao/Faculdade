#include <stdio.h>
 
main() {
    int cc, dr, rt;
    scanf("%d", &cc);
    scanf("%d", &dr);
    scanf("%d", &rt);
    if (cc<7){
        if (dr>50){
            if (rt>80000){
                printf("ACO DE GRAU = 10\n");
            }else
                printf("ACO DE GRAU = 9\n");
        }else
            printf("ACO DE GRAU = 8\n");
    }else
        printf("ACO DE GRAU = 7\n");
}