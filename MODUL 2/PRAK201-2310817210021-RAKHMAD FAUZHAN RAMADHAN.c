#include <stdio.h>

int main() {
    char nama[100];
    char nim[20];
    char kelas[10];
    char ttl[100];  
    char alamat[200];
    char hobby[100];
    char no_hp[15];

    printf("Input:\n");
    printf("Nama                                     : ");
    scanf(" %[^\n]s", nama);
    
    printf("NIM                                      : ");
    scanf(" %[^\n]s", nim);
    
    printf("Kelas Paralel                            : ");
    scanf(" %[^\n]s", kelas);
    
    printf("Tempat/Tanggal Lahir                     : ");
    scanf(" %[^\n]s", ttl);
    
    printf("Alamat                                   : ");
    scanf(" %[^\n]s", alamat);
    
    printf("Hobby                                    : ");
    scanf(" %[^\n]s", hobby);
    
    printf("No. HP                                   : ");
    scanf(" %[^\n]s", no_hp);

    printf("\nOutput                                    \n");
    printf("Nama                                     : %s\n", nama);
    printf("NIM                                      : %s\n", nim);
    printf("Kelas Paralel                            : %s\n", kelas);
    printf("Tempat/Tanggal Lahir                     : %s\n", ttl);
    printf("Alamat                                   : %s\n", alamat);
    printf("Hobby                                    : %s\n", hobby);
    printf("No. HP                                   : %s\n", no_hp);
    
    return 0;
}
