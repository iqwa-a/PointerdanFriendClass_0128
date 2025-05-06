#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
    private:
        string nama;
    
    public:
    void setNama(string pNama);
    friend class siswa;
};
class siswa
{
    private:
    int id;

    public:
    void setId(int pId);
    void displayall(orang &a);
};

void siswa::displayall(orang &a)
{
    cout << id << endl << a.nama ;
}
void orang::setNama(string pnama)
{
    nama = pnama;
}
void siswa::setId(int pid)
{
    id = pid;
}
int main()
{
    orang joko;
    joko.setNama("Joko Widodo");
    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayall(joko);
    return 0;
}