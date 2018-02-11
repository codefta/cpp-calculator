#include <iostream>
#include <kalku.h>
#include <fstream>
using namespace std;
/* Oleh Kelompok 4 :
                    + 17523233 - Moch. Fathi Siddiqi
                    + 17523234 - A. Zakki Fikril Mauludi
                    + 17523229 - Harry Akbar A.
                    + 17523230 - Wahyu Firnanda
                    + 17523236 - Muhammad Fahreza A.S.M
*/
/*              LOGIN MENGGUNAKAN USERNAME : pemilik DAN PASSWORD : 123
*/
// Fungsi dan Prosedur ada di Header File yang bernama kalku.h
ofstream Keluar;
ifstream Masuk;
typedef struct
{
    string nama;
    int nilai;
} judul;
typedef judul murid[101];
murid les;

int no=0;
int Akar(int a)
{
    if (a==1){
        return 1;
    }
    else{
        a-Akar(a/2);
        no++;
    }
}

int main()
{

    string user;
    string pswd;
    char yes;
    int angka;
    int n, i;
    // Menu Login
    login:
        kalkul();
        cout << "                                               SELAMAT DATANG DI KALKU" << endl;
        cout << "                                        Aplikasi Kalkulator Aljabar Sederhana" <<endl << endl;
        cout << "                                                    Silahkan Login!" <<endl << endl;
        cout << "                                               User name : ";
        cin >> user;
        cout << "                                               Password  : ";
        cin >> pswd;
        if (user == "pemilik"){
            if (pswd == "123"){
                system("cls");
                menuutama:
                    kalkul();
                    cout << "                                         Silahkan Pilih Menu dibawah ini!"     << endl << endl;
                    cout << "                                         1. Menghitung KALIBATAKU"       << endl;
                    cout << "                                         2. Menghitung Barisan Bilangan" << endl;
                    cout << "                                         3. Menghitung Eksponensial" << endl;
                    cout << "                                         4. Menghitung Nilai Rata-Rata Pelajaran atau Ulangan" << endl << endl;
                    cout << "                                                   Menu :  ";
                    cin >> angka;
                    switch(angka){
                    case 1:
                        system ("cls");
                        goto kalibataku;
                        break;
                    case 2:
                        system ("cls");
                        goto barisanbilangan;
                        break;
                    case 3:
                        system ("cls");
                        goto eksponen;
                    case 4:
                        system ("cls");
                        goto ratarata;
                        break;
                    }
                }
            }
            if(user != "pemilik" || pswd != "123"){
                if (pswd != "123"){
                    system ("cls");
                    kalkul();
                    cout << "                                           Username/password Salah" << endl;
                    }
                    cout << "                                 Apakah anda ingin kembali ke menu daftar[Y/N]?";
                    cin >> yes;
                    if (yes=='Y' || yes=='y'){
                        system("cls");
                        goto login;
                    }
                    if (yes=='N'){
                        system("cls");
                        goto akhir;
                    }

            }
    //KALIBATAKU
    kalibataku:
        kalkul();
        cout << "                                                  MENU KALIBATAKU" << endl;
        cout << "                                                1. Perkalian" << endl;
        cout << "                                                2. Pembagian" << endl;
        cout << "                                                3. Penambahan" << endl;
        cout << "                                                4. Pengurangan" << endl;
        cout << "                                                5. Kembali ke menu utama" << endl;
        cout << "                                                        Menu : " ;
        cin >> angka;
        switch (angka){
        case 1:
            system("cls");
            goto perkalian;
            break;
        case 2:
            system("cls");
            goto pembagian;
            break;
        case 3:
            system ("cls");
            goto penambahan;
            break;
        case 4:
            system ("cls");
            goto pengurangan;
            break;
        case 5:
            system ("cls");
            goto menuutama;
            break;
        }

    perkalian:
    //Perkalian
        int Pengali;
        int Dikali;
        int Hasil1;
        kalkul();
        cout << "                                            Masukan Angka yang dikali : ";
        cin >> Dikali;
        cout << "                                            Masukkan Angka Pengali    : ";
        cin >> Pengali;
        Perkalian(Pengali, Dikali, &Hasil1 );
        cout << "                                            Hasilnya                  : " << Hasil1 << endl << endl;
        cout << "                                        Apakah mau kembali ke menu utama[Y/N]";
        cin >> yes;
        if (yes == 'Y'){
            system("cls");
            goto menuutama;
        }
        else if (yes == 'N'){
            system("cls");
            goto akhir;
        }
        return 0;

    pembagian:
        //Pembagian
        float Pembagi;
        float Dibagi;
        float Hasil2;
        kalkul();
        cout << "                                           Masukan Angka yang dibagi : ";
        cin >> Dibagi;
        cout << "                                           Masukkan Angka Pembagi    : ";
        cin >> Pembagi;
        Pembagian(Pembagi, Dibagi, &Hasil2 );
        cout << "                                           Hasilnya                  : " << Hasil2 << endl << endl;
        cout << "                                        Apakah mau kembali ke menu utama[Y/N]";
        cin >> yes;
        if (yes == 'Y'){
            system("cls");
            goto menuutama;
        }
        else if (yes == 'N'){
            system("cls");
            goto akhir;
        }
        return 0;

    penambahan:
        //Penambahan
        int Penambah;
        int Ditambah;
        int Hasil3;
        kalkul();
        cout << "                                           Masukan Angka yang ditambah : ";
        cin >> Ditambah;
        cout << "                                           Masukkan Angka Penambah     : ";
        cin >> Penambah;
        Penambahan(Ditambah, Penambah, &Hasil3 );
        cout << "                                           Hasilnya                    : " << Hasil3 << endl << endl;
        cout << "                                        Apakah mau kembali ke menu utama[Y/N]";
        cin >> yes;
        if (yes == 'Y'){
            system("cls");
            goto menuutama;
        }
        else if (yes == 'N'){
            system("cls");
            goto akhir;
        }
        return 0;

    pengurangan:
        //Pengurangan
        int Pengurang;
        int Dikurang;
        int Hasil4;
        kalkul();
        cout << "                                           Masukan Angka yang dikurang : ";
        cin >> Dikurang;
        cout << "                                           Masukkan Angka Pengurang    : ";
        cin >> Pengurang;
        Pengurangan(Dikurang, Pengurang, &Hasil4 );
        cout << "                                           Hasilnya                    : " << Hasil4 << endl << endl;
        cout << "                                        Apakah mau kembali ke menu utama[Y/N]";
        cin >> yes;
        if (yes == 'Y'){
            system("cls");
            goto menuutama;
        }
        else if (yes == 'N'){
            system("cls");
            goto akhir;
        }
        return 0;

    barisanbilangan:
        //DERET GEOMETRI
        kalkul();
        cout << "                                               MENU BARISAN BILANGAN" << endl;
        cout << "                                            1. Barisan Aritmatika" << endl;
        cout << "                                            2. Barisan Geometri" << endl;
        cout << "                                            3. Barisan Fibbonacci" << endl;
        cout << "                                            4. Kembali ke menu utama" << endl << endl;
        cout << "                                                      Menu : " ;
        cin >> angka;
        switch (angka)
        {
        case 1:
            system("cls");
            goto baritmatika;
            break;
        case 2:
            system("cls");
            goto bgeometri;
            break;
        case 3:
            system ("cls");
            goto bfibonaci;
            break;
        case 4:
            system ("cls");
            goto menuutama;
        }
    //BARISAN BILANGAN
    baritmatika:
        //Aritmatika
        kalkul();
        int Hasil5;
        int P; //Suku Pertama
        int C; //Banyaknya Suku
        int B; //Beda
        cout << "                                            Masukkan Suku Pertama (a)    : ";
        cin >> P;
        cout << "                                            Masukkan Banyaknya Suku (n)  : ";
        cin >> C;
        cout << "                                            Masukkan Rasio atau Beda (b) : ";
        cin >> B;
        Hasil5 = aritmatika(P,C,B);
        cout << "                                              Hasil nilai Ke n (Un)        : " << Hasil5 << endl << endl;
        cout << "                                        Apakah mau kembali ke menu utama[Y/N]";
        cin >> yes;
        if (yes == 'Y'){
            system("cls");
            goto menuutama;
        }
        else if (yes == 'N'){
            system("cls");
            goto akhir;
        }
        return 0;
    bgeometri:
        //Geometri
        int Y, Z;
        int geosil;
        geosil = 0;
        kalkul();
        cout << "                                                   Masukan Nilai : ";
        cin >> Y;
        for (Z=1; Z <= Y; Z++){
            cout << geometri(Z) << " ";
            geosil = geosil + geometri(Z);
        }
        cout << endl;
        cout << "                                        Barisan Geometri Ke-" << Y << " adalah " << geometri(Y) << endl;
        cout << "                                        Jumlah Barisan Geometri adalah " << geosil << endl << endl;
        cout << "                                        Apakah mau kembali ke menu utama[Y/N]";
        cin >> yes;
        if (yes == 'Y'){
            system("cls");
            goto menuutama;
        }
        else if (yes == 'N'){
            system("cls");
            goto akhir;
        }
        return 0;

    bfibonaci:
        //FIBONACCI
        int W, X;
        int fisil;
        fisil = 0;
        kalkul();
        cout << "                                                 Masukkan nilai  : ";
        cin >> W;
        for (X=1; X<=W; X++){
            cout << fibbonacci(X) << " ";
            fisil = fisil + fibbonacci(X);
        }
        cout << endl;
        cout << "                                         Bilangan Fibbonacci ke-" << W << " adalah " << fibbonacci(W) << endl;
        cout << "                                         Jumlah Barisan Bilangannya adalah " << fisil << endl << endl;
        cout << "                                       Apakah mau kembali ke menu utama[Y/N]";
        cin >> yes;
        if (yes == 'Y'){
            system("cls");
            goto menuutama;
        }
        else if (yes == 'N'){
            system("cls");
            goto akhir;
        }
        return 0;
    eksponen:
        //Eksponensial
        kalkul();
        cout << "                                                 MENU EKSPONENSIAL" << endl;
        cout << "                                              1. Akar" << endl;
        cout << "                                              2. Pangkat" << endl;
        cout << "                                              3. Kembali ke menu utama" << endl << endl;
        cout << "                                                       Menu : " ;
        cin >> angka;
        switch (angka)
        {
        case 1:
            system("cls");
            goto akar;
            break;
        case 2:
            system("cls");
            goto pangkat;
            break;
        case 3:
            system ("cls");
            goto menuutama;
        akar :
            // akar
            int x,y;
            kalkul();
            cout<<"                                                  Masukan bilangan : ";
            cin>>x;
            Akar(x);
            cout << "                                                  Akarnya          : " << Akar(no) << endl << endl;
            cout << "                                       Apakah mau kembali ke menu utama[Y/N]";
            cin >> yes;
            if (yes == 'Y'){
                system("cls");
                goto menuutama;
            }
            else if (yes == 'N'){
                system("cls");
                goto akhir;
            }
            return 0;
        pangkat :
            //Pangkat
            kalkul();
            cout<<"                                                  Masukan bilangan : ";
            cin>>x;
            cout<<"                                                  Masukan pangkat  : ";
            cin>>y;
            cout<<"                                                  Hasil            : "<<pangkat(x,y)<<endl;
            cout<<"                                                      "<<x<<"^"<<y<<" = ";
            for (i=1; i<=y;i++)
            {
                cout<<x;
                if (i==y)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }

            }
            cout << endl << endl;
            cout << "                                       Apakah mau kembali ke menu utama[Y/N]";
            cin >> yes;
            if (yes == 'Y'){
                system("cls");
                goto menuutama;
            }
            else if (yes == 'N'){
                system("cls");
                goto akhir;
            }
            return 0;
    ratarata:
        kalkul();
        cout << "                                                 MENU Rata-Rata" << endl;
        cout << "                                              1. Hitung Rata-Rata" << endl;
        cout << "                                              2. Cetak Rata-Rata" << endl;
        cout << "                                              3. Kembali ke menu utama" << endl << endl;
        cout << "                                                       Menu : " ;
        cin >> angka;
        switch (angka)
        {
        case 1:
            system("cls");
            goto hitrata;
            break;
        case 2:
            system("cls");
            goto cetrata;
            break;
        case 3:
            system ("cls");
            goto menuutama;

        hitrata:
            //Menghitung Rata-Rata Murid Privat / Les
            Keluar.open("Rata-Rata.txt");
            kalkul();
            cout << "                                         Masukan Jumlah Pelajaran/Ulangan : ";
            cin >> n;
            cout << endl;
            for (i=1; i <= n; i++){
                cout << "                                         Nama Pelajaran/Ulangan ke        : ";
                Keluar << "Nama Pelajaran/Ulangan ke : ";
                cin >> les[i].nama;
                Keluar << les[i].nama << endl;
                cout << "                                         Nilai                            : ";
                Keluar << "Nilai : ";
                cin >> les[i].nilai;
                Keluar << les[i].nilai << endl;
                cout << endl;
            }
            float jml;
            jml =0;
            i=1;
            while (i <= n){
                jml = jml + les[i].nilai;
                i++;
            }

            float rata_rata;
            rata_rata = jml/n;
            cout << "                                         Rata-Rata nilai                  : " << rata_rata << endl;
            Keluar << "Rata-Rata nilai : " << rata_rata << endl;
            if (rata_rata <= 60 ){
                cout << "                                       Maaf anda harus meningkatkan belajar anda" << endl;
                Keluar << "Maaf anda harus meningkatkan belajar anda" << endl;
            }
            else {
                cout << "                                       Selamat anda telah belajar dengan baik" << endl;
                Keluar << "Selamat anda telah belajar dengan baik" << endl;
            }
            if (rata_rata >= 80 ){
                cout << "                                       Selamat anda telah mengajar dengan sangat baik" << endl;
                Keluar << "Selamat anda telah belajar dengan sangat baik" << endl << endl;
            }
            Keluar.close();
            cout << "                                    File Rata-Rata anda tercetak di file Rata-Rata.txt" << endl << endl;
            if (yes == 'Y'){
                system("cls");
                goto menuutama;
            }
            else if (yes == 'N'){
                system("cls");
                goto akhir;
            }
            cout << "                                           Apakah mau kembali ke menu utama[Y/N]";
            cin >> yes;
            if (yes == 'Y'){
                system("cls");
                goto menuutama;
            }
            else if (yes == 'N'){
                system("cls");
                goto akhir;
            }
            return 0;

        akhir:
            kalkul();
            cout << "                            Terima Kasih Sudah Menggunakan Aplikasi KALKU. Semoga Bermanfaat" << endl << endl;
            return 0;
        cetrata:
            string r;
            kalkul();
            cout << "                                        ====================================" << endl;
            cout << "                                           Rata-Rata Nilai Pelajaran Anda"    << endl;
            cout << "                                        ====================================" << endl;
            Masuk.open("Rata-Rata.txt");
            while(!Masuk.eof()){
                getline(Masuk, r);
                cout <<"                                          " << r << endl;
            }
            cout << "                                         ====================================" << endl << endl;
            cout << "                                           Apakah mau kembali ke menu utama[Y/N]";
            cin >> yes;
            if (yes == 'Y'){
                system("cls");
                goto menuutama;
            }
            else if (yes == 'N'){
                system("cls");
                goto akhir;
            }
            return 0;
        }
    }
}
