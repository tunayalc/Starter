#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, i, k ,j ;

    printf("Kac elemanli bir dizi istersiniz: \n");
    scanf("%d", &x);

    int dizi[x];  

    for (i = 0; i < x; i++) {
        printf("Diziye eleman giriniz: \n");
        scanf("%d", &dizi[i]);
    }

    for (i = 0; i < x - 1; i++) {
        for ( j = 0; j < x - 1; j++) {
            if (dizi[j] < dizi[j + 1]) {
                k = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = k;
            }
        }
    }

    printf("Siralanmis dizi:\n");
    for (i = 0; i < x; i++) {
        printf("%d\n", dizi[i]);  
    }

    return 0;
}

