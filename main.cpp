#include <iostream>


/*
    PROGRAMMED BY BAGAS DANISWARA
    JURUSAN TEKNIK INFORMATIKA 1A
    UNIVERSITAS MUHAMMADIYAH SUKABUMI
*/
using namespace std;

void header(){
    cout << "::----------------------------------------------------------------------------::" << endl;
    cout << "::                 ============= SELAMAT DATANG ==============                ::" << endl;
    cout << "::                 ============== DI HOTEL C++ ===============                ::" << endl;
    cout << "::                 == KENYAMANAN ANDA ADALAH PRIORITAS KAMI ==                ::" << endl;
    cout << "::     KAMI MENYEDIAKAN DISKON 10% JIKA ANDA MENGINAP LEBIH DARI DUA HARI     ::" << endl;
    cout << "::----------------------------------------------------------------------------::\n" << endl;
}
void footer(){
    cout << "\n::----------------------------------------------------------------------------::" << endl;
    cout << "::                 == TERIMAKASIH TELAH MEMPERCAYAI KAMI ==                   ::" << endl;
    cout << "::                 ============== HOTEL C++ ===============                   ::" << endl;
    cout << "::                 =========== HAVE A NICE DAY ============                   ::" << endl;
    cout << "::----------------------------------------------------------------------------::" << endl;
}
struct deskripsi{
    string kamar,fasilitas;
};
int main()
{
    deskripsi dt1, dt2,dt3;
    dt1.kamar = " ===== Reguler Room ===== ";
    dt1.fasilitas = "1. Single Bed\n\t    2. Kamar mandi\n\t    3. AC\n\t    4. TV\n\t";
    dt2.kamar = " ===== Superior Room ===== ";
    dt2.fasilitas = "1. Double Bed\n\t    2. Kamar mandi\n\t    3. AC\n\t    4. TV\n\t    5. Mesin kopi\n\t    6. Kulkas\n\t";
    dt3.kamar = " ===== Deluxe Room ===== ";
    dt3.fasilitas = "1. Double Bed\n\t    2. Kamar mandi\n\t    3. AC\n\t    4. TV\n\t    5. Mesin kopi\n\t    6. Kulkas\n\t    7. Ruang tamu\n\t";
    int jenis,lama,harga[3]={500000, 800000, 1000000},total,diskon,total_diskon,bayar,kembali;
    string yakin,nama;
    header();
    menu:
    do{
        cout << "Silahkan memilih jenis kamar yang tersedia : " <<endl;
        cout << "1. Standart Room" <<endl;
        cout << "2. Superior Room" <<endl;
        cout << "3. Deluxe Room" <<endl;
        cout << "4. Cancel" <<endl;
        cout << "Silahkan memilih jenis kamar : ";
        cin >> jenis;
        system ("CLS");
        header();
        switch(jenis){
            case 1: {
                cout << dt1.kamar << endl;
                cout << "\nFasilitas : " << dt1.fasilitas << endl;
                cout << "Harga perhari : Rp. 500.000" << endl;
                cout << "Apakah anda yakin ingin memesan kamar ini? (ya/tidak) : ";
                cin >> yakin;
                system ("CLS");

                if (yakin == "ya"){
                    header();
                    cout << "Tulis nama anda \t\t: ";
                    cin >> nama;
                    cout << "Lama menginap (Hari)\t\t: ";
                    cin >> lama;
                    total = lama*harga[0];
                    cout << "Total harga yang harus dibayar\t: Rp. " << total << endl;

                        if(total > 1000000){
                            cout << "\n\tSelamat anda mendapatkan diskon 10%!" << endl;
                            cout << "\t   Silahkan melakukan pembayaran!\n" << endl;
                            diskon = 0.10*total;
                            total_diskon = total-diskon;
                            cout << "Total harga yang harus dibayar\t: Rp. " << total_diskon << endl;
                            cout << "Masukan uang yang harus dibayar : Rp. ";
                            cin >> bayar;
                            kembali = bayar-total_diskon;
                            cout << "Uang kembalian\t\t\t: Rp. " << kembali << endl;
                            footer();
                        }else{
                            cout << "\t\n   Silahkan melakukan pembayaran!\n" << endl;
                            cout << "Total harga yang harus dibayar\t: Rp. " << total << endl;
                            cout << "Masukan uang yang harus dibayar : Rp. ";
                            cin >> bayar;
                            kembali = bayar-total;
                            cout << "Uang kembalian\t\t\t: Rp. " << kembali << endl;
                            footer();
                        }
                }else{
                    system("CLS");
                    header();
                    goto menu;
                }
            break;}
            case 2: {
                cout << dt2.kamar << endl;
                cout << "\nFasilitas : " << dt2.fasilitas << endl;
                cout << "Harga perhari : Rp. 800.000" << endl;
                cout << "Apakah anda yakin ingin memesan kamar ini? (ya/tidak) : ";
                cin >> yakin;
                system ("CLS");

                if (yakin == "ya"){
                    header();
                    cout << "Tulis nama anda \t\t: ";
                    cin >> nama;
                    cout << "Lama menginap (Hari)\t\t: ";
                    cin >> lama;
                    total = lama*harga[1];
                    cout << "Total harga yang harus dibayar\t: Rp. " << total << endl;

                        if(total > 1400000){
                            cout << "\n\tSelamat anda mendapatkan diskon 10%!" << endl;
                            cout << "\t   Silahkan melakukan pembayaran!\n" << endl;
                            diskon = 0.10*total;
                            total_diskon = total-diskon;
                            cout << "Total harga yang harus dibayar\t: Rp. " << total_diskon << endl;
                            cout << "Masukan uang yang harus dibayar : Rp. ";
                            cin >> bayar;
                            kembali = bayar-total_diskon;
                            cout << "Uang kembalian\t\t\t: Rp. " << kembali << endl;
                            footer();
                        }else{
                            cout << "\t\n   Silahkan melakukan pembayaran!\n" << endl;
                            cout << "Total harga yang harus dibayar\t: Rp. " << total << endl;
                            cout << "Masukan uang yang harus dibayar : Rp. ";
                            cin >> bayar;
                            kembali = bayar-total;
                            cout << "Uang kembalian\t\t\t: Rp. " << kembali << endl;
                            footer();
                        }
                }else{
                    system("CLS");
                    header();
                    goto menu;
                }
            break;}
            i: {
                cout << dt3.kamar << endl;
                cout << "\nFasilitas : " << dt3.fasilitas << endl;
                cout << "Harga perhari : Rp. 1.000.000" << endl;
                cout << "Apakah anda yakin ingin memesan kamar ini? (ya/tidak) : ";
                cin >> yakin;
                system ("CLS");

                if (yakin == "ya"){
                    header();
                    cout << "Tulis nama anda \t\t: ";
                    cin >> nama;
                    cout << "Lama menginap (Hari)\t\t: ";
                    cin >> lama;
                    total = lama*harga[2];
                    cout << "Total harga yang harus dibayar\t: Rp. " << total << endl;

                        if(total > 2000000){
                            cout << "\n\tSelamat anda mendapatkan diskon 10%!" << endl;
                            cout << "\t   Silahkan melakukan pembayaran!\n" << endl;
                            diskon = 0.10*total;
                            total_diskon = total-diskon;
                            cout << "Total harga yang harus dibayar\t: Rp. " << total_diskon << endl;
                            cout << "Masukan uang yang harus dibayar : Rp. ";
                            cin >> bayar;
                            kembali = bayar-total_diskon;
                            cout << "Uang kembalian\t\t\t: Rp. " << kembali << endl;
                            footer();
                        }else{
                            cout << "\t\n   Silahkan melakukan pembayaran!\n" << endl;
                            cout << "Total harga yang harus dibayar\t: Rp. " << total << endl;
                            cout << "Masukan uang yang harus dibayar : Rp. ";
                            cin >> bayar;
                            kembali = bayar-total;
                            cout << "Uang kembalian\t\t\t: Rp. " << kembali << endl;
                            footer();
                        }
                }else{
                    system("CLS");
                    header();
                    goto menu;
                }
            break;}
        }
    }while (jenis =! 4);
    return 0;
}
