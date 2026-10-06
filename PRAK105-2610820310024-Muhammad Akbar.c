#include <stdio.h>

int main()
{
    int a = 9; int b = 5; int x = 8; int y = 8;
    float hasil;
    hasil = (float)(a % b) + (float)(x % y);
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %.0f", hasil);
    return 0;
}