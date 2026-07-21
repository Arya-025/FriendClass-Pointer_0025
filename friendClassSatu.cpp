#include <iostream>
#include <string>
using namespace std;

class siswa; // forward declaration

class orang
{
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa; // siswa boleh akses private orang
};

class siswa
{
private:
    int id;

public:
    void setId(int pId);
    void displayAll(orang &a); // diperbaiki (nama harus sama)
};

// IMPLEMENTASI

void orang::setNama(string pNama)
{
    nama = pNama;
}

void siswa::setId(int pId)
{
    id = pId;
}

