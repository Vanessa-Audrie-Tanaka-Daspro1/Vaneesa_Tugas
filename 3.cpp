#include <iostream>
#include <vector>
using namespace std;

void process(vector <int> & array)
{
    int n = array.size(); //panjang array
    int i = 0;
    int nol = 0;
    while (i < n)
    {
        if (array[i] == 0) //jika terdapat angka 0 di inputan
        {
            array.erase(array.begin() + i); // angka 0 dihapus di array
            nol++; 
            i--; 
            n--; 
        }
        i++;
    }
    
    // 0 yang tadi dihapus dimasukkan kembali
    for (int i = 0; i < nol; i++) 
    {
        array.insert(array.begin(), 0);
    }

    cout<<"Hasil: ";
    for (auto i: array)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main ()
{
    int jlh, angka;
    vector <int> array;
    cout<<"Jumlah angka yang akan di-input: ";
    cin>>jlh;

    for (int i = 1; i <= jlh; i++)
    {
        cout<<"Angka ke-"<<i<<" = ";
        cin>>angka;
        array.push_back(angka);
    }
    process(array);
}