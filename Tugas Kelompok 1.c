#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    char nama_pelanggan[30], bln[10];
    int harga, tgl, thn, menu, jml, total;
    float diskon = 0.10, total_diskon;
    char ulang;

    do {
        
        printf("|<<< Selamat Datang di WIRA CAFE >>>|\n");
        printf("|---------------------------------------|\n");
        printf("|Daftar Menu                Harga       |\n");
        printf("|  1. Ice Tea               Rp.6000     |\n");
        printf("|  2. Caramel Machiato      Rp.30000    |\n");
        printf("|  3. Green Tea Latte       Rp.25000    |\n");
        printf("|  4. Milkshake             Rp.15000    |\n");
        printf("|  5. Chocolate Hazelnut    Rp.25000    |\n");
        printf("|  6. Nasi Goreng           Rp.25000    |\n");
        printf("|  7. Kentang Goreng        Rp.15000    |\n");
        printf("|  8. Burger                Rp.20000    |\n");
        printf("|  9. Salat Buah            Rp.10000    |\n");
        printf("|  10. Es Krim             Rp.15000     |\n");
        printf("|---------------------------------------|\n\n");
        
        printf("Nama Pelanggan = "); 
        scanf("%s", nama_pelanggan);
        printf("Tanggal Pembelian = "); 
        scanf("%d %s %d", &tgl, bln, &thn);
        
       total = 0;

        do {
            printf("Silahkan pilih menu = "); 
            scanf("%d", &menu);

            switch(menu)
            {
                case 1:
                    printf("Menu Yang Di Pilih = Ice Tea\n");
                    harga = 6000;
                    break;
                case 2:
                    printf("Menu Yang Di Pilih = Caramel Machiato\n");
                    harga = 30000;
                    break;
                case 3:
                    printf("Menu Yang Di Pilih = Green Tea Latte\n");
                    harga = 25000;
                    break;
                case 4:
                    printf("Menu Yang Di Pilih = Milkshake\n");
                    harga = 15000;
                    break;
                case 5:
                    printf("Menu Yang Di Pilih = Chocolate Hazelnut\n");
                    harga = 25000;
                    break;
                case 6:
                    printf("Menu Yang Di Pilih = Nasi Goreng\n");
                    harga = 25000;
                    break;
                case 7:
                    printf("Menu Yang Di Pilih = Kentang Goreng\n");
                    harga = 15000;
                    break;
                case 8:
                    printf("Menu Yang Di Pilih = Burger\n");
                    harga = 20000;
                    break;
                case 9:
                    printf("Menu Yang Di Pilih = Salat Buah\n");
                    harga = 10000;
                    break;
                case 10:
                    printf("Menu Yang Di Pilih = Es Krim\n");
                    harga = 15000;
                    break;
                default:
                    printf("Menu Pilihan Kamu Tidak Ada !!!\n");
                    continue; // Kembali ke awal loop jika menu tidak valid
            }

            printf("Masukkan Jumlah Pesanan: ");
            scanf("%d", &jml);
            total += harga * jml;

            printf("\nApakah Anda ingin memilih menu lain? (y/t): ");
            scanf(" %c", &ulang);

        } while (ulang == 'y' || ulang == 'Y');
        
        system("clear"); // Untuk Linux/Unix

        printf("\n\n=== Detail Pembelian ===\n");
        printf("Nama Pelanggan  : %s\n", nama_pelanggan);
        printf("Tanggal           : %d %s %d\n", tgl, bln, thn);
        
        printf("\n=== Rincian Pesanan ===\n");
        if (total > 20000) {
            total_diskon = total - (total * diskon);
            printf("==> Total Pembayaran\t: Rp. %d\n", total);
            printf("==> Total Pembayaran Setelah Diskon 10%%\t: Rp. %.2f\n", total_diskon);
        } else {
            printf("==> Total Pembayaran\t: Rp. %d\n", total);
        }

        printf("\n==========================================\n");
        
        printf("Apakah Anda ingin memesan lagi? (y/t): ");
        scanf(" %c", &ulang);

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
