#include <iostream>
using namespace std;
int* pointernya;


int main() {
    string resepsionis,customer,alamat;
    char status_kamar;
    int kamar[100],no_kamar[100],harga_kamar[100],ranjang,tipeKamar,jmlh_kamar,lama,totalnya,lagi;
    struct tambahan
    {
        float diskon;
    };
    tambahan diskonnya;
    string jwb,id_customer,id_resepsionis,jk,hp,checkin,checkout;


        cout<<"======================================================"<<endl;
        cout<<"            SELAMAT DATANG DI HOTEL FASILKOM          "<<endl;
        cout<<"         JL. Singaperbangsa Karawang Barat 28465      "<<endl;
        cout<<"======================================================"<<endl;
        cout<<"             Silahkan Isi Form Berikut ini.           "<<endl;
        cout<<"======================================================"<<endl;
        cout<<" Nama Resepsionis Yang Melayani: ";
        getline(cin, resepsionis);
        cout<<" ID Resepsionis            : ";
        cin>>id_resepsionis;
        system("cls");

        awal:
        cout<<"======================================================"<<endl;
        cout<<"            SELAMAT DATANG DI HOTEL FASILKOM          "<<endl;
        cout<<"         JL. Singaperbangsa Karawang Barat 28465      "<<endl;
        cout<<"======================================================"<<endl;
        cout<<"             Silahkan Isi Form Berikut ini.           "<<endl;
        cout<<"======================================================"<<endl;
        cout<<" Nama Pemesan              : ";
        cin>>customer;
        cout<<" ID Pemesan                : ";
        cin>>id_customer;
        cout<<" Jenis Kelamin (L/P)       : ";
        cin>>jk;
        cout<<" Nomer Telepon             : ";
        cin>>hp;
        cout<<" Alamat                    : ";
        cin>>alamat;
        cout<<" Jumlah Kamar Yang Dipesan : ";
        cin>>jmlh_kamar;
        pointernya = &jmlh_kamar;
        cout << " Apakah jumlah kamar sudah sesuai(Y/N) : ";
        cin>> status_kamar;
        if (status_kamar=='n' || status_kamar=='N')
        {
            cout << " Masukkan lagi jumlah kamar : ";
            cin >> *pointernya;

        }
        system("cls");
        cout<<endl;
        cout<<endl;

    for (int i=0;i<jmlh_kamar; i++){
        cout<<"\t======================================================="<<endl;
        cout<<"\t     Silahkan Pilih Tipe Kamar Yang Anda Inginkan.     "<<endl;
        cout<<"\t======================================================="<<endl;
        cout<<" \t1.     Standart            |     Rp.100.000           "<<endl;
        cout<<" \t2.     Premium             |     Rp.300.000           "<<endl;
        cout<<" \t3.     Deluxe              |     Rp.700.000           "<<endl;
        cout<<" \t4.     Suite               |     Rp.1.400.000         "<<endl;
        cout<<" \t5.     Presidential        |     Rp.2.400.000         "<<endl;
        cout<<"\t======================================================="<<endl;
        cout<<" \tMasukkan Pilihan : ";
        cin>>kamar[i];

        cout<<endl;
        cout<<endl;

        cout<<"\t      Silahkan Pilih Tipe Bed Yang Anda Inginkan       "<<endl;
        cout<<"\t======================================================="<<endl;
        cout<<"\t1.    Singel               |       Rp.100.000          "<<endl;
        cout<<"\t2.    Double               |       Rp.150.000          "<<endl;
        cout<<"\t======================================================="<<endl;
        cout<<"\tMasukkan Pilihan: ";
        cin>>ranjang;
        cout<<endl;

                if(kamar[i]==1 && ranjang==1)
                {
                    cout<<"\tAnda Memilih Kamar Tipe Standart Dengan Ranjang Single"<<endl;
                    harga_kamar[i]=200000;
                }
                else if(kamar[i]==1 && ranjang==2)
                {
                    cout<<"Anda Memilih Kamar Tipe Standart Dengan Ranjang Double"<<endl;
                    harga_kamar[i]=250000;
                }
                else if(kamar[i]==2 && ranjang==1)
                {
                    cout<<"Anda Memilih Kamar Tipe Premium Dengan Ranjang single"<<endl;
                    harga_kamar[i]=400000;
                }
                else if(kamar[i]==2 && ranjang==2)
                {
                    cout<<"Anda Memilih Kamar Tipe Premium Dengan Ranjang Double"<<endl;
                    harga_kamar[i]=450000;
                }
                else if(kamar[i]==3 && ranjang==1)
                {
                    cout<<"Anda Memilih Kamar Tipe Deluxe Dengan Ranjang single"<<endl;
                    harga_kamar[i]=800000;
                }
                else if(kamar[i]==3 && ranjang==2)
                {
                    cout<<"Anda Memilih Kamar Tipe Deluxe Dengan Ranjang Double"<<endl;
                    harga_kamar[i]=850000;
                }
                else if(kamar[i]==4 && ranjang==1)
                {
                    cout<<"Anda Memilih Kamar Tipe Suite Dengan Ranjang single"<<endl;
                    harga_kamar[i]=1500000;
                }
                else if(kamar[i]==4 && ranjang==2)
                {
                    cout<<"Anda Memilih Kamar Tipe Suite Dengan Ranjang Double"<<endl;
                    harga_kamar[i]=1550000;

                }
                else if(kamar[i]==5 && ranjang==1)
                {
                    cout<<"Anda Memilih Kamar Tipe Presidential Dengan Ranjang single"<<endl;
                    harga_kamar[i]=2500000;

                }
                else if(kamar[i]==5 && ranjang==2)
                {
                    cout<<"\tAnda Memilih Kamar Tipe Presidential Dengan Ranjang Double"<<endl;
                    harga_kamar[i]=2550000;

                }


                {

                    cout<<"Maaf Pilihan Anda Tidak Tersedia"<<endl;
                    cout<<"Untuk Keamanan Silahkan Isi Data Dari Awal"<<endl;
                    cout<<"Apakah Anda Ingin Memulai Lagi ? [Y/N]: " ;
                    cin>>jwb;
                     if (jwb=="y" || jwb=="Y") {
                            goto awal;
                        }else {(jwb=="n" || jwb=="N");
                            cout<<" Terima Kasih";
                        }


                }
            cout<<endl;
            cout<<"\tSilahkan Mengisi Form Berikut"<<endl;
            cout<<"\t================================================================================="<<endl;
            cout<<"\tPilih No. Kamar [1-100] : ";
            cin>>no_kamar[i];
            cout<<"\tMenginap 3 hari atau lebih, diskon 2% perhari"<<endl;
            cout<<"\tLama Menginap : ";
            cin>>lama;

                if(lama>=3){
                    diskonnya.diskon=0.02;
                }else{
                    diskonnya.diskon=0;
                }
                cout<<"\tTanggal Check In [DDMMYY]   : ";
                cin>>checkin;
                cout<<"\tTanggal Check Out [DDMMYY]  : ";
                cin>>checkout;
                cout<<endl;
                cout<<endl;
    }
    system("cls");

        cout<<"\t================================================================================="<<endl;
        cout<<"\t                             Data Pemesanan Kamar                                "<<endl;
        cout<<"\t================================================================================="<<endl;
                cout<<"\tNama Resepsionis : "<<resepsionis<<endl;
                cout<<"\tID Resepsionis   : "<<id_resepsionis<<endl;
                cout<<"\tNama Pemesan     : "<<customer<<endl;
                cout<<"\tID Pemesan       : "<<id_customer<<endl;
                cout<<"\tAlamat           : "<<alamat<<endl;
                cout<<"\tTelp/HP          : "<<hp<<endl;
                for (int i=0;i<jmlh_kamar; i++){
                cout<<"\tTipe Kamar "<<i + 1<<"     : "<<kamar[i]<<endl;
                cout<<"\tNo. Kamar "<<i + 1<<"      : ";
                if(no_kamar[i] >= 1 && no_kamar[i] <= 100){
                            cout<<no_kamar[i]<<endl;
                        }else{
                            cout<<"Maaf Nomer Kamar Belum Tersedia"<<endl;
                            cout<<"Silahkan Hubungi Resepsionis Untuk Pergantian Nomer"<<endl;
                        }
                cout<<"\tHarga Perhari    : Rp. "<<harga_kamar[i]<<endl;
                        totalnya = totalnya + harga_kamar[i];
                }

                cout<<"\tLama Menginap    : "<<lama<<"Hari"<<endl;
                cout<<"\tTanggal Check in : "<<checkin<<endl;
                cout<<"\tTanggal Check out: "<<checkout<<endl;
                int total_harganya = lama*totalnya;
                cout<<"\tHarga Kamar Total: Rp. "<<total_harganya<<endl;
                int total_diskonnya = diskonnya.diskon*total_harganya;
                cout<<"\tDiskon           : Rp. "<<total_diskonnya<<endl;
        cout<<"\t=================================================================================="<<endl;
                cout<<"\tBiaya Total      : Rp. "<<total_harganya-total_diskonnya;

                cout<<endl;
        cout<<"\t================================================================================="<<endl;

                cout<<"\t==========Terima Kasih Telah Memilih HOTEL FASILKOM========="<<endl;
                cout<<"\t=============Sebagai Tempat Peristirahatan Anda===================";
                cout<<endl;
                cout<<endl;
                cout<<"Apakah Anda Ingin Memesan Kamar Lagi ? [Y/N]";
                cin>>jwb;
                if(jwb=="Y" || jwb=="y"){
                    goto awal;
                    system("cls");
                }else{
                    cout<<"Terima Kasih Atas Kunjungannya";
                }
    return 0;
}

