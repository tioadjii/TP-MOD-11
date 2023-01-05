#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>
using namespace std;
#define first(L) ((L).first)
#define next(p) (p)->next
#define info(p) (p)->info

struct jadwalpenerbangan{
    string kode,jenis,tanggal,waktu,asal,tujuan;
    int kapasitas;
};
typedef struct elemenjadwal *adr_jadwalP;
typedef jadwalpenerbangan infotype;
struct elemenjadwal{
    infotype info;
    adr_jadwalP next;
};
struct listjadwal{
    adr_jadwalP first;
};

void createlistjadwal_1301213084(listjadwal &L);
adr_jadwalP createelemenjadwal_1301213084(infotype x);
void insertlastJ_1301213084(listjadwal &L, adr_jadwalP p);
void showjadwal_1301213084(listjadwal &L);
void deletefirstJ_1301213084(listjadwal &L, adr_jadwalP p);
adr_jadwalP searchJ_1301213084(listjadwal L, string dari, string tanggal);

#endif // FLIGHT_H_INCLUDED
