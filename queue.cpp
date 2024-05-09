#include<iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    
    void showNim(){
        cout << "No Induk = " << nim << endl;
    }
};


int main(){

    mahasiswa mhs{1}; // Object mhs
    mhs.showNim(); // Member Acssess Operator

    mahasiswa &refmhs = mhs; // Pointer References refMhs
    refmhs.nim = 2; // Arrow Operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs;
    pMhs->nim = 3;
    pMhs->showNim();
    return 0;
}
