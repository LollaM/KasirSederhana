#include <stdio.h>
#include <stdlib.h>
#include "headerApp.h"
#include <time.h>
#include <string.h>
//	==================================================PROCEDURE TAMPILAN AWAL============================================================================
void tampilan(){
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t||= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =||\n");
	printf("\t\t||                     SELAMAT DATANG DI SUPERMARKET                         ||\n");
	printf("\t\t||                     _________________________________                     ||\n");
	printf("\t\t||                                                                           ||\n");
	printf("\t\t||                Jl. Dimana saja asalkan senang, - Jawa Barat               ||\n");
	printf("\t\t||                            Telp : (022)8767557                            ||\n");
	printf("\t\t||= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =||\n\n");	
	printf("\t\t                       Klik tombol enter untuk melanjutkan                    \n");
	printf("\n\n\n\n\n\n\n\n");
}
//	==================================================PROCEDURE MENU UTAMA===============================================================================
void menu_utama(){
	printf("\n\n\n\n\n\n");
	printf("\t\t||==============================================================||\n");
	printf("\t\t||===============|                              |===============||\n");
	printf("\t\t||               |           MAIN MENU          |               ||\n");
	printf("\t\t||               |        Supermarket Ofal      |               ||\n");
	printf("\t\t||===============|                              |===============||\n");
	printf("\t\t||==============================================================||\n");
	printf("\t\t||                       | Pilihan Menu |                       ||\n");
	printf("\t\t||                 ____________________________                 ||\n");
	printf("\t\t||                                                              ||\n");
	printf("\t\t|| ==>> 1. Panduan Penggunaan Aplikasi                          ||\n");
	printf("\t\t|| ==>> 2. Customer                                             ||\n"); 
	printf("\t\t|| ==>> 3. Admin                                                ||\n");	
	printf("\t\t|| ==>> 4. Exit                                                 ||\n");
	printf("\t\t||==============================================================||\n\n");	
}
//	==================================================PROCEDURE MENU_CUSTOMER============================================================================
void menu_customer(){
	printf("\n\n\n");
	printf("\t\t||============================================================||\n");
	printf("\t\t||===========                                      ===========||\n");
	printf("\t\t||                  Welcome To System Customer                ||\n");
	printf("\t\t||                      Supermarket Ofal                      ||\n");
	printf("\t\t||===========                                      ===========||\n");
	printf("\t\t||============================================================||\n");
	printf("\t\t||                  ---> Pilihan Menu <---                    ||\n");
	printf("\t\t||                 ____________________________               ||\n");
	printf("\t\t||                                                            ||\n");
	printf("\t\t|| => 1. Informasi Customer                                   ||\n");
	printf("\t\t||____________________________________________________________||\n");
	printf("\t\t||                                                            ||\n");
	printf("\t\t|| => 2. Daftar sebagai Member                                ||\n");
	printf("\t\t||____________________________________________________________||\n");
	printf("\t\t||                                                            ||\n");
	printf("\t\t|| => 3. Cek Promosi (Only Member)                            ||\n");
	printf("\t\t||____________________________________________________________||\n");
	printf("\t\t||                                                            ||\n");
	printf("\t\t|| => 4. Beli Produk                                          ||\n");
	printf("\t\t||____________________________________________________________||\n");
	printf("\t\t||                                                            ||\n");
	printf("\t\t|| => 5. Kembali                                              ||\n");
	printf("\t\t||____________________________________________________________||\n");
	printf("\t\t||============================================================||\n\n");	
}
//	==================================================PROCEDURE MENU LOGIN ADMIN=========================================================================
void login_admin(){
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t||===============================================================||\n");
	printf("\t\t\t\t||====================|                     |====================||\n");
	printf("\t\t\t\t||                    | Login Administrator |                    ||\n");
	printf("\t\t\t\t||====================|                     |====================||\n");
	printf("\t\t\t\t||===============================================================||\n\n");
}
//	==================================================PROCEDURE MENU LOGIN MEMBER========================================================================
void tampilanLoginMember(){
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t||===============================================================||\n");
	printf("\t\t\t\t||====================|                     |====================||\n");
	printf("\t\t\t\t||                    |     Login Member    |                    ||\n");
	printf("\t\t\t\t||====================|                     |====================||\n");
	printf("\t\t\t\t||===============================================================||\n\n");
}
//	==================================================PROCEDURE TAMPILAN GANTI USERNAME DAN PASSWORD ADMIN===============================================
void gantiUsernamePassword(){
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t||===============================================================||\n");
	printf("\t\t\t\t||====================|        Change       |====================||\n");
	printf("\t\t\t\t||                    | Username & Password |                    ||\n");
	printf("\t\t\t\t||====================|    Administrator    |====================||\n");
	printf("\t\t\t\t\t\t||===============================================================||\n\n");
}
//	==================================================PROCEDURE TAMPILAN PENDAFTARAN MEMBER=============================================================
void tampilanDaftarMember(){
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t||================================================================||\n");
	printf("\t\t\t\t||==================|        Pendaftaran      |===================||\n");
	printf("\t\t\t\t||                  | Member Supermarket Ofal |                   ||\n");
	printf("\t\t\t\t||==================|                         |===================||\n");
	printf("\t\t\t\t||================================================================||\n\n");
}
//	==================================================PROCEDURE TAMPILAN DAFTAR MEMBER===================================================================
void menuDaftarMember(){
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t||===============================================================||\n");
	printf("\t\t\t\t\t\t||====================|        Hi Hi !      |====================||\n");
	printf("\t\t\t\t\t\t||                    | Set Your Acount Now |                    ||\n");
	printf("\t\t\t\t\t\t||===============================================================||\n\n");
}
//	==================================================PROCEDURE MENU ADMIN===============================================================================
void menu_admin(){
		printf("\n\n");
		printf("\t\t\t\t\t\t||==============================================================||\n");
		printf("\t\t\t\t\t\t||              |                                 |             ||\n");
        printf("\t\t\t\t\t\t||              | Welcome To System Administrator |             ||\n");
        printf("\t\t\t\t\t\t||              |                                 |             ||\n");
        printf("\t\t\t\t\t\t||==============================================================||\n");
        printf("\t\t\t\t\t\t||                         Pilihan Menu                         ||\n");
	    printf("\t\t\t\t\t\t||                 ____________________________                 ||\n");
	    printf("\t\t\t\t\t\t||                                                              ||\n");
        printf("\t\t\t\t\t\t|| => 1. Ubah Username & Password                               ||\n");
        printf("\t\t\t\t\t\t||______________________________________________________________||\n");
        printf("\t\t\t\t\t\t||                                                              ||\n");
        printf("\t\t\t\t\t\t|| => 2. Data Member                                            ||\n");
        printf("\t\t\t\t\t\t||______________________________________________________________||\n");
        printf("\t\t\t\t\t\t||                                                              ||\n");
        printf("\t\t\t\t\t\t|| => 3. Data Customer                                          ||\n");
        printf("\t\t\t\t\t\t||______________________________________________________________||\n");
        printf("\t\t\t\t\t\t||                                                              ||\n");
        printf("\t\t\t\t\t\t|| => 4. Sistem Data Produk                                     ||\n");
        printf("\t\t\t\t\t\t||______________________________________________________________||\n");
        printf("\t\t\t\t\t\t||                                                              ||\n");
        printf("\t\t\t\t\t\t|| => 5. Sistem Data Produk Promosi                             ||\n");
        printf("\t\t\t\t\t\t||______________________________________________________________||\n");
        printf("\t\t\t\t\t\t||                                                              ||\n");
        printf("\t\t\t\t\t\t|| => 6. Kembali                                                ||\n");
        printf("\t\t\t\t\t\t||______________________________________________________________||\n");
        printf("\t\t\t\t\t\t||==============================================================||\n\n");
}
//	==================================================PROCEDURE MENU SISTEM DATA PRODUK====================================================================
void sistemDataProduk(){
		printf("\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t||==============================================================||\n");
		printf("\t\t\t\t\t\t||                 |                          |                 ||\n");
        printf("\t\t\t\t\t\t||                 |    Sistem Data Produk    |                 ||\n");
        printf("\t\t\t\t\t\t||                 |                          |                 ||\n");
        printf("\t\t\t\t\t\t||==============================================================||\n");
        printf("\t\t\t\t\t\t||                         Pilihan Menu                         ||\n");
		printf("\t\t\t\t\t\t||                 ____________________________                 ||\n");
		printf("\t\t\t\t\t\t||                                                              ||\n");
        printf("\t\t\t\t\t\t|| ==>> 1. Input Produk Baru                                    ||\n");
        printf("\t\t\t\t\t\t|| ==>> 2. Hapus Data Produk                                    ||\n");
        printf("\t\t\t\t\t\t|| ==>> 3. Kembali                                              ||\n");
        printf("\t\t\t\t\t\t||==============================================================||\n\n");
}
//	==================================================PROCEDURE MENU SISTEM DATA PRODUK PROMOSI============================================================
void sistemDataProdukPromosi(){
		printf("\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t||================================================================||\n");
		printf("\t\t\t\t\t\t||                 |                            |                 ||\n");
        printf("\t\t\t\t\t\t||                 | Sistem Data Produk Promosi |                 ||\n");
        printf("\t\t\t\t\t\t||                 |                            |                 ||\n");
        printf("\t\t\t\t\t\t||================================================================||\n");
        printf("\t\t\t\t\t\t||                         Pilihan Menu                           ||\n");
		printf("\t\t\t\t\t\t||                 ____________________________                   ||\n");
		printf("\t\t\t\t\t\t||                                                                ||\n");
        printf("\t\t\t\t\t\t|| ==>> 1. Input Produk Baru                                      ||\n");
        printf("\t\t\t\t\t\t|| ==>> 2. Hapus Data Produk                                      ||\n");
        printf("\t\t\t\t\t\t|| ==>> 3. Kembali                                                ||\n");
        printf("\t\t\t\t\t\t||==============================================================||\n\n");
}
//	==================================================PROCEDURE BACA FILE PANDUAN========================================================================
void panduan(){
	char panduan[300];
	FILE *filetubes;
	printf("\n\n\n");
	if((filetubes = fopen("Panduan.txt","r")) == NULL){
		printf("File ini kosong !!! Silahkan hubungi admin");
		
		exit(1);
	}
	while(fgets(panduan, sizeof(panduan),filetubes)){
		printf("%s",panduan);
	}
		
	fclose(filetubes);
}
//	==================================================PROCEDURE READ RECORD DATA PRODUK====================================================================
void vdaftarproduk(char namaProduk[50],char jenis[50],int kodeProduk, int harga){
	FILE *filetubes;
	data produk;
	printf("\n\n\n");
    printf("\t\t     ||= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =||\n");
    printf("\t\t     ||                                                DAFTAR PRODUK                                                    ||\n");
    printf("\t\t     ||                                     Silahkan pilih produk yang ada inginkan                                     ||\n");
    printf("\t\t     ||= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =||\n");
    printf("\t\t     ||-----------------------------------------------------------------------------------------------------------------||\n");
    printf("\t\t     || KODE PRODUK |                 NAMA PRODUK                  |            JENIS             |         HARGA       ||\n");
    printf("\t\t     ||-----------------------------------------------------------------------------------------------------------------||");
    
    if ( (filetubes=fopen("dataproduk.dat","rb")) == NULL )
	{
	printf("File tidak dapat dibuka!\r\n");
	exit(1);
	}
	printf("\n");
	while ( (fread(&produk, sizeof(produk),1, filetubes)) == 1)
		printf("\t\t     ||     %-5d  | %-45s  | %-30s  |      Rp.%-5d   ||\r\n", produk.kodeProduk, produk.namaProduk,produk.jenis,produk.harga);
	 	printf("\t\t     ||-----------------------------------------------------------------------------------------------------------------||\n\n");   
		fclose(filetubes);
    
}
//	==================================================PROCEDURE PEMBAYARAN DAN STRUK=====================================================================
void vpembayaran(char nama_produk[50], char jenis[50], int kodeProduk, int harga){
	
	int i, j, a, jumlahBelanja, jumlahUnit, total, totalDiskon, potongan, hasilPotongan, kembalian, jumlahUang,kodeItem;
	char vBayar, vTanyaID;
	
	data produk;
	users user[100];
	FILE *filetubes;
	
	printf("\n\n\t\t     => Berapa Produk yang akan dibeli: ");
	scanf("%d",&jumlahBelanja);
		for (i=1;i<=jumlahBelanja;i++){
			filetubes=fopen("dataproduk.dat","rb");
			kodeProduk:
			printf("\t\t     => Masukkan Kode Produk   : ");
			scanf("%d",&kodeItem);
				while ((fread(&produk, sizeof(produk),1, filetubes))==1){
								
					if (kodeItem == produk.kodeProduk){
						user[i].nama_produk=produk.namaProduk;
						user[i].jenis=produk.jenis;
						user[i].harga=produk.harga;
				
							printf("\t\t     => Masukkan Jumlah Produk : ");
							scanf("%d",&jumlahUnit);
							user[i].subtotal=hitungsubtotal(user[i].harga,jumlahUnit);
							printf("\t\t     ===================================================================================================================== \n");
							printf("\t\t     Nama Produk   : %s\n",user[i].nama_produk);
							printf("\t\t     Harga         : Rp.%d\n",user[i].harga);
							printf("\t\t     Subtotal      : Rp.%d \n",user[i].subtotal);
							printf("\t\t     ===================================================================================================================== \n");
	
							
					}	
					
				}
				fclose(filetubes);																		 
	 	}
	
		total=0;
		for(j=1;j<=jumlahBelanja;j++){
			total=total+user[j].subtotal;	
		}
			
		printf("\t\t     Total Bayar : Rp.%d \n",total);
		printf("\t\t     ===================================================================================================================== \n");
		lanjutbayar:
		printf("\t\t     => Lanjutkan Pembayaran? [y/n] : ");
		scanf("%s",&vBayar);								
			switch(vBayar){
				case 'y':
				
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n");
				isiID:
				printf("\t\t\t  Apakah anda pernah mengisi identitas ? [y/n] : ");
				scanf("%s",&vTanyaID);
				system("cls");
				switch (vTanyaID){
					case 'y':
						goto hitung;break;
					case 'n':
						goto masukanID;break;
					default:
						printf("Input Salah!\n");
						goto isiID;break;
				}break;
				masukanID:
				ID_customer();
				system("cls");
				
				hitung:	
				totalDiskon=tot_diskon(total);
				hasilPotongan=potonganharga(potongan,total);
				printf("\n\n\n\n\n\n\n");
				input:
				printf("\t\t\t\t\t\t\t\t     => Total Awal Bayar           : Rp.%d",total);	
				printf("\n\t\t\t\t\t\t\t     => Potongan Harga             : Rp.%d",hasilPotongan);
				printf("\n\t\t\t\t\t\t\t     => Total Akhir Bayar          : Rp.%d \n",totalDiskon);								
				printf("\n\t\t\t\t\t\t\t     => Masukkan jumlah uang bayar : Rp.");
				scanf("%d",&jumlahUang);
				
				kembalian=hitungkembalian(jumlahUang,totalDiskon);
					if (jumlahUang<totalDiskon){
						system("cls");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t     *Mohon maaf uang anda tidak mencukupi ^_^\n\n");
						goto input;
					}
					
				system("cls");
				printf("\n\n\n\n\n\n");								
				printf("\t\t\t\t\t\t\t***********************************************************\t\n");
				printf("\t\t\t\t\t\t\t*                    Supermarket Ofal                     *\t\n");
				printf("\t\t\t\t\t\t\t*                 Telp : (022)3458908                     *\t\n");
				printf("\t\t\t\t\t\t\t*            Email : ofaluniversal@ymail.com              *\t\n");
				printf("\t\t\t\t\t\t\t***********************************************************\t\n");
			
				a=1;
				while (a<=jumlahBelanja){	
					printf("\t\t\t\t\t\t\t===========================================================\n");	
					printf("\t\t\t\t\t\t\t                        Produk ke-%d                       \n\n",a);
					printf("\t\t\t\t\t\t\tHarga Produk         : Rp.%d \n",user[a].harga);
					printf("\t\t\t\t\t\t\tSubtotal             : Rp.%d \n",user[a].subtotal);	
					a++;	
				}
				printf("\t\t\t\t\t\t\t===========================================================\n");
				setwaktu();
				printf("\t\t\t\t\t\t\tPotongan Harga    	  : Rp.%d  \n",hasilPotongan);
				printf("\t\t\t\t\t\t\tTotal Bayar       	  : Rp.%d  \n",totalDiskon);
				printf("\t\t\t\t\t\t\tJumlah uang bayar   	  : Rp.%d \n",jumlahUang);
				printf("\t\t\t\t\t\t\tKembalian           	  : Rp.%d \n\n",kembalian);
				printf("\t\t\t\t\t\t\t 	       Terimakasih telah berkunjung                      \n");
				printf("\t\t\t\t\t\t\t===========================================================\n");break;
				
				case 'n':
				exit;break;
				default:
					printf("Input Salah! \n");
					goto lanjutbayar;
			}
}
//	==================================================PROCEDURE INPUT IDENTITAS CUSTOMER KE RECORD=======================================================
void ID_customer(char nama[30],char alamat[44], char email[37]){
	
	FILE *filetubes;
	data_user datauser;
    printf("\n\n\n\n\n\n");	
    printf("\t\t\t\t\t\t||===============================================================||\n");
    printf("\t\t\t\t\t\t||                     IDENTITAS PELANGGAN                       ||\n");
    printf("\t\t\t\t\t\t||===============================================================||\n\n");
	(filetubes=fopen("datacustomer.txt","a+t"));
	 printf("\t\t\t\t\t\t\t     *Mohon isi dengan benar data customer ^_^\n\n");
	 printf("\t\t\t\t\t\t- Masukkan Nama Anda      : "); fflush(stdin);
	 gets(datauser.nama);
	 printf("\t\t\t\t\t\t- Masukkan Alamat Anda    : "); fflush(stdin);
	 gets(datauser.alamat);
	 printf("\t\t\t\t\t\t- Masukkan Email Anda     : "); fflush(stdin);
	 gets(datauser.email);
	
	 fwrite(&datauser, sizeof(datauser), 1, filetubes);
	 fclose(filetubes);
}
//	==================================================PROCEDURE READ RECORD IDENTITAS CUSTOMER===========================================================
void Read_ID_customer(char nama[30],char alamat[44],char email[37]){
	FILE *filetubes;
	data_user dataUser;
 
	printf("\n\n\n");
	printf("\t***************************************************************************************************************************************************\n");
	printf("\t*                                                              IDENTITAS CUSTOMER                                                                 *\n");
	printf("\t***************************************************************************************************************************************************\n\n");
	printf("\t||===============================================================================================================================================||\n");
	printf("\t||                   Nama:                  ||                            Alamat:                         ||                Email:               ||\n");
	printf("\t||===============================================================================================================================================||\n");

	if ( (filetubes=fopen("datacustomer.txt","rt")) == NULL ){
		printf("File tidak dapat dibuka!\r\n");
		exit(1);
	}
	while ( (fread(&dataUser, sizeof(dataUser),1, filetubes)) == 1)
		printf("\t|| %-23s                  || %-38s                     || %-36s||\r\n", dataUser.nama, dataUser.alamat,dataUser.email);
		printf("\t||===============================================================================================================================================||\n\n");
		fclose(filetubes);
}
//	==================================================PROCEDURE GET TANGGAL SISTEM=======================================================================
void setwaktu() {
    struct tm *waktuSistem;

    time_t vWaktu;
    vWaktu = time(NULL);
    waktuSistem = localtime(&vWaktu); /* Untuk mendapatkan waktu lokal komputer */

    printf("\t\t\tWaktu Pembelian       : %d/%d/%d \n", waktuSistem->tm_mday, waktuSistem->tm_mon+1, 1900+waktuSistem->tm_year);
}
//	==================================================PROCEDURE INPUT PRODUK===============================================================================
void restok(char namaProduk[50],char jenis[50],int kodeProduk,int harga){
	FILE *filetubes;
		char jawab;
		int kodeProdukInput;
		data produk;
		input:
		if ( (filetubes=fopen("dataproduk.dat","a+b")) == NULL ){
			 printf("File tidak dapat dibuat!\r\n");
			 exit(1);
		}
			printf("\n\t\t     =====================================================================================================================\n\n\n");
			printf("\t\t     Masukkan Kode 	Produk      : "); fflush(stdin);
			scanf("%d",&kodeProdukInput);
			while (fread(&produk, sizeof(produk),1, filetubes)){
				if (kodeProdukInput==produk.kodeProduk){
					printf("\n\n\t\t\t\t\t\t\tKode Produk Tersedia! Silahkan Input Kode Produk Belum Tersedia...\n");
					fclose(filetubes);
					goto input;
				}
				
			}
					
			produk.kodeProduk=kodeProdukInput; fflush(stdin);
			printf("\t\t     Masukkan Nama Produk        : "); fflush(stdin);	
			gets(produk.namaProduk);
			printf("\t\t     Masukkan Jenis Produk       : "); fflush(stdin);
			gets(produk.jenis);
			printf("\t\t     Masukkan Harga Produk       : "); fflush(stdin);
			fwrite(&produk, sizeof(produk), 1, filetubes);
			fclose(filetubes); 
			sortproduk();
			printf("\n\n\n\t\t\t\t\t\t\t\t       Data telah tersimpan   \n");
			printf("\t\t     =====================================================================================================================\n");	
			printf("\n\n\t\t     Masukkan data kembali? [y/n] : ");fflush(stdin);
			scanf("%s",&jawab);
			switch(jawab){
				case 'y':
					goto input;break;
					
			}
}
//	==================================================PROCEDURE PENJELASAN BENEFIT MENJADI MEMBER========================================================
void informasicustomer(){
	char informasi[300];
	FILE *filetubes;
	printf("\n\n\n");
	if((filetubes = fopen("infocustomer.txt","r")) == NULL){
		printf("File ini kosong !!!");		
		exit(1);
	}
	while(fgets(informasi, sizeof(informasi),filetubes)){
		printf("%s",informasi);
	}
	fclose(filetubes);
}
//	==================================================PROCEDURE READ FILE USERNAME=======================================================================
void ambilusername(){
	FILE *file; //pointer ke file
	file=fopen("testuser.txt", "r"); //membaca file password.txt
	fscanf(file,"%s",username); //menyimpan data pada variabel password
	fclose(file); //menutup file
}
//	==================================================PROCEDURE READ FILE PASSWORD=======================================================================
void ambilpassword(){
	FILE *file; //pointer ke file
	file=fopen("testpass.txt", "r"); //membaca file password.txt
	fscanf(file,"%s",password); //menyimpan data pada variabel password
	fclose(file); //menutup file
}
//	==================================================PROCEDURE GANTI USERNAME BARU======================================================================
void gantiuser(){
	char userBaru[10];
	FILE *file;
	
	file=fopen("testuser.txt","w");
	fgets(userBaru, sizeof(userBaru), stdin);
	printf("\n\n");
	printf("\t\t\t\t\t\t- Masukkan Username Baru : ");
	fgets(userBaru, sizeof(userBaru), stdin);
	
	fputs(userBaru,file);
	fclose(file);
}
//	==================================================PROCEDURE GANTI PASSWORD BARU======================================================================
void gantipass(){
	char passBaru[10];
	FILE *file;
	
	file=fopen("testpass.txt","w");
	printf("\t\t\t\t\t\t- Masukkan Password Baru : ");
	fgets(passBaru, sizeof(passBaru), stdin);
	
	fputs(passBaru,file);
	fclose(file);
}
//	==================================================PROCEDURE MENU INPUT PRODUK PROMOSI KE RECORD========================================================
void promosi(char nama_produk[50],char jenisProduk[50],int kodeProdukPromosi, int harga){

	FILE *filetubes;
	char jawab;
	int kodePromosi;
	datapromosi produkpromosi;
	
	inputlagi:
	if ( (filetubes=fopen("produkpromosi.dat","a+b")) == NULL ){
		 printf("File tidak dapat dibuat!\r\n");
		 exit(1);
	}
		printf("\n\t\t     =====================================================================================================================\n\n");
		ulangi:
		printf("\n\t\t\t   Masukkan Kode Produk      : "); fflush(stdin);
		scanf("%d",&kodePromosi);
		while(fread(&produkpromosi,sizeof(produkpromosi),1,filetubes))
			if(kodePromosi==produkpromosi.kodeProdukPromosi){
				printf("\n\n\t\t\t\t\t\t\tKode Produk Tersedia! Silahkan Input Kode Produk Belum Tersedia...\n");
				goto inputlagi;
			}
		
		produkpromosi.kodeProdukPromosi=kodePromosi;fflush(stdin);
		printf("\t\t     Masukkan Nama produk        : "); fflush(stdin);
		gets(produkpromosi.nama_produk);
		printf("\t\t     Masukkan Jenis produk       : "); fflush(stdin);
		gets(produkpromosi.jenisProduk);
		printf("\t\t     Masukkan Harga produk       : "); fflush(stdin);
		scanf("%d",&produkpromosi.harga);
		
		fwrite(&produkpromosi, sizeof(produkpromosi), 1, filetubes);
		fclose(filetubes); 
		sortprodukpromosi();
		printf("\n\n\n\t\t\t\t\t\t\t\t     ~ Data telah tersimpan ~ \n");
		printf("\n\t\t     =====================================================================================================================\n\n");	
		printf("\n\t\t     Masukkan data kembali? [y/n] : ");fflush(stdin);
		scanf("%s",&jawab);
			switch(jawab){
				case 'y':
					goto inputlagi;break;
					
			}
}
//	==================================================PROCEDURE READ RECORD PRODUK PROMOSI=================================================================
void readprodukpromosi(){
	char judul[50], jenisProduk[50];
	int kode_brg,harga;
	FILE *filetubes;
	datapromosi produkpromosi;
	printf("\n\n\n");
    printf("\t\t     ||= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =||\n");
    printf("\t\t     ||                             		Produk Promosi untuk anda sebagai member 			                 ||\n");
    printf("\t\t     ||= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = ===||\n");
    printf("\t\t     ||-----------------------------------------------------------------------------------------------------------------||\n");
    printf("\t\t     || KODE Produk |                  Nama Produk                 |            Jenis            |         Harga        ||\n");
    printf("\t\t     ||-----------------------------------------------------------------------------------------------------------------||");
    
    if( (filetubes=fopen("produkpromosi.dat","rb")) == NULL ){
		printf("\n\n                                               Hi Hi Kalian                                                   \n\n");
		printf("\n\n                              Promo Terbaru akan segera hadi untuk anda semua ya                              \n\n");
		exit;
	}
	 printf("\n");
	 while ( (fread(&produkpromosi, sizeof(produkpromosi),1, filetubes)) ==1 )
	 printf("\t\t     ||     %-5d  | %-43s  | %-28s  |      Rp.%-9d   ||\r\n", produkpromosi.kodeProdukPromosi, produkpromosi.nama_produk,produkpromosi.jenisProduk,produkpromosi.harga);
	 printf("\t\t     ||-----------------------------------------------------------------------------------------------------------------||\n\n");   
	 fclose(filetubes);
}
//	==================================================PROCEDURE BAYAR PRODUK PROMOSI=======================================================================
void byrpromosi(char judul[50],char jenisProduk[50],int kodeProdukPromosi, int harga){
	
	int  jumlahUnit, jumlahUang, kembalian,kodeBarang;
	char vbayar, vpilihan;
	
	FILE *filetubes;
	datapromosi produkpromosi;
	users members;
	
	if ( (filetubes=fopen("produkpromosi.dat","rb")) == NULL ){
		 printf("File tidak dapat dibuka!\r\n");
		 exit(1);
	}
		printf("\t\t     => Masukkan Kode Produk   : ");
		scanf("%d",&kodeBarang);
		while (fread(&produkpromosi, sizeof(produkpromosi),1, filetubes)){		
			if(kodeBarang== produkpromosi.kodeProdukPromosi){
				members.nama_produk=produkpromosi.nama_produk;
				members.harga=produkpromosi.harga;
				
				printf("\t\t     => Masukkan Jumlah Produk : ");
				scanf("%d",&jumlahUnit);
				members.subtotal=hitungsubtotal(members.harga,jumlahUnit);
				printf("\t\t     ===================================================================================================================== \n");	
				printf("\t\t      Nama Produk  : %s\n",members.nama_produk);
				printf("\t\t      Harga        : %d\n",members.harga);
				printf("\t\t      Total        : %d \n",members.subtotal);
				printf("\t\t     ===================================================================================================================== \n");
			}
		}
	lanjut:		
	printf("\n\t\t     => Lanjutkan Pembayaran? [y/n] : ");
	scanf("%s",&vbayar);								
	switch(vbayar){
		case 'y':
		case 'Y':
		system("cls");
		printf("\n\n\n\n\n\n\n");	
		input:	
		printf("\n\t\t\t\t\t\t\t=> Total yang harus dibayar   : Rp.%d",members.subtotal);						
		printf("\n\t\t\t\t\t\t\t=> Masukkan jumlah uang bayar : Rp.");
		scanf("%d",&jumlahUang);
		
		kembalian=hitungkembalian(jumlahUang,members.subtotal);
			if (jumlahUang<members.subtotal){
				system("cls");
				printf("\n\n\n\n\n\n\t\t*Mohon maaf uang anda tidak mencukupi ^_^\n\n");
				goto input;
			}		
			system("cls");
			printf("\n\n\n\n\n\n");								
			printf("\t\t\t***********************************************************\t\n");
			printf("\t\t\t*                    Supermarket Ofal                     *\t\n");
			printf("\t\t\t*                 Telp : (022)3458908                     *\t\n");
			printf("\t\t\t*            Email : ofaluniversal@gmail.com              *\t\n");
			printf("\t\t\t***********************************************************\t\n");
			printf("\t\t\t===========================================================\n");	
			printf("\t\t\tNama Produk           : %s\n",members.nama_produk);
			printf("\t\t\tHarga                 : %d \n",members.harga);
			setwaktu();
			printf("\t\t\tTotal Bayar           : %d  \n",members.subtotal);
			printf("\t\t\tJumlah uang bayar     : %d \n",jumlahUang);
			printf("\t\t\tKembalian             : %d \n\n",kembalian);
			printf("\t\t\t               Thank's For Your Shopping      \n");
			printf("\t\t\t===========================================================\n");break;
			
			case 'n':
				exit;break;
			
			default:
			printf("Input Salah! \n");
			goto lanjut;break;
	}
}
//	==================================================FUNCTION HITUNG SUB TOTAL==========================================================================
int hitungsubtotal(int sub, int hrg){
	int subtotal;
	subtotal = sub*hrg;
	return subtotal;
}
//	==================================================FUNCTION HITUNG KEMBALIAN==========================================================================
int hitungkembalian(int uang, int bayar){
	int kembalian;
	kembalian = uang - bayar;
	return kembalian;
}
//	==================================================FUNCTION HITUNG DISKON=============================================================================
int tot_diskon(int diskon){
	if (diskon >= 100000 && diskon< 500000){
		diskon=diskon-(diskon*10/100);
		system("cls");
		printf("\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t      Selamat Anda Mendapatkan Diskon Sebesar 10 Persen \n");
        return diskon;
	}
	
		else if (diskon >= 500000){
			diskon=diskon-(diskon*20/100);
			system("cls");
			printf("\n\n\n\n\n\n\n");
			printf("\n\n\t\t\t\t\t\t     Selamat Anda Mendapatkan Diskon Sebesar 20 Persen \n");
	        return diskon;
		}
}
//	==================================================FUNCTION HITUNG SETELAH DI DISKON==================================================================
int potonganharga(int discount,int vDiskon){
	if (vDiskon >= 100000 && vDiskon < 500000){
		discount=vDiskon*10/100;
        return discount;
	}
		else if (vDiskon >= 500000){
			discount=vDiskon*20/100;
	        return discount;
			
		}else{
			discount = vDiskon * 0;
			return discount;
		}
}
//	==================================================PROCEDURE HAPUS KODE PRODUK==========================================================================
void hapusKodeProduk(char nama[50],char karangan[50],int kode_brg,int harga){
	FILE *fpo;
	FILE *fpt;
	FILE *filetubes;
	data produk;
	char jawab;
	int s,kode;
		hapusdata:
		printf("\t\t     - Masukan Kode Produk yang ingin Dihapus: ");
		scanf("%d",&kode);
		if (cek_kode(produk, kode)){
			fpo = fopen("dataproduk.dat","rb");
			fpt = fopen("temp.dat","wb");
			while (fread(&produk, sizeof(produk), 1, fpo)){
				s = produk.kodeProduk;
				if ( s != kode){
					//Menyalin data file yang tidak ingin dihapus
					fwrite(&produk, sizeof(produk), 1, fpt);
				}
			}
			fclose(fpo);
			fclose(fpt);
			fpo = fopen("dataproduk.dat","wb");
			fpt = fopen("temp.dat","rb");
			while(fread(&produk,sizeof(produk),1,fpt)){
				fwrite(&produk,sizeof(produk),1,fpo);
			}
			printf("\n\n\n\t\t\t\t\t\t\t\t     Data Berhasil Dihapus...\n");
			fclose(fpo);
			fclose(fpt);
		}
	else{
		fpo = fopen("dataproduk.dat","wb");
		fclose(fpo);
	}
		printf("\n\n\t\t     Hapus Data Kembali? [y/n] : ");
		scanf("%s",&jawab);
		printf("\t\t     =====================================================================================================================\n\n");
			switch(jawab){
				case 'y':
					goto hapusdata;break;
			}
		
}
//	==================================================FUNCTION CEK KODE==================================================================================
int cek_kode(data produk,int id){
	FILE *filetubes;
	int c = 0;
	
	if (empty(produk) == 1 ){
		filetubes = fopen("dataproduk.dat","rb");
		while(!feof(filetubes)){
			fread(&produk, sizeof(produk),1,filetubes);
			if( id == produk.kodeProduk){
				fclose(filetubes);
				return 1;
			}
		}
		fclose(filetubes);
		return 0;
	}
	else{
		return 0;
	}
}
//	==================================================FUNCTION EMPTY=====================================================================================
int empty(data produk){
	int c = 0;
	FILE *filetubes;
	
	filetubes = fopen("dataproduk.dat", "rb");
	while (fread(&produk, sizeof(produk), 1, filetubes))
	c = 1;
	fclose(filetubes);
	return c;
}
//	==================================================PROCEDURE HAPUS PRODUK PROMOSI=======================================================================
void hapusKodeProdukPromosi(char nama_produk[50],char jenisProduk[50],int kodeProdukPromosi,int harga){
	FILE *fpp;
	FILE *fptr;
	FILE *filetubes;
	datapromosi produkpromosi;
	char jawab;
	int s,kode;
		hapusdatapromosi:
		printf("\t\t     - Masukan Kode Produk yang ingin Dihapus: ");
		scanf("%d",&kode);
		if (cek_kode_promosi(produkpromosi, kode)){
			fpp = fopen("produkpromosi.dat","rb");
			fptr = fopen("temppromosi.dat","wb");
			while (fread(&produkpromosi, sizeof(produkpromosi), 1, fpp)){
				s = produkpromosi.kodeProdukPromosi;
				if ( s != kode){
					//Menyalin data file yang tidak ingin dihapus
					fwrite(&produkpromosi, sizeof(produkpromosi), 1, fptr);
				}
			}
			fclose(fpp);
			fclose(fptr);
			fpp = fopen("produkpromosi.dat","wb");
			fptr = fopen("temppromosi.dat","rb");
			while(fread(&produkpromosi,sizeof(produkpromosi),1,fptr)){
				fwrite(&produkpromosi,sizeof(produkpromosi),1,fpp);
			}
			printf("\n\n\n\t\t\t\t\t\t\t\t     Data Berhasil Dihapus...\n");
			fclose(fpp);
			fclose(fptr);
		}
	else{
		fpp = fopen("produkpromosi.dat","wb");
		fclose(fpp);
	}
		printf("\n\n\t\t     Hapus Data Kembali? [y/n] : ");
		scanf("%s",&jawab);
		printf("\t\t     =====================================================================================================================\n\n");
			switch(jawab){
				case 'y':
					goto hapusdatapromosi;break;
			}
}
//	==================================================FUNCTION CEK KODE PROMOSI==========================================================================
int cek_kode_promosi(datapromosi produkpromosi,int id){
	FILE *filetubes;
	int c = 0;
	
	if (empty_promosi(produkpromosi) == 1 ){
		filetubes = fopen("produkpromosi.dat","rb");
		while(!feof(filetubes)){
			fread(&produkpromosi, sizeof(produkpromosi),1,filetubes);
			if( id == produkpromosi.kodeProdukPromosi){
				fclose(filetubes);
				return 1;
			}
		}
		fclose(filetubes);
		return 0;
	}
	else{
		return 0;
	}
}
//	==================================================FUNCTION EMPTY PROMOSI=============================================================================
int empty_promosi(datapromosi produkpromosi){
	int c = 0;
	FILE *filetubes;
	
	filetubes = fopen("produkpromosi.dat", "rb");
	while (fread(&produkpromosi, sizeof(produkpromosi), 1, filetubes))
	c = 1;
	fclose(filetubes);
	return c;
}
//	==================================================PROCEDURE MEMBUAT USERNAME DAN PASSWORD MEMBER=====================================================
void fileMember(char namaMember[20],char passwordMember[20]){
	FILE *fileMember;
	akunMember member;
	tampilanDaftarMember();
	fileMember=fopen("akunMember.dat","a+b");
	gets(member.namaMember);
	printf("\n\t\t\t\t\t\t- Masukan Username: ");fflush(stdin);
	gets(member.namaMember);
	printf("\n\t\t\t\t\t\t- Masukan Password: ");fflush(stdin);
	gets(member.passwordMember);

	fwrite(&member,sizeof(member),1,fileMember);
	printf("\n\n\nt\t\t\t\t  Selamat anda telah terdaftar sebagai Member Supermarket Ofal    \n\n");
	fclose(fileMember);
}
//	==================================================FUNCTION MENU LOGIN MEMBER=========================================================================
int loginMember(char namaMember[20], char passwordMember[20]){
	FILE *fileMember;
	akunMember member;
	char usernameMember[20], passMember[20];
	system("cls");
	tampilanLoginMember();
	ulangi:
	fileMember=fopen("akunMember.dat","rb");
	gets(usernameMember);
	printf("\t\t\t\t\t\t- Masukkan Username anda: ");
	gets(usernameMember);
	printf("\t\t\t\t\t\t- Masukkan Password anda: ");
	gets(passMember);
	while(fread(&member,sizeof(member),1,fileMember)==1)
	if(strcmp(usernameMember,member.namaMember)==0&&strcmp(passMember,member.passwordMember)==0)return 2;
	
		if(strcmp(usernameMember,"lupaPW")==0&&strcmp(passwordMember,"lupaPW")==0){
			system("cls");	
		}
		else{
			system("cls");
			tampilanLoginMember();
			printf("\t\t\t\t\t   Maaf Username dan Password Tidak Ditemukan !!!\n");
			printf("\t\t\t\t\t  Silahkan Lakukan Pendaftaran Terlebih Dahulu....\n");
			printf("\t\t\t\t\t___________________________________________________\n\n");
			goto ulangi;
			system("pause");
		}
	fclose(fileMember);

}
//	==================================================PROCEDURE MEMBACA DATA MEMBER======================================================================
void dataMember(char namaMember[20], char passwordMember[20]){
	FILE*fileMember;
	akunMember member;
	fileMember=fopen("akunMember.dat", "rb");
	printf("\n\n\n");
	printf("\t\t\t\t\t    *******************************************************************************\n");
	printf("\t\t\t\t\t    *                                   AKUN MEMBER                               *\n");
	printf("\t\t\t\t\t    *******************************************************************************\n\n");
	printf("\t\t\t\t\t    ||===========================================================================||\n");
	printf("\t\t\t\t\t    ||                 Nickname:              ||            Password:            ||\n");
	printf("\t\t\t\t\t    ||===========================================================================||\n");
	while(fread(&member,sizeof(member),1,fileMember)==1){
		printf("\t\t\t\t\t    || %-21s                  || %-11s                     ||\n", member.namaMember, member.passwordMember);
	} 
	printf("\t\t\t\t\t    ===============================================================================\n");
	fclose(fileMember);
}
void sortproduk(){
	data produk;
	int a[20];
	int count = 0;
	int i,j,t,c;
	FILE *filetubes;
	FILE *fpt;
	filetubes = fopen("dataproduk.dat","rb");
	fpt = fopen("tempproduk.dat","wb");
	while (fread(&produk, sizeof(produk),1,filetubes)){
		a[count] = produk.kodeProduk;
		count++;
	}
	
	c = count;
	for (i = 0; i<count -1;i++){
		for (j = i + 1; j<count; j++){
			if (a[i]>a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	count = c;
	for (i = 0; i<count; i++){
		rewind(filetubes);
		while (fread(&produk, sizeof(produk),1,filetubes)){
			if (a[i]==produk.kodeProduk){
				fwrite(&produk, sizeof(produk),1,fpt);
			}
		}
	}
	fclose(filetubes);
  	fclose(fpt);
  		filetubes = fopen("dataproduk.dat","wb");
  		fpt = fopen("tempproduk.dat","rb");
  		while (fread(&produk,sizeof(produk),1, fpt)){
  			fwrite(&produk,sizeof(produk),1,filetubes);
		  }
			fclose(filetubes);
			fclose(fpt);
}
void sortprodukpromosi(){
	datapromosi produkpromosi;
	int a[20];
	int count = 0;
	int i,j,t,c;
	FILE *filetubes;
	FILE *ftemp;
	filetubes = fopen("produkpromosi.dat","rb");
	ftemp = fopen("tempprodukpromosi.dat","wb");
	while (fread(&produkpromosi, sizeof(produkpromosi),1,filetubes)){
		a[count] = produkpromosi.kodeProdukPromosi;
		count++;
	}
	
	c = count;
	for (i = 0; i<count -1;i++){
		for (j = i + 1; j<count; j++){
			if (a[i]>a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	count = c;
	for (i = 0; i<count; i++){
		rewind(filetubes);
		while (fread(&produkpromosi, sizeof(produkpromosi),1,filetubes)){
			if (a[i]==produkpromosi.kodeProdukPromosi){
				fwrite(&produkpromosi, sizeof(produkpromosi),1,ftemp);
			}
		}
	}
	fclose(filetubes);
  	fclose(ftemp);
  		filetubes = fopen("produkpromosi.dat","wb");
  		ftemp = fopen("tempprodukpromosi.dat","rb");
  		while (fread(&produkpromosi,sizeof(produkpromosi),1, ftemp)){
  			fwrite(&produkpromosi,sizeof(produkpromosi),1,filetubes);
		  }
			fclose(filetubes);
			fclose(ftemp);
}

