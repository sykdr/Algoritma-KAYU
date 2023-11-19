/*
#include <stdio.h>

int main()
{
    int N,i;
    int deger1= 1, deger2= 1, deger3;
    
    printf("Terim sayısı:");
    scanf("%d" ,&N);
    
    printf(" Fibonacci serisi - %d terimli :", N);
    printf("%d, %d", deger1, deger2);
    
    for (i=3; i<=N; ++i)
    {
        deger3 = deger1 + deger2;
        printf("%d", deger3);
        
        deger1 = deger2;
        deger2 = deger3;
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int secim;

    printf("Bir gun secin (1-7):\n");
    printf("1. Pazartesi\n");
    printf("2. Sali\n");
    printf("3. Carsamba\n");
    printf("4. Persembe\n");
    printf("5. Cuma\n");
    printf("6. Cumartesi\n");
    printf("7. Pazar\n");

    scanf("%d", &secim);

    switch (secim) {
        case 1:
            printf("Pazartesi\n");
            break;
        case 2:
            printf("Sali\n");
            break;
        case 3:
            printf("Carsamba\n");
            break;
        case 4:
            printf("Persembe\n");
            break;
        case 5:
            printf("Cuma\n");
            break;
        case 6:
            printf("Cumartesi\n");
            break;
        case 7:
            printf("Pazar\n");
            break;
        default:
            printf("Gecersiz secim\n");
    }

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int dizi[3];
    printf("Lütfen üç tam sayı girin:\n");
    scanf("%d %d %d", &dizi[0], &dizi[1], &dizi[2]);

	// Sadece en büyük sayıyı bulmakla kalmıyor, ayrıca girilen değerleri küçükten büyüğe sıralamış oluyoruz.
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (dizi[j] > dizi[j + 1]) {
                // Swap işlemi
                int temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }

	printf("Sıralanmış hali: %d, %d, %d\n", dizi[0], dizi[1], dizi[2]);
    printf("En büyük sayı: %d\n",dizi[2]);

    return 0;
}
*/
