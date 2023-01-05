#include "flight.h"

void createlistjadwal_1301213084(listjadwal &L){
    first(L) = NULL;
}

adr_jadwalP createelemenjadwal_1301213084(infotype x){
    adr_jadwalP p;
    p = new elemenjadwal;
    info(p) = x;
    next(p) = NULL;
    return p;
}

void insertlastJ_1301213084(listjadwal &L, adr_jadwalP p){
    adr_jadwalP x;
    x = first(L);
    if(first(L) == NULL){
        first(L) = p;
    } else {
        while(next(x) != NULL){
            x = next(x);
        }
        next(x) = p;
    }
}

void showjadwal_1301213084(listjadwal &L){
    adr_jadwalP p;
    p = first(L);
    while(p != NULL){
        cout << "Kode Penerbangan       :   " << info(p).kode << endl;
        cout << "Jenis                  :   " << info(p).jenis << endl;
        cout << "Tanggal Penerbangan    :   " << info(p).tanggal << endl;
        cout << "Waktu Penerbangan      :   " << info(p).waktu << endl;
        cout << "Asal Penerbangan       :   " << info(p).asal << endl;
        cout << "Tujuan Penerbangan     :   " << info(p).tujuan << endl;
        cout << "Kapasitas              :   " << info(p).kapasitas << endl;
        cout << endl;
        p = next(p);
    }
}

void deletefirstJ_1301213084(listjadwal &L, adr_jadwalP p){
    if(first(L) == NULL){
        cout << p;
    } else {
        p = first(L);
        first(L) = next(p);
        next(p) = NULL;
    }
}

adr_jadwalP searchJ_1301213084(listjadwal L, string dari, string tanggal){
    adr_jadwalP p;
    p = first(L);
    while(p != NULL && info(p).asal != dari && info(p).tanggal != tanggal){
        p = next(p);
    }
    return p;
}
