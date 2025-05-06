#include <iostream>
using namespace std;
class mahasiswa
{
    public:
    int nim;
    void showNim()
    {
        cout << "no induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa mhs{1}; // pointer to object
    mhs.showNim(); // member access oprator

    mahasiswa&refMhs = mhs; // reference to object
    refMhs.nim = 2; // member access oprator
    mhs.showNim(); // member access oprator

    mahasiswa*pMhs = &mhs; // pointer Derefence object
    pMhs->nim = 3;
    pMhs->showNim(); 
    return 0;
}