#include <iostream>
//©sourcecode by M. Faruq Thoriqul Haq don't delete this!
using namespace std;

int main()
{
    cout << "==BIODATA==" << endl;

    string nama;
    int nis;
    int nisn;
    string ttl;
    string agama;
    string status;
    int anak;
    string alamat;
    string smp;
    string wa;
    string ayah;
    string ibu;
    string pekerjaan1;
    string pekerjaan2;

    //perintah memasukkan
    cout << "Masukkan Nama Anda                     : " << endl;
    getline(cin, nama);
    cout << "Masukkan NIS Anda                      : " << endl;
    cin >> nis;
    cout << "Masukkan NISN Anda                     : " << endl;
    cin >> nisn;
    cout << "Masukkan Tempat dan Tanggal Lahir Anda : " << endl;
    cin.ignore();
    getline(cin, ttl);
    cout << "Masukkan Agama Anda                    : " << endl;
    cin >> agama;
    cout << "Masukkan Status Anda Di Dalam Keluarga : " << endl;
    cin >> status;
    cout << "Masukkan Anda Anak ke Berapa           : " << endl;
    cin >> anak;
    cout << "Masukkan Alamat Anda                   : " << endl;
    cin.ignore();
    getline(cin, alamat);
    cout << "Masukkan Asal SMP Anda                 : " << endl;
    cin.ignore();
    getline(cin, smp);
    cout << "Masukkan Nomor WA Anda                 : " << endl;
    cin >> wa;
    cout << "Masukkan Nama Ayah Anda                : " << endl;
    cin.ignore();
    getline(cin, ayah);
    cout << "Masukkan Nama Ibu Anda                 : " << endl;
    cin.ignore();
    getline(cin, ibu);
    cout << "Masukkan Pekerjaan Ayah Anda           : " << endl;
    cin.ignore();
    getline(cin, pekerjaan1);
    cout << "Masukkan Pekerjaan Ibu Anda            : " << endl;
    cin.ignore();
    getline(cin, pekerjaan2);
    cout << "Nama                                   : " << nama << endl;
    cout << "NIS                                    : " << nis << endl;
    cout << "NISN                                   : " << nisn << endl;
    cout << "Tempat dan Tanggal Lahir               : " << ttl << endl;
    cout << "Agama                                  : " << agama << endl;
    cout << "Status                                 : " << status << endl;
    cout << "Anak ke                                : " << anak << endl;
    cout << "Alamat                                 : " << alamat << endl;
    cout << "Asal SMP                               : " << smp << endl;
    cout << "Nomor WA                               : " << wa << endl;
    cout << "Nama Ayah                              : " << ayah << endl;
    cout << "Nama Ibu                               : " << ibu << endl;
    cout << "Pekerjaan Ayah                         : " << pekerjaan1 << endl;
    cout << "Pekerjaan Ibu                          : " << pekerjaan2 << endl;
}


    //membuat variabel

    /*string nama = "Thoriq ";
    int umur = 15;

    cout << "Halo nama saya " ; cout << nama ; cout << "usia saya " ; cout << umur << endl;
    return 0;
}*/
//©sourcecode by M. Faruq Thoriqul Haq don't delete this!
