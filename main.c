#include<stdio.h>
#include<stdlib.h>
#include "headerApp.h"
#include <time.h>

//	Kelompok Tugas Besar DDP
// 	Pembuat : Lolla Mariah 211511018
//			: Naufal Salman Mulyadi 211511028
//	Kelas	: 1A
//	=================================================================================================================================================

int main(){	
	int vCustomer, menu1, vpilihan, vAdmin,jumlahUang,kembalian, jumlahBelanja, total, kodeBarang, a, i, j, nilaitotal, jumlahUnit,
		Diskon,totalDiskon,discount,potongan,hasilPotongan,compare1, compare2;
	char vbayar,vlanjut,kembali,k,userName[20], pass[20];
	
	system("color B");
	tampilan();
	system("pause");
	system("cls");
	menu_utama();
	menuutama:
	printf("\t\t\t#Pilih Menu (1-4) :  ");
	scanf("%d",&menu1);
	system("cls");
	
	if(menu1 == 1){
		panduan();
		panduan:
		printf("\n\n\t\t\t  #Kembali? [y] : ");
		scanf("%s", &vpilihan);
			switch(vpilihan){
				case 'y':
				case 'Y':
					system("cls");
					menu_utama();
					goto menuutama;break;
				default :
					system ("cls");
					panduan();
					printf("\n\n\t\t\t  Input salah!\n\n");
					goto panduan;break;
			}		
	}
	else if(menu1 == 2){	
		system ("cls");
		menu_customer();
		menucstmr:
		printf("\t\t\t\t\t#Pilih Menu [1-5] : ");
		scanf("%d",&vCustomer);
		system("cls");
			switch(vCustomer){
				case 1:	
									
					informasicustomer();
					infocustomer:
					printf("\n\n\t\t     #Kembali? [y] : ");
					scanf("%s",&kembali);
					switch (kembali){
						case 'y':
							system ("cls");
							menu_customer();	
							goto menucstmr;	break;
						default:
							system ("cls");
							informasicustomer();
							printf("\n\n\t\t     Input Salah! \n\n");
							goto infocustomer;
					}break;
					
				case 2:
					
					fileMember();
					daftar:
					printf("\t\t\t\t\t\t#Kembali? [y] : ");
					scanf("%s",&kembali);
					switch (kembali){
						case 'y':
							system("cls");
							menu_customer();
							goto menucstmr;break;
						default:
							printf("\n\t\t\t\t\t\tInput Salah! \n\n");
							goto daftar;
					}break;
					
				case 3:
					loginMember();
					system("cls");
					readprodukpromosi();
					cek:
					printf("\t\t     --> 1. Lanjutkan Pembelian \n");
					printf("\t\t     --> 2. Kembali ke menu\n");
					printf("\t\t     ===================================================================================================================== \n");
					printf("\t\t     #Pilih menu [1/2]: ");
					scanf("%d",&vpilihan);
					printf("\t\t     ===================================================================================================================== \n");
						switch(vpilihan){
							case 1:
								byrpromosi();
								bayarpromosi:
								printf("\t\t\t\t\t\t\t#Kembali? [y] : ");
								scanf("%s",&kembali);
								switch(kembali){
									case 'y':
										system("cls");
										menu_customer();
										goto menucstmr;break;
									default:
										printf("\t\t\t\t\t\t\tInput Salah! \n\n");
										goto bayarpromosi;break;
										
								}break;
							case 2:
								system ("cls");
								menu_customer();
								goto menucstmr;break;
							default:
								system ("cls");
								readprodukpromosi();
								printf("\t\t     Input Salah! \n\n");
								goto cek;break;
						}
					
				case 4:
					system ("cls");
					vdaftarproduk();
					daftarproduk:
				    printf("\t\t     --> 1. Lanjutkan Pembelian \n");
					printf("\t\t     --> 2. Kembali ke menu\n");
					printf("\t\t     ===================================================================================================================== \n");
					printf("\t\t     #Pilih menu [1/2]: ");
					scanf("%d",&vpilihan);
					printf("\t\t     ===================================================================================================================== \n");
					switch(vpilihan){
						case 1:
							vpembayaran();
							pembayaran:
							printf("\t\t     #Kembali? [y] : ");
							scanf("%s",&kembali);
							switch(kembali){
								case 'y':
									system("cls");
									menu_customer();
									goto menucstmr;break;
								default:
									printf("\t\t     Input Salah! \n\n");
									goto pembayaran;
									
							}break;
							
						case 2:
							system("cls");
							menu_customer();
							goto menucstmr;break;
						default:
							system("cls");
							vdaftarproduk();
							printf("\t\t     Input Salah! \n\n");
							goto daftarproduk;break;						
					}
					
				case 5:
					system("cls");
					menu_utama();
					goto menuutama;break;
				default:
					system("cls");
					menu_customer();
					printf("\t\t\t\t\t\tInput Salah! \n\n");
					goto menucstmr;
			}
	}
	else if(menu1 == 3){
		
		login_admin();
		login:
		ambilusername();
		ambilpassword();
		gets(userName);		
		printf("\t\t\t\t\t\tMasukkan username anda : ");
		gets(userName);
		printf("\t\t\t\t\t\tMasukkan Password      : ");
		gets(pass);
		system ("cls");
		
		compare1=strcmp(userName,username);
		compare2=strcmp(pass, password);
	    if(compare1 ==0 && compare2==0){
	    	printf("\n\n");
	    	
	        printf("\t\t\t\t\t\t\t\t         < AKSES DITERIMA >    \n");
	        printf("\t\t\t\t\t\t\t\t      ______________________   \n");;
			    
			        menu_admin();
			        menuadmin:
			        printf("\t\t\t\t\t\t#Pilih Menu [1-6]: ");
			        scanf("%d",&vAdmin);
				    system("cls");
				    	switch(vAdmin){	
				        	case 1:
					        	gantiUsernamePassword();
					        	gantiuser();
					        	gantipass();
					        	printf("\n\n\n");
					        	printf("\t\t\t\t\t\t\t<<<-- Username dan Password berhasil diubah -->>>   \n");	
					        	printf("\t\t\t\t\t\t===================================================================\n\n");
					        	kembali:
					        	printf("\t\t\t\t\t\t#Kembali? [y] : ");
								scanf("%s",&kembali);
								switch(kembali){
									case 'y':
										system("cls");
										menu_admin();
										goto menuadmin;break;
									default:
										printf("\n\t\t\t\t\t\tInput salah!\n\n\n");
										goto kembali;break;
					       		}break;
										
							case 2:
								dataMember();
								daftarmember:
								printf("\n\n");
								printf("\t\t\t\t\t    #Kembali [y] : ");
								scanf("%s",&kembali);
								switch(kembali){
									case 'y':
										system("cls");
										menu_admin();
										goto menuadmin;break;
									default:
										system("cls");
										dataMember();
										printf("\t\t\t\t\t    Input Salah! \n\n\n");
										goto daftarmember;
							
								}break;
								
							case 3:
								Read_ID_customer();
								datacustomer:
								printf("\n");
								printf("\t#Kembali? [y] : ");
								scanf("%s",&kembali);
								switch(kembali){
								 	case 'y':
								 		system("cls");
										menu_admin();
								 		goto menuadmin;break;									 
									default:
										system("cls");
										Read_ID_customer();
								 		printf("\tInput Salah! \n\n\n");
								 		goto datacustomer;break;
								}break;
								
							case 4:
								sistemDataProduk();
								sistemdtproduk:
								printf("\t\t\t\t\t\t#Pilih Menu [1-3]: ");
								scanf("%d",&vpilihan);
								switch (vpilihan){
									case 1:
									system ("cls");
									vdaftarproduk();
									printf("\t\t     *Masukkan kode produk dan nama produk yang belum tersedia.....\n\n");
									restok();
									printf("\t\t     #Kembali? [y] : ");
									scanf("%s",&kembali);
									switch(kembali){
									 	case 'y':
									 		system("cls");
											sistemDataProduk();
									 		goto sistemdtproduk;break;
									}break;
									case 2:
										system ("cls");
										vdaftarproduk();
										hapusKodeProduk();
										printf("\t\t     #Kembali? [y] : ");
										scanf("%s",&kembali);
										switch(kembali){
										 	case 'y':
										 		system("cls");
												sistemDataProduk();
									 			goto sistemdtproduk;break;
										}break;
									case 3:
										system("cls");
										menu_admin();
										goto menuadmin;break;
									default :
										system("cls");
										sistemDataProduk();
										printf("\t\t\t\t\t\tInput Salah! \n\n\n");
								 		goto sistemdtproduk;break;
								}break;	

							case 5:
								sistemDataProdukPromosi();
								dtpromosi:
								printf("\t\t\t\t\t\t#Pilih Menu [1-2]: ");
								scanf("%d",&vpilihan);
								switch (vpilihan){
									case 1:
										system("cls");
										readprodukpromosi();
										promosi();
										printf("\t\t     Kembali? [y] : ");
										scanf("%s",&kembali);
										switch(kembali){
										 	case 'y':
										 		system("cls");
												sistemDataProdukPromosi();
									 			goto dtpromosi;break;
											}
									case 2:
										system("cls");
										readprodukpromosi();
										hapusKodeProdukPromosi();
										printf("\n\n\t\t     Kembali? [y] : ");
										scanf("%s",&kembali);
										switch(kembali){
										 	case 'y':
										 		system("cls");
												sistemDataProdukPromosi();
									 			goto dtpromosi;break;
										}break;
									case 3:
										system("cls");
										menu_admin();
										goto menuadmin;break;
									default :
										system("cls");
										sistemDataProdukPromosi();
										printf("\t\t\t\t\t\tInput Salah! \n\n\n");
								 		goto dtpromosi;break;
								}break;
								
							case 6:
								system("cls");
								menu_utama();
								goto menuutama;break;
								
							default:
								system("cls");
								menu_admin();
								printf("\t\t\t\t\t\tInput Salah! \n\n\n");
								goto menuadmin;break;
						}
												    
	}else{
		login_admin();
		printf("\t\t\t\t\t\t   Username atau Password salah!\n");
		printf("\t\t\t\t\t\t         < AKSES DITOLAK! >     \n");
		goto login; 
		}
	}  
	else if(menu1 == 4){
			exit;
	}
	else{
		system("cls");
		menu_utama();
		printf("\t\t\t\t\t\t    Mohon maaf input salah! Silahkan input menu yang benar. ^_^ \n\n\n");
		goto menuutama;
	}
return 0;
}


