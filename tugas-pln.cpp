	#include <iostream>
	using namespace std;
  
	int main()
	{
		int
			ppn = 0,
			harga = 0,
			sambungan = 0,
			harga_total = 0,
			administrasi = 0;
		char jenis_pelanggan;
  
		tanyakan_jenis_pelanggan:
		cout << "Pilih target pemasangan" << endl;
		cout << "  a. Rumah tangga" << endl;
		cout << "  b. Industri" << endl;
		cout << "Pilih pemasangan anda (a|b): ";
		cin >> jenis_pelanggan;
		jenis_pelanggan = tolower(jenis_pelanggan);
  
		// jika inputan tidak valid
		if (jenis_pelanggan != 'a' && jenis_pelanggan != 'b') {
			cout << "Pilihan anda (" << jenis_pelanggan << ") tidak valid.";
			goto tanyakan_jenis_pelanggan;
		}
  
		tanya_sambungan:
		cout << "Berapa Watt Pemasangan: "; cin >> sambungan;
		if (jenis_pelanggan == 'a') {
			switch(sambungan) {
				case 0 ... 450: harga = 650000; break;
				case 451 ... 900: harga = 850000; break;
				case 901 ... 1200: harga = 1200000; break;
				case 1201 ... 2200: harga = 1500000; break;
				case 2201 ... 4400: harga = 1750000; break;
				default:
					cout << "Watt tidak memenuhi syarat sambungan" << endl;
					goto tanya_sambungan;
					break;
			}
		} else if (jenis_pelanggan == 'b') {
			switch (sambungan) {
				case 4401 ... 9500: harga = 2250000; break;
				case 9501 ... 12000: harga = 2750000; break;
				case 12001 ... 16000: harga = 3250000; break;
				case 16001 ... 22000: harga = 4500000; break;
				case 22001 ... 2147483647: harga = 6700000; break;
				default:
					cout << "Watt tidak memenuhi syarat sambungan" << endl;
					goto tanya_sambungan;
					break;
			}
		}
  
		ppn = harga * 0.1;
		administrasi = harga * 0.05;
		harga_total = harga + ppn + administrasi;
  
		cout << "Total Harga pemasangan baru Pelanggan PLN adalah Rp." << harga_total;
  
		return 0;
	}