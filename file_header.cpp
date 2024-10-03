
    // puts output untuk menampilkan tipe data string dan 
    // gets input khusus untuk memasukkan tipe data string

// #include <stdio.h>
// main(){
//     char negara[15];
//     puts("Hello , saya tinggal di");
//     gets(negara);
// }
    
    // printf output digunakn untuk menampilkan pesan ke layar
    // scanf input untuk meng inputkan data numeric, karakter dan string terformat 
    // (cocok digunakan dengan printf karena menggunakan input secara terformat)
//     main(){
//         char negara[15];
//         printf("saya tinggal di");
//         scanf("%s" ,negara);
//     }



// #include <iostream> 
// #include <conio.h>

// using namespace std;

//  main(){
//     cout << "Hello deck";
// }

    // input untuk memasukkan numerik dan karakter, cin >>
    // main(){
    //     char jawab[10];
    //     cout << "ibu kota negara indonesia adalah" << endl;
    //     cin >> jawab;
    //     getch();
    // }

    // main(){
    //     char tombol;
    //     cout << "tekan tombol apapun pada keybord = ";
    //     tombol = getche();
    //     cout << endl;
    //     cout << "saya menekan tombol = " <<tombol;
    // }

    // file header string 
    // #include <cstring>
    // #include <iostream>

    // using namespace std;

// strcpy untuk menyalin suatu string ke dalam variabel tujuan
    // main(){
    //     char negara[10];
    //     strcpy(negara, "belajar c++");
    //     cout<<"saya lagi belajar bahasa "<<negara;
    // }


// strcmp untuk membandingkan suatu string
//     main(){
//         char string1[20];
//         char string2[20];
//         int hasil;

//         cout<<"masukkan kata pertama = "; cin>>string1;
//         cout<<"masukkan kata kedua = "; cin>>string2;

//         hasil=strcmp(string1,string2);

//         if(hasil==0){
//             cout<<"kata pertama dan kedua SAMA";
//         } else{
//             cout<<"kata pertama dan kedua BERBEDA";
//         }
// }

// strlen untuk menghitung jumlah karakter yg ada lama suatu string 
    // main(){
    //     char nama[30];
    //     int jumlah_karakter;

    //     cout<<"masukkan sebuah kata = "; cin>>nama;
    //     jumlah_karakter=strlen(nama);
    //     cout<<"kata " <<nama;
    //     cout<<" memiliki " <<jumlah_karakter<< " karakter";
    // }

// stdlib.h, fungcion: system("cls") untuk membersihkan pesan yg berada diataspa

#include <cstring>
#include <iostream>
#include <stdlib.h>

using namespace std;

    main(){
        char apapun[20];
        int jumlah_kata;

        cout<<"ketikkan apapun yang kamu mau = "; cin>>apapun;
        system("CLS");
        jumlah_kata=strlen(apapun);
        cout<<"kata "<<apapun;
        cout<<" memiliki "<< jumlah_kata <<" karakter";
}


