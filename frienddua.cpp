#include <iostream>
using namespace std;

class pelajar;
class manusia
{
    public:
    void ShowNilaiPelajar(pelajar &a);

};


class pelajar
{
private:
    int nilai;

    public:
    pelajar() {nilai = 100;}
    friend void manusia::ShowNilaiPelajar(pelajar &a);

};
void manusia::ShowNilaiPelajar(pelajar &a)
{
    cout << a.nilai;
};
int main()
{
    manusia budi;
    pelajar pbudi;
    budi.ShowNilaiPelajar(pbudi); // akses nilai dari class pelajar
    return 0;
}