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
    mahasiswa *mhs = new mahasiswa{1}; // pointer to object
     mhs ->nim = 2; 
     mhs -> showNim(); 
     delete mhs;
     return 0;

}