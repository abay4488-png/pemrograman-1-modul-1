#include <stdio.h>
#include <math.h>

int main()
{
    int c = 5;  
    int a = 12; 
    int b = sqrt(pow(c, 2) + pow(a, 2));

    int keliling = c + a + b;
    int luas = (c * a) / 2;
    
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", a);
    printf("Sisi B = %d cm\n", b);
    printf("Sisi C = %d cm\n", c);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);

    return 0;
}
    