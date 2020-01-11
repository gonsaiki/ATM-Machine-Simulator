#include<iostream>
#include<windows.h>
#include<fstream>
using namespace std;

int saldo=500000;
int *saldoPtr = &saldo;
int pinn = 123456;
int *pinnPtr = &pinn;


struct data_atm{
    int no_rek;
    string atas_nama;
    int saldoo;
    int *saldooPtr = &saldoo;
}datatm;


void gotoxy(int x, int y){
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void header(){
for (int i = 1; i<25; i++){
    gotoxy(15,1+i);cout << "| |" << endl;
}
for (int i =1; i<=118; i++){
    cout << "=";
}
for (int i = 1; i<25; i++){
    gotoxy(100,1+i);cout << "| |" << endl;
}
}

int main(){

pendahuluan :


pilih_bahasa :
int pilih_bahasa;
cout << endl;
   for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "PEMILIHAN BAHASA";
gotoxy(49,4);cout << "LANGUAGE REFFERENCE";
gotoxy(43,5);cout << "================================";
gotoxy(7,9);cout  << "[1] =>";
//gotoxy(20,9);cout << "Rp. 250.000,00";
gotoxy(7,13);cout << "[2] =>";
//gotoxy(20,13);cout<< "Rp. 500.000,00";
gotoxy(7,17);cout << "[3] =>";
//gotoxy(20,17);cout <<"Rp. 1.000.000,00";
gotoxy(7,21);cout << "[4] =>";
//gotoxy(20,21);cout<< "Rp. 1.500.000,00";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(82,9);cout << "Bahasa Indonesia";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(89,13);cout << "English";
gotoxy(105,17);cout<<"<= [7]";
//gotoxy(92,17);cout << "Keluar";
gotoxy(105,21);cout<<"<= [8]";
//gotoxy(89,21);cout << "Cek Saldo";
gotoxy(60,24);cout <<"\t Masukan pilihan anda :  ";cin>>pilih_bahasa;
system("cls");
    if (pilih_bahasa == 5){
        goto login_indo;
    }else {
        goto login_english;
    }


{
login_english :
int aa = 1;
while (aa < 4){
            int pin;
            cout << endl;
            cout << "  Enter your pin number : ";cin>>pin;
            //kondisi jika pin salah, meminta user untuk input lagi
            if (pin != *pinnPtr){
                cout << "  Wrong pin number.." << endl;
            }
            //kondisi jika pin benar,keluar dari looping
            if (pin == *pinnPtr){
                system("cls");
                goto menu_english;
            }
            aa++;//increment sebanyak 3x

            //memblokir jika sudah sampai 3x
            if (aa == 4){
                cout << endl;
                cout << "  |You have entered incorect pin 3 times..|" << endl;
                cout << "  |Your atm card has been blocked..|" << endl << endl;
                system("pause");
                system("cls");
                goto exit_english;
            }
        }
}

{
login_indo :
int i = 1;
while (i < 4){
            int pin;
            cout << endl;
            cout << "  Masukan pin anda : ";cin>>pin;
            //kondisi jika pin salah, meminta user untuk input lagi
            if (pin != *pinnPtr){
                cout << "  Pin anda salah.." << endl;
            }
            //kondisi jika pin benar,keluar dari looping
            if (pin == *pinnPtr){
                system("cls");
                goto menu_indonesia;
            }
            i++;//increment sebanyak 3x

            //memblokir jika sudah sampai 3x
            if (i == 4){
                cout << endl;
                cout << "  | Anda telah salah memasukan pin sebanyak 3x |" << endl;
                cout << "  | Kartu anda kami blokir |" << endl << endl;
                system("pause");
                system("cls");
                goto exit_indonesia;
            }
        }
}


{
menu_indonesia :
int pilih_transaksi;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "BANK ADITYA FAJRI";
gotoxy(49,4);cout << "MENU PENARIKAN CEPAT";
gotoxy(43,5);cout << "================================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(20,9);cout << "Rp. 250.000,00";
gotoxy(7,13);cout << "[2] =>";
gotoxy(20,13);cout<< "Rp. 500.000,00";
gotoxy(7,17);cout << "[3] =>";
gotoxy(20,17);cout <<"Rp. 1.000.000,00";
gotoxy(7,21);cout << "[4] =>";
gotoxy(20,21);cout<< "Rp. 1.500.000,00";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(84,9);cout << "Penarikan Lain";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(89,13);cout << "Ganti pin";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(92,17);cout << "Keluar";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(89,21);cout << "Cek Saldo";
gotoxy(60,24);cout <<"\t Masukan pilihan anda :  ";cin>>pilih_transaksi;
system("cls");
switch (pilih_transaksi){
case 1:

char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "DETAIL TRANSAKSI ANDA";
gotoxy(49,4);cout << "PENARIKAN Rp. 250.000,00";
gotoxy(47,5);cout << "============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(60,12);cout<< "(!)";
gotoxy(35,14);cout<< "Anda akan melakukan transaksi sebesar Rp. 250.0000";
gotoxy(35,15);cout<< "Silahkan konfirmasi terlebih dahulu ";
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Tekan 'y' untuk konfir, 'n' untuk kembali :  ";cin>>konfir;
system("cls");
if (konfir == 'n' || konfir == 'N'){
    goto menu_indonesia;
}else if (konfir == 'y' || konfir == 'Y'){
if (saldo >= 250000){

char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "DETAIL TRANSAKSI ANDA";
gotoxy(49,4);cout << "PENARIKAN Rp. 250.000,00";
gotoxy(47,5);cout << "============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaksi Sukses";
gotoxy(35,15);cout<< "Jumlah Transaksi : Rp 250.000,00";
gotoxy(35,16);cout<< "Sisa saldo anda :  " << *saldoPtr-250000;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Apakah anda ingin transaksi lagi (y/n) :  ";cin>>konfir;
system("cls");
saldo = *saldoPtr-250000;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_indonesia;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_indonesia;
}else {
    goto exit_indonesia;
}
}else if (saldo < 250000){
char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "DETAIL TRANSAKSI ANDA";
gotoxy(49,4);cout << "PENARIKAN Rp. 250.000,00";
gotoxy(47,5);cout << "============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaksi Gagal";
gotoxy(35,15);cout<< "Jumlah Transaksi : Rp 250.000,00";
gotoxy(35,16);cout<< "Sisa saldo anda :  " << *saldoPtr;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Apakah anda ingin transaksi lagi (y/n) :  ";cin>>konfir;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_indonesia;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_indonesia;
}else {
    goto exit_indonesia;
}
}
}
    break;


case 2:

char konfir2;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "DETAIL TRANSAKSI ANDA";
gotoxy(49,4);cout << "PENARIKAN Rp. 500.000,00";
gotoxy(47,5);cout << "============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(60,12);cout<< "(!)";
gotoxy(35,14);cout<< "Anda akan melakukan transaksi sebesar Rp. 500.0000";
gotoxy(35,15);cout<< "Silahkan konfirmasi terlebih dahulu ";
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Tekan 'y' untuk konfir, 'n' untuk kembali :  ";cin>>konfir2;
system("cls");
if (konfir2 == 'n' || konfir2 == 'N'){
    goto menu_indonesia;
}else if (konfir2 == 'y' || konfir2 == 'Y'){
if (saldo >= 500000){

char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "DETAIL TRANSAKSI ANDA";
gotoxy(49,4);cout << "PENARIKAN Rp. 500.000,00";
gotoxy(47,5);cout << "============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaksi Sukses";
gotoxy(35,15);cout<< "Jumlah Transaksi : Rp 500.000,00";
gotoxy(35,16);cout<< "Sisa saldo anda :  " << *saldoPtr-500000;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Apakah anda ingin transaksi lagi (y/n) :  ";cin>>konfir;
system("cls");
saldo = *saldoPtr-500000;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_indonesia;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_indonesia;
}else {
    goto exit_indonesia;
}
}else if (saldo < 500000){
char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "DETAIL TRANSAKSI ANDA";
gotoxy(49,4);cout << "PENARIKAN Rp. 500.000,00";
gotoxy(47,5);cout << "============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaksi Gagal";
gotoxy(35,15);cout<< "Jumlah Transaksi : Rp 500.000,00";
gotoxy(35,16);cout<< "Sisa saldo anda :  " << *saldoPtr;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Apakah anda ingin transaksi lagi (y/n) :  ";cin>>konfir;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_indonesia;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_indonesia;
}else {
    goto exit_indonesia;
}
}
}
    break;
case 3:
char konfir3;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "DETAIL TRANSAKSI ANDA";
gotoxy(49,4);cout << "PENARIKAN Rp. 1.000.000,00";
gotoxy(47,5);cout << "============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(60,12);cout<< "(!)";
gotoxy(35,14);cout<< "Anda akan melakukan transaksi sebesar Rp. 1.000.0000";
gotoxy(35,15);cout<< "Silahkan konfirmasi terlebih dahulu ";
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Tekan 'y' untuk konfir, 'n' untuk kembali :  ";cin>>konfir3;
system("cls");
if (konfir3 == 'n' || konfir3 == 'N'){
    goto menu_indonesia;
}else if (konfir3 == 'y' || konfir3 == 'Y'){
if (saldo >= 1000000){

char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "DETAIL TRANSAKSI ANDA";
gotoxy(49,4);cout << "PENARIKAN Rp. 1.000.000,00";
gotoxy(47,5);cout << "============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaksi Sukses";
gotoxy(35,15);cout<< "Jumlah Transaksi : Rp 1.000.000,00";
gotoxy(35,16);cout<< "Sisa saldo anda :  " << *saldoPtr-1000000;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Apakah anda ingin transaksi lagi (y/n) :  ";cin>>konfir;
system("cls");
saldo = *saldoPtr-1000000;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_indonesia;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_indonesia;
}else {
    goto exit_indonesia;
}
}else if (saldo < 1000000){
char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "DETAIL TRANSAKSI ANDA";
gotoxy(49,4);cout << "PENARIKAN Rp. 1.000.000,00";
gotoxy(47,5);cout << "============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaksi Gagal";
gotoxy(35,15);cout<< "Jumlah Transaksi : Rp 1.000.000,00";
gotoxy(35,16);cout<< "Sisa saldo anda :  " << *saldoPtr;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Apakah anda ingin transaksi lagi (y/n) :  ";cin>>konfir;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_indonesia;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_indonesia;
}else {
    goto exit_indonesia;
}
}
}
    break;

case 4:
char konfir4;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "DETAIL TRANSAKSI ANDA";
gotoxy(49,4);cout << "PENARIKAN Rp. 1.500.000,00";
gotoxy(47,5);cout << "============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(60,12);cout<< "(!)";
gotoxy(35,14);cout<< "Anda akan melakukan transaksi sebesar Rp. 1.500.0000";
gotoxy(35,15);cout<< "Silahkan konfirmasi terlebih dahulu ";
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Tekan 'y' untuk konfir, 'n' untuk kembali :  ";cin>>konfir4;
system("cls");
if (konfir4 == 'n' || konfir4 == 'N'){
    goto menu_indonesia;
}else if (konfir4 == 'y' || konfir4 == 'Y'){
if (saldo >= 1500000){

char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "DETAIL TRANSAKSI ANDA";
gotoxy(49,4);cout << "PENARIKAN Rp. 1.500.000,00";
gotoxy(47,5);cout << "============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaksi Sukses";
gotoxy(35,15);cout<< "Jumlah Transaksi : Rp 1.500.000,00";
gotoxy(35,16);cout<< "Sisa saldo anda :  " << *saldoPtr-1500000;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Apakah anda ingin transaksi lagi (y/n) :  ";cin>>konfir;
system("cls");
saldo = *saldoPtr-1500000;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_indonesia;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_indonesia;
}else {
    goto exit_indonesia;
}
}else if (saldo < 1500000){
char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "DETAIL TRANSAKSI ANDA";
gotoxy(49,4);cout << "PENARIKAN Rp. 1.500.000,00";
gotoxy(47,5);cout << "============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaksi Gagal";
gotoxy(35,15);cout<< "Jumlah Transaksi : Rp 1.500.000,00";
gotoxy(35,16);cout<< "Sisa saldo anda :  " << *saldoPtr;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Apakah anda ingin transaksi lagi (y/n) :  ";cin>>konfir;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_indonesia;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_indonesia;
}else {
    goto exit_indonesia;
}
}
}
    break;
case 5:
ditya :
char konfirr;
int jumlah_tarik;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "MENU LAINNYA";
gotoxy(49,4);cout << "PENARIKA LAINNYA";
gotoxy(47,5);cout << "====================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<< "Silahkan masukan nominal penarikan anda.";
gotoxy(35,15);cout<< "Nominal harus kelipatan 50.000,00 ";
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(54,24);cout <<"Masukan jumlah penarikan anda :  ";cin>>jumlah_tarik;
system("cls");
if (jumlah_tarik % 50000 == 0 ){

cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "MENU LAINNYA";
gotoxy(49,4);cout << "PENARIKA LAINNYA";
gotoxy(47,5);cout << "====================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<< "Konfirmasi";
gotoxy(35,15);cout<< "Jumlah penarikan anda adalah sebesar " << jumlah_tarik;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
}else {

cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "MENU LAINNYA";
gotoxy(49,4);cout << "PENARIKA LAINNYA";
gotoxy(47,5);cout << "====================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<< "Gagal";
gotoxy(35,15);cout<< "Jumlah Penarikan harus kelipatan 50.000";
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(52,24);system("pause");
system("cls");
goto ditya;
}
gotoxy(52,24);cout <<"Tekan 'y' untuk konfir, 'n' untuk kembali : ";cin>>konfirr;
system("cls");
if (konfirr == 'n' || konfirr == 'N'){
    goto menu_indonesia;
}else if (konfirr == 'y' || konfirr == 'Y'){
if (saldo >= jumlah_tarik){
char konfir;

cout << endl;
cout <<"\t | ==== SUKSES ===============================|"<<endl;//menu utama
cout <<"\t | Penarikan uang sebesar "<< jumlah_tarik << " sukses|"<<endl;
cout <<"\t | Sisa saldo anda : "    <<*saldoPtr-jumlah_tarik <<" |"<<endl;
saldo = *saldoPtr-jumlah_tarik;
cout <<"\t | Transaksi lagi? (y/n) ";cin>>konfir;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_indonesia;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_indonesia;
}else {
    goto exit_indonesia;
}
}else if (saldo < jumlah_tarik){
int konfir99;
cout <<"\t | ==== GAGAL ================================|"<<endl;//menu utama
cout <<"\t | Penarikan uang sebesar "<< jumlah_tarik << " gagal|"<<endl;
cout <<"\t | Sisa saldo anda : "    <<*saldoPtr<<" |"<<endl;
goto exit_indonesia;
}
}
    break;
case 6:
int pinbaru;
cout << endl;
cout <<"\t | ==== GANTI PIN  =============================|"<<endl;//menu utama
cout <<"\t | Masukan pin lama & baru anda                 |"<<endl;
{
int ab = 1;
while (ab < 4){
            int pin;
            cout << endl;
            cout << "\t | Masukan pin lama anda : ";cin>>pin;
            //kondisi jika pin salah, meminta user untuk input lagi
            if (pin != *pinnPtr){
                cout << "\t | Pin anda salah.." << endl;
            }
            //kondisi jika pin benar,keluar dari looping
            if (pin == *pinnPtr){
                int pinbaru=0;
                woii :
                cout <<"\t | Masukan pin baru anda : ";cin>>pinbaru;
                if (pinbaru > 99999 && pinbaru <= 999999){
                    if (pinbaru == *pinnPtr){
                        cout << endl;
                        cout << "\t | Pin baru tidak boleh sama dengan yang lama..";
                        cout << endl;
                        goto woii;
                    }else {
                        *pinnPtr = pinbaru;
                        cout <<"\t | Sukses,tekan apa saja untuk login lagi .. " << endl << endl << endl;
                        system("pause");
                        system("cls");
                        goto login_indo;
                    }
                }else {
                    cout << "\t | Pin harus 6 digit.." << endl;
                    cout << endl;
                    goto woii;
                }
            }
            ab++;//increment sebanyak 3x

            //memblokir jika sudah sampai 3x
            if (ab == 4){
                cout << endl;
                cout << "\t | Anda telah salah memasukan pin sebanyak 3x... |" << endl;
                cout << "\t | Kartu atm anda kami blokir.. |" << endl << endl;
                system("pause");
                system("cls");
                goto exit_indonesia;
            }
        }

}
    break;
case 7:
    goto exit_indonesia;
    break;
case 8:
    char lagigak;
    cout << endl;
    cout << "\t | ======= INFORMASI SALDO ========= |" << endl;
    cout << "\t | Sisa saldo anda adalah : " << *saldoPtr << endl;
    cout << "\t | Apakah anda ingin transaksi lagi ? (y/n) : ";cin>>lagigak;
    system("cls");
    if (lagigak == 'Y' || lagigak == 'y'){
        goto menu_indonesia;
    }else if (lagigak == 'N' || lagigak == 'n'){
        goto exit_indonesia;
    }
    break;
default:
    system("cls");
    goto menu_indonesia;
    break;
}
}

{
menu_english :
int pilih_transaksi;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "ADITYA FAJRI BANK";
gotoxy(48,4);cout << "QUICK WITHDRAWAL MENU";
gotoxy(43,5);cout << "================================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(20,9);cout << "250.000,00 IDR";
gotoxy(7,13);cout << "[2] =>";
gotoxy(20,13);cout<< "500.000,00 IDR";
gotoxy(7,17);cout << "[3] =>";
gotoxy(20,17);cout <<"1.000.000,00 IDR";
gotoxy(7,21);cout << "[4] =>";
gotoxy(20,21);cout<< "1.500.000,00 IDR";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(84,9);cout << "Another amount";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(89,13);cout << "Change pin";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(92,17);cout << "Log out";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(83,21);cout << "Current Ballance";
gotoxy(60,24);cout <<"\t Enter your choice :  ";cin>>pilih_transaksi;
system("cls");
switch (pilih_transaksi){
case 1:

char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "YOUR TRANSACTION DETAIL";
gotoxy(49,4);cout << "250.000,00 IDR WITHDRAWAL";
gotoxy(46,5);cout << "===============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(60,12);cout<< "(!)";
gotoxy(35,14);cout<< "Your withdrawal amount was 250.000,00 IDR";
gotoxy(35,15);cout<< "Proceed?";
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Put 'y' to proceed, 'n' for cancel :  ";cin>>konfir;
system("cls");
if (konfir == 'n' || konfir == 'N'){
    goto menu_english;
}else if (konfir == 'y' || konfir == 'Y'){
if (saldo >= 250000){

char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "YOUR TRANSACTION DETAIL";
gotoxy(49,4);cout << "250.000,00 IDR WITHDRAWAL";
gotoxy(46,5);cout << "===============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaction success";
gotoxy(35,15);cout<< "Amount : Rp 250.000,00";
gotoxy(35,16);cout<< "Your current ballance :  " << *saldoPtr-250000;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Another transaction? (y/n) :  ";cin>>konfir;
system("cls");
saldo = *saldoPtr-250000;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_english;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_english;
}else {
    goto exit_english;
}
}else if (saldo < 250000){
char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "YOUR TRANSACTION DETAIL";
gotoxy(49,4);cout << "250.000,00 IDR WITHDRAWAL";
gotoxy(46,5);cout << "===============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaction failed";
gotoxy(35,15);cout<< "Amount : Rp 250.000,00";
gotoxy(35,16);cout<< "Your current ballance :  " << *saldoPtr;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Another transaction? (y/n) :  ";cin>>konfir;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_english;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_english;
}else {
    goto exit_english;
}
}
}
    break;


case 2:
char konfir2;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "YOUR TRANSACTION DETAIL";
gotoxy(49,4);cout << "500.000,00 IDR WITHDRAWAL";
gotoxy(46,5);cout << "===============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(60,12);cout<< "(!)";
gotoxy(35,14);cout<< "Your withdrawal amount was 500.000,00 IDR";
gotoxy(35,15);cout<< "Proceed?";
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Put 'y' to proceed, 'n' for cancel :  ";cin>>konfir2;
system("cls");
if (konfir2 == 'n' || konfir2 == 'N'){
    goto menu_english;
}else if (konfir2 == 'y' || konfir2 == 'Y'){
if (saldo >= 500000){

char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "YOUR TRANSACTION DETAIL";
gotoxy(49,4);cout << "500.000,00 IDR WITHDRAWAL";
gotoxy(46,5);cout << "===============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaction success";
gotoxy(35,15);cout<< "Amount : Rp 500.000,00";
gotoxy(35,16);cout<< "Your current ballance :  " << *saldoPtr-500000;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Another transaction? (y/n) :  ";cin>>konfir;
system("cls");
saldo = *saldoPtr-500000;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_english;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_english;
}else {
    goto exit_english;
}
}else if (saldo < 500000){
char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "YOUR TRANSACTION DETAIL";
gotoxy(49,4);cout << "500.000,00 IDR WITHDRAWAL";
gotoxy(46,5);cout << "===============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaction failed";
gotoxy(35,15);cout<< "Amount : Rp 500.000,00";
gotoxy(35,16);cout<< "Your current ballance :  " << *saldoPtr;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Another transaction? (y/n) :  ";cin>>konfir;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_english;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_english;
}else {
    goto exit_english;
}
}
}
    break;

case 3:
char konfir3;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "YOUR TRANSACTION DETAIL";
gotoxy(49,4);cout << "1.00.000,00 IDR WITHDRAWAL";
gotoxy(46,5);cout << "===============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(60,12);cout<< "(!)";
gotoxy(35,14);cout<< "Your withdrawal amount was 1.000.000,00 IDR";
gotoxy(35,15);cout<< "Proceed?";
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Put 'y' to proceed, 'n' for cancel :  ";cin>>konfir3;
system("cls");
if (konfir3 == 'n' || konfir3 == 'N'){
    goto menu_english;
}else if (konfir3 == 'y' || konfir3 == 'Y'){
if (saldo >= 1000000){

char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "YOUR TRANSACTION DETAIL";
gotoxy(49,4);cout << "1.000.000,00 IDR WITHDRAWAL";
gotoxy(46,5);cout << "===============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaction success";
gotoxy(35,15);cout<< "Amount : Rp 1.000.000,00";
gotoxy(35,16);cout<< "Your current ballance :  " << *saldoPtr-1000000;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Another transaction? (y/n) :  ";cin>>konfir;
system("cls");
saldo = *saldoPtr-1000000;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_english;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_english;
}else {
    goto exit_english;
}
}else if (saldo < 1000000){
char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "YOUR TRANSACTION DETAIL";
gotoxy(49,4);cout << "1.000.000,00 IDR WITHDRAWAL";
gotoxy(46,5);cout << "===============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaction failed";
gotoxy(35,15);cout<< "Amount : Rp 1.000.000,00";
gotoxy(35,16);cout<< "Your current ballance :  " << *saldoPtr;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Another transaction? (y/n) :  ";cin>>konfir;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_english;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_english;
}else {
    goto exit_english;
}
}
}
    break;

case 4:
char konfir4;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "YOUR TRANSACTION DETAIL";
gotoxy(49,4);cout << "1.500.000,00 IDR WITHDRAWAL";
gotoxy(46,5);cout << "===============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(60,12);cout<< "(!)";
gotoxy(35,14);cout<< "Your withdrawal amount was 1.500.000,00 IDR";
gotoxy(35,15);cout<< "Proceed?";
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Put 'y' to proceed, 'n' for cancel :  ";cin>>konfir4;
system("cls");
if (konfir4 == 'n' || konfir4 == 'N'){
    goto menu_english;
}else if (konfir4 == 'y' || konfir4 == 'Y'){
if (saldo >= 1500000){

char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "YOUR TRANSACTION DETAIL";
gotoxy(49,4);cout << "1.500.000,00 IDR WITHDRAWAL";
gotoxy(46,5);cout << "===============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaction success";
gotoxy(35,15);cout<< "Amount : Rp 1.500.000,00";
gotoxy(35,16);cout<< "Your current ballance :  " << *saldoPtr-1500000;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Another transaction? (y/n) :  ";cin>>konfir;
system("cls");
saldo = *saldoPtr-1500000;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_english;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_english;
}else {
    goto exit_english;
}
}else if (saldo < 1500000){
char konfir;
cout << endl;
for (int i =1; i<=118; i++){
    cout << "=";
}
header();
gotoxy(50,3);cout << "YOUR TRANSACTION DETAIL";
gotoxy(49,4);cout << "1.500.000,00 IDR WITHDRAWAL";
gotoxy(46,5);cout << "===============================";
gotoxy(7,9);cout  << "[1] =>";
gotoxy(7,13);cout << "[2] =>";
gotoxy(35,12);cout<< "(!)";
gotoxy(35,14);cout<<"Transaction failed";
gotoxy(35,15);cout<< "Amount : Rp 1.500.000,00";
gotoxy(35,16);cout<< "Your current ballance :  " << *saldoPtr;
gotoxy(7,17);cout << "[3] =>";
gotoxy(7,21);cout << "[4] =>";
gotoxy(105,9);cout<< "<= [5]";
gotoxy(105,13);cout<<"<= [6]";
gotoxy(105,17);cout<<"<= [7]";
gotoxy(105,21);cout<<"<= [8]";
gotoxy(40,24);cout <<"\t Another transaction? (y/n) :  ";cin>>konfir;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_english;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_english;
}else {
    goto exit_english;
}
}
}
    break;
case 5:
char konfirr;
int jumlah_tarik;
cout << endl;
cout <<"\t | ==== ANOTHER AMOUNT =======================|"<<endl;//menu utama
ditya2 :
cout <<"\t | Enter your withdrawal amount (multiple 50.000) :  ";cin>>jumlah_tarik;
if (jumlah_tarik % 50000 == 0 ){
    cout << endl;
    cout <<"\t | Your withdrawal amount was : " << jumlah_tarik << endl;
}else {
    cout <<"\t | The multiple must be 50.000 " << endl;
    goto ditya2;
}
cout <<"\t | put 'y' to confirm, 'n' to cancel : ";cin>>konfirr;
system("cls");
if (konfirr == 'n' || konfirr == 'N'){
    goto menu_english;
}else if (konfirr == 'y' || konfirr == 'Y'){
if (saldo >= jumlah_tarik){
char konfir;

cout << endl;
cout <<"\t | ==== SUCCESS ===============================|"<<endl;//menu utama
cout <<"\t | Your withdrawal of "<< jumlah_tarik << " was successfull! |"<<endl;
cout <<"\t | Your current ballance : "    <<*saldoPtr-jumlah_tarik <<" |"<<endl;
saldo = *saldoPtr-jumlah_tarik;
cout <<"\t | Another transaction? (y/n) ";cin>>konfir;
system("cls");
if (konfir == 'y' || konfir == 'Y'){
    goto menu_english;
}else if (konfir == 'n' || konfir == 'N'){
    goto exit_english;
}else {
    goto exit_english;
}
}else if (saldo < jumlah_tarik){
int konfir99;
cout <<"\t | ==== FAILED ===============================|"<<endl;//menu utama
cout <<"\t | Your withdrawal of "<< jumlah_tarik << " was failed! |"<<endl;
cout <<"\t | Your current ballance : "    <<*saldoPtr<<" |"<<endl;
goto exit_english;
}
}
    break;
case 6:
cout << endl;
cout <<"\t | ==== CHANGE PIN =============================|"<<endl;//menu utama
cout <<"\t | Please enter your old & new pin number       |"<<endl;
{
int ab = 1;
while (ab < 4){
            int pin;
            cout << endl;
            cout << "\t | Enter your old pin number : ";cin>>pin;
            //kondisi jika pin salah, meminta user untuk input lagi
            if (pin != *pinnPtr){
                cout << "\t | Wrong pin number.." << endl;
            }
            //kondisi jika pin benar,keluar dari looping
            if (pin == *pinnPtr){
                int pinbaru=0;
                jonii :
                cout <<"\t | Enter your new pin number : ";cin>>pinbaru;
                if (pinbaru > 99999 && pinbaru <= 999999){
                    if (pinbaru == *pinnPtr){
                        cout << endl;
                        cout << "\t | New pin number cannot same as the old pin..";
                        cout << endl;
                        goto jonii;
                    }else {
                        *pinnPtr = pinbaru;
                        cout <<"\t | Success,press any key to login again .. " << endl << endl << endl;
                        system("pause");
                        system("cls");
                        goto login_english;
                    }
                }else {
                    cout << "\t | Pin must be 6 digit.." << endl;
                    cout << endl;
                    goto jonii;
                }
            }
            ab++;//increment sebanyak 3x

            //memblokir jika sudah sampai 3x
            if (ab == 4){
                cout << endl;
                cout << "\t | You have entered wrong pin number 3 times.. |" << endl;
                cout << "\t | Your atm card has been blocked |" << endl << endl;
                system("pause");
                system("cls");
                goto exit_english;
            }
        }

}
    break;
case 7:
    goto exit_english;
    break;
case 8:
    char lagigak;
    cout << endl;
    cout << "\t | ======= CURRENT BALLANCE ========= |" << endl;
    cout << "\t | Your ballance : " << *saldoPtr << endl;
    cout << "\t | Do you want to proceed another transaction ? (y/n) : ";cin>>lagigak;
    system("cls");
    if (lagigak == 'Y' || lagigak == 'y'){
        goto menu_english;
    }else if (lagigak == 'N' || lagigak == 'n'){
        goto exit_english;
    }
    break;
default:
    system("cls");
    goto menu_english;
    break;
}
}


{
exit_indonesia :
while(true){
    cout << endl;
    cout <<"\t | ==== KELUAR =========================|"<<endl;//menu utama
    cout <<"\t | Silahkan cabut kartu anda...         |"<<endl;
    break;
}
}

{
  goto realexit;
}


{
exit_english :
while(true){
    cout << endl;
    cout <<"\t | ==== LOGOUT =========================|"<<endl;//menu utama
    cout <<"\t | Release your card please...          |"<<endl;
    break;
}
}

realexit :
return 0;
}
