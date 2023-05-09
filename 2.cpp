#include <iostream>
using namespace std;

void process (int array[], int n, int input) 
{
    int hasil = 0;
    for (int i = 0; i < n; i++)
    {
        if(array[i] == input)
        {
            hasil++;
            continue;
        }
            
    }

    if (hasil == 0) //untuk mengecek apakah hasil frekuensi di array 0 atau tidak
    {
        cout<<"Angka " << input << " tidak ada dalam array"; 
    }
    else
    {
        cout<<"Frekuensi dari angka "<< input << " di dalam array adalah "<< hasil;
    }
}

int main()
{
    int input;
    int array[] = {1,2,2,3,3,3,5};
    int n = sizeof(array) / sizeof(array[0]); //panjang array
    cout<<"Input angka yang mau dicari frekuensinya: ";
    cin>>input;
    process(array, n, input);
}