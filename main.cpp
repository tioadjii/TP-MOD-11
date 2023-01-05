#include "flight.h"

int main()
{
    listjadwal L;
    createlistjadwal_1301213084(L);
    adr_jadwalP p;
    int n,i;
    string dari,tanggal;
    infotype flight;

    cout << "Masukan Jumlah Data    : ";
    cin >> n;
    cout << endl;
    i = 0;
    while(i < n){
        cout << "Inputkan Kode Pesawat          :  ";
        cin >> flight.kode;
        cout << "Inputkan Jenis Pesawat         :  ";
        cin >> flight.jenis;
        cout << "Inputkan Tanggal Penerbangan   :  ";
        cin >> flight.tanggal;
        cout << "Inputkan Waktu Penerbangan     :  ";
        cin >> flight.waktu;
        cout << "Inputkan Asal Penerbangan      :  ";
        cin >> flight.asal;
        cout << "Inputkan Tujuan Penerbangan    :  ";
        cin >> flight.tujuan;
        cout << "Inputkan Kapasitas Penerbangan :  ";
        cin >> flight.kapasitas;
        p = createelemenjadwal_1301213084(flight);
        insertlastJ_1301213084(L, p);
        cout << endl;
        i++;
    }
    cout << "============ DELETE AWAL LIST ============" << endl;
    deletefirstJ_1301213084(L,p);
    showjadwal_1301213084(L);
    cout << "============ CARI JADWAL ============" << endl;
    cout << "Masukan Asal Penerbangan       :  ";
    cin >> dari;
    cout << "Masukan Tanggal Penerbangan    :  ";
    cin >> tanggal;
    p = searchJ_1301213084(L,dari,tanggal);
    cout << "Kode Penerbangan       :   " << info(p).kode << endl;
    cout << "Jenis                  :   " << info(p).jenis << endl;
    cout << "Tanggal Penerbangan    :   " << info(p).tanggal << endl;
    cout << "Waktu Penerbangan      :   " << info(p).waktu << endl;
    cout << "Asal Penerbangan       :   " << info(p).asal << endl;
    cout << "Tujuan Penerbangan     :   " << info(p).tujuan << endl;
    cout << "Kapasitas              :   " << info(p).kapasitas << endl;

}
