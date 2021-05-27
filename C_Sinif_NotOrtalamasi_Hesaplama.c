#include<stdio.h>

int main() {


    int dizi[20], i, max, min, toplam = 0;
    float ort;
    for (i = 0; i < 20; i++) {
        printf("%d. ogrencinin notunu giriniz : ", i + 1);
        scanf("%d", &dizi[i]);
        toplam += dizi[i];
    }
    ort = toplam / 20.0;
    printf("\nSinifin not ortalamasi = %f", ort);
    max = dizi[0];
    min = dizi[0];
    for (i = 1; i < 20; i++) {
        if (dizi[i] > max) max = dizi[i];
        if (dizi[i] < min) min = dizi[i];
    }
    printf("\nSiniftaki en yuksek not = %d", max);
    printf("\nSiniftaki en dusuk not = %d", min);
}