#ifndef headerApp_H
#define headerApp_H


typedef struct pengguna{
	char *nama_produk;
	char *jenis;
	int harga,subtotal;
}users;

typedef struct data_produk{
	char namaProduk[50];
	char jenis[50];
	int kodeProduk,harga;
}data;

typedef struct dataPromosi{
	char nama_produk[50];
	char jenisProduk[50];
	int kodeProdukPromosi;
	int harga;
}datapromosi;

typedef	struct dataUser{
	char nama[30];
	char alamat[44];
	char email[37];
}data_user;

typedef struct akun_member{
	char namaMember[20];
	char passwordMember[20];
}akunMember;

int counter;
char username[10], password[10],nama[100],password[10],add[100],passwd[10],nickname[1000];

void menu_utama(); //untuk modul menu utama
void menu_customer(); //umtuk modul menu customer
void menu_admin(); //untuk modul menu admin
void sistem_admin(); // untuk modul menu sistem admin
void panduan(); //untuk modul pengambilan get txt panduan
void vdaftarproduk(); // modul untuk daftar produk
void vpembayaran(); // untuk pembayaran
void ID_customer(); //untuk memasukan customer 
void Read_ID_customer(); //untuk melihat data cutomer
void setwaktu(); //menambahkan fitur waktu
void restok(); 
void ceknickname(); //untuk mengecek data member
void foldermember(); //untuk melihat rekap member
void vdaftarmember(); //untuk modul pendaftaran member
void informasicustomer(); //untuk modul gets txt info customer
void daftar_member(); //untuk modul read data member
void ambilusername(); //meng get data user dari file txt untuk login
void ambilpassword(); //meng get data password dari file txt untuk login
void gantiuser(); //update username
void gantipass(); //update password
void promosi(); //modul data promosi
void readprodukpromosi(); // modul untuk me read produk promosi
void byrpromosi(); //untuk pemabayaran modul promosi
void sortproduk(); //mengurutkan produk berdasarkan kode paling kecil
void sortprodukpromosi(); //mengurutkan produk promosi berdasarkan kode paling kecil
int hitungsubtotal(); //function untuk hitung subtotal
int hitungkembalian(); //function untuk hitung kembalian
int tot_diskon(); //function untuk total diskon
int potonganharga(); //function untuk diskon
#endif


