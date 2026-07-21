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

