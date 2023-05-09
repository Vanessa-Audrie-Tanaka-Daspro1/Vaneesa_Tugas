#include <iostream>
#include <vector>
using namespace std;

void process(vector <int> & array)
{
    int n = array.size(); //panjang array
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array [j])
            {
                array.erase(array.begin() + j);
                n--;
                j--;
            }
        }
    }

    cout<<"Hasil: ";
    for (int i = 0; i < n; i++) 
    {
        if (i==n-1) 
            cout << array[i];
        else cout << array[i] << ", ";
    }
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