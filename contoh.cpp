#include <iostream>
using namespace std;

class PersegiPanjang 
{
    public: //akses modifier
    int panjang, lebar;

    public: 
     void input()
     {
      cout << "Masukkan panjang: ";
      cin >> panjang;
      cout << "Masukkan lebar: ";
      cin >> lebar;
     }
    int luasPp(int a, int b)
    {
     return a * b;
    }
   //lingkaranol;
};

class Lingkaran
{
    public:
    int jariJari;

    void input()
    {
     cout << "Masukkan jari-jari: ";
     cin >> jariJari;
    }

    int luasL(int r)
    {
     return 3.14 * r * r;
    }

};
int main()
{
    PersegiPanjang objectPP;
    Lingkaran ol;

    cout << "=== Luas Persegi Panjang ===: ";
    cin >> objectPP.panjang;
    cout << "=== Masukan Lebar === : ";
    cin >> objectPP.lebar;
    cout << "Luas Persegi Panjang : " <<
    objectPP.luasPp(objectPP.panjang, objectPP.lebar) << endl; 
}