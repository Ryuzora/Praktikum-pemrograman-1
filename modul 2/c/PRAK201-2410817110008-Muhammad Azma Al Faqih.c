#include <stdio.h>

char nim[20], nama[30], tempat_lahir[20], alamat[100], hobby[25], noHP[15];
int paralel, tanggal_lahir, bulan_lahir, tahun_lahir;

int main() {
  printf("Nama                  : ");
  scanf("%[^\n]%*c", nama);

  printf("NIM                   : ");
  scanf("%s", nim);

  printf("Kelas Paralel         : ");
  scanf("%d", &paralel);
  getchar();

  printf("Tempat/Tanggal Lahir  : ");
  scanf("%[^/]/%d-%d-%d", tempat_lahir, &tanggal_lahir, &bulan_lahir,
        &tahun_lahir);
  getchar();

  printf("Alamat                : ");
  scanf("%[^\n]%*c", alamat);

  printf("Hobby                 : ");
  scanf("%[^\n]%*c", hobby);

  printf("No. HP                : ");
  scanf("%s", noHP);

  printf("\n===== biodata =====\n");
  printf("Nama                  : %s\n", nama);
  printf("NIM                   : %s\n", nim);
  printf("Kelas Paralel         : %d\n", paralel);
  printf("Tempat/Tanggal Lahir  : %s/%d-%d-%d\n", tempat_lahir, tanggal_lahir,
         bulan_lahir, tahun_lahir);
  printf("Alamat                : %s\n", alamat);
  printf("Hobby                 : %s\n", hobby);
  printf("No. HP                : %s", noHP);
}
