#include <iostream>
using namespace std;

    int main(){

        cout << "* Math Game By Bayxyy *\n";
        cout << "======================= \n";
        cout << endl;

        int criteria, difficulty, soal, jawaban;
        char ulang;

        awal:
        cout << "# Silahkan Pilih Soal # \n";
        cout << "1. Soal Pertambahan \n";
        cout << "2. Soal Pengurangan \n";
        cout << "3. Soal Perkalian \n";
        cout << "4. Soal Pembagian \n";
        cout << "Masukan Pilihan : ";
        cin >> criteria;
        cout << endl;

        cout << "# Masukan Tingkat Kesulitan # \n";
        cout << "1. Mudah \n";
        cout << "2. Biasa \n";
        cout << "3. Sedang \n";
        cout << "4. Sulit \n";
        cout << "5. Extreme \n";
        cout << "Masukan Pilihan : ";
        cin >> difficulty;
        cout << endl;

        if (criteria==1 && difficulty==1){
            cout << "* Soal Pertambahan * \n";
            cout << "3 + 3 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==6){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<6 || jawaban>6){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==1 && difficulty==2){
            cout << "* Soal Pertambahan * \n";
            cout << "7 + 4 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==11){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<11 || jawaban>11){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==1 && difficulty==3){
            cout << "* Soal Pertambahan * \n";
            cout << "24 + 78 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==112){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<112 || jawaban>112){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==1 && difficulty==4){
            cout << "* Soal Pertambahan * \n";
            cout << "187 + 675 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==862){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<862 || jawaban>862){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==1 && difficulty==5){
            cout << "* Soal Pertambahan * \n";
            cout << "128943 + 21034 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==149977){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<149977 || jawaban>149977){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==2 && difficulty==1){
            cout << "* Soal Pengurangan * \n";
            cout << "5 - 3 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==2){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<2 || jawaban>2){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==2 && difficulty==2){
            cout << "* Soal Pengurangan * \n";
            cout << "12 - 4 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==8){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<8 || jawaban>8){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==2 && difficulty==3){
            cout << "* Soal Pengurangan *";
            cout << "56 - 12 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==44){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<44 || jawaban>44){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==2 && difficulty==4){
            cout << "* Soal Pengurangan * \n";
            cout << "675 - 187 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==488){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<488 || jawaban>488){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==2 && difficulty==5){
            cout << "* Soal Pengurangan * \n";
            cout << "12954 - 8392 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==4562){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<4562 || jawaban>4562){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==3 && difficulty==1){
            cout << "* Soal Perkalian * \n";
            cout << "1 x 2 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==2){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<2 || jawaban>2){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==3 && difficulty==2){
            cout << "* Soal Perkalian * \n";
            cout << "5 x 3 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==15){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<15 || jawaban>15){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==3 && difficulty==3){
            cout << "* Soal Perkalian * \n";
            cout << "7 x 8 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==56){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<56 || jawaban>56){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==3 && difficulty==4){
            cout << "* Soal Perkalian * \n";
            cout << "144 x 87 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==12528){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<12528 || jawaban>12528){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==3 && difficulty==5){
            cout << "* Soal Perkalian * \n";
            cout << "1267 x 783 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==992061){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<992061 || jawaban>992061){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==4 && difficulty==1){
            cout << "* Soal Pembagian * \n";
            cout << "4 : 2 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==2){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<2 || jawaban>2){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==4 && difficulty==2){
            cout << "* Soal Pembagian * \n";
            cout << "10 : 2 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==5){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<5 || jawaban>5){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==4 && difficulty==3){
            cout << "* Soal Pembagian * \n";
            cout << "25 : 5 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==5){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<5 || jawaban>5){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==4 && difficulty==4){
            cout << "* Soal Pembagian * \n";
            cout << "3780 : 12 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==315){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<315 || jawaban>315){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        if (criteria==4 && difficulty==5){
            cout << "* Soal Pembagian * \n";
            cout << "541386 : 9 = ";
            cin >> jawaban;
            cout << endl;
                if (jawaban==60154){
                    cout << "Selamat Jawaban Anda Benar";
                }
                if (jawaban<60154 || jawaban>60154){
                    cout << "Yah, Jawaban Anda Salah !!!";
                }
        }

        cout << endl;
        cout << "Apakah Anda Ingin Mengulang ? (Y/N)";
        cin >> ulang;
        if (ulang=='Y' || ulang=='y'){
            goto awal;
        }
        if (ulang=='N' || ulang=='n'){
            goto akhir;
        }
        akhir:
        cout << "Terima Kasih Telah Menggunakan Quiz Dari Bayxyy \n";
        cout << "github.com/bayxyy - userprofile";
    
    return 0;
    }