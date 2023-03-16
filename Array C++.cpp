#include <iostream>

using namespace std;

int main()
{
	int hitung, i, arr[30], angka, awal, tengah, akhir;
	cout<<"Berapa banyak elemen yang anda inginkan: ";
	cin>>hitung;
	
	for (i=0; i<hitung; i++)
	{
		cout<<"Masukkan angka "<<(i+1)<<" : ";
		cin>>arr[i];
	}
	cout<<"Masukkan angka yang anda ingin cari: ";
	cin>>angka;
	
	awal = 0;
	akhir = hitung-1;
	tengah = (awal + akhir)/2;
	
	while (awal<= akhir)
	{
		if (arr[tengah] < angka)
		{
		awal = tengah + 1;	
		}
		else if (arr[tengah] == angka)
		{
			cout<<angka<<" ditemukan pada indeks "<<tengah+1<<"\n";
					break;
			}	
			else{
				akhir = tengah - 1;
			}
			tengah = (awal + akhir)/2;	
	}
		if (awal > akhir)
	{
		cout<<angka<<" tidak ditemukan dalam array";
	}
	
	return 0;
}