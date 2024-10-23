#include <stdio.h>

int main() {
    float x, y, z, average;

 
    //printf("Enter three numbers: ");
    scanf("%f %f %f", &x, &y, &z);

    // Menghitung nilai rata-rataa
    average = (x + y + z) / 3;

    // Menampilkan hasil
    printf("Average is %.2f\n", average);

    return 0;
}
