#include <stdio.h>
int main()
{
    int sisi1 = 4;
    int sisi2 = 5;
    int sisi3 = 7;
    int harga_permeter_tanah = 85000;
    int keliling_tanah = sisi1 + sisi2 + sisi3;
int total_biaya_tanah = keliling_tanah * harga_permeter_tanah;

printf("diketahui sisi1 = %d sisi2 = %d sisi3 = %d\n", sisi1, sisi2, sisi3);
printf("harga per meter tanah = %d\n", harga_permeter_tanah);
printf("keliling tanah = %d\n", keliling_tanah);
printf("total biaya tanah = %d\n", total_biaya_tanah);
return 0;
}
