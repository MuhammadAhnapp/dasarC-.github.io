// percabangan if
// #include <iostream>
// #include <conio.h>

// using namespace std;

// main(){
//     int usia,bb;
//     cout<<"Pengecekaan Berat Badan"<<endl;
//     cout<<"Masukkan Usia anda = "; cin>>usia;
//     cout<<"Masukkan Berat Badan Anda = "; cin>>bb;

//     if(bb>=100){
//         cout<<"Anda Obesitas, segera lakukan Olahraga dan makan makanan sehat !";
//     } 
//     getch();
// }

// percabangan if else
// #include <iostream>
// #include <conio.h>
// #include <cstring>

// using namespace std;

//     main(){
//         double totalbeli,diskon,harga;
//         char pembelian1[10],pembelian2[10];
//         cout<<"Masukkan total harga pembelian = "; cin>>totalbeli;

//         if(totalbeli>=200000){
//             diskon=0.3*totalbeli;
//             strcpy(pembelian1, "30%");
//             cout<<"Anda mendapatkan Diskon = "<<pembelian1<<endl;
//         }else{
//             diskon=0.05*totalbeli;
//             strcpy(pembelian2, "5%");
//             cout<<"Anda mendapatkan Diskon = "<<pembelian2<<endl;
//         }

//         harga=totalbeli-diskon;
//         cout<<"Total harga yang harus di bayar = Rp "<<harga;

//         getch();

// }


// percabangan nested if
// #include <iostream>
// #include <cstring>
// #include <conio.h>
// using namespace std;

//     main(){
//         double total_belanja;
//         cout<<"Masukkan Total Belanja anda = RP ";cin>>total_belanja;
        
//         if(total_belanja>=10000000){
//             if(total_belanja>=15000000){
//                 cout<<"Total belanja anda Melebihi Rp 15.000.000, Silahkan bayar dengan Kartu Keredit !"<<endl;
//             }else{
//                 cout<<"Silahkan bayar dengan Metode DEBIT !"<<endl;
//             }
//         }else{
//             cout<<"Silahkan Bayar dengan Tunai !";
//         }

//         getch();
//     }

// percabangan of else majemuk

#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

    main(){
        int nilai;
        char grade[10];
        cout<<"Masikkan Nilai Anda = ";cin>>nilai;

        if(nilai>=100){
            strcpy(grade,"A");
        }else if(nilai>=75){
            strcpy(grade, "B");
        }else if(nilai>=60){
            strcpy(grade, "C");
        }else{
            strcpy(grade, "D");
        }
        cout<<"Nilai anda "<<nilai<<", Maka anda mendapatkan Grade "<<grade;

        getche();
    }


// percabangan switch case
// #include <iostream>
// #include <conio.h>
// using namespace std;

//     main(){
//         char nilai;
//         cout<<"Masukkan Nilai (A.....D) = "; cin>>nilai;

//         switch(nilai){
//             case 'A':
//             cout<<"Nilai anda "<< nilai<<", Pertahankan Prestasimu";
//             break;

//             case 'B':
//             cout<<"Nilai anda "<< nilai<<", Hasil yang baik";
//             break;

//             case 'C':
//             cout<<"Nilai anda "<< nilai<<", JANGAN MENYERAH";
//             break;

//             case 'D':
//             cout<<"Nilai anda "<< nilai<<", BELAJAR LAGI";
//             break;

//             default : 
//                 cout<<"Anda salah, Format Nilai antara huruf A Hingga D ";
//         }

//         getche();
//     }