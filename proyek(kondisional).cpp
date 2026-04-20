#include <iostream>
using namespace std;

class Proses{
public: 
	int menu;
	int pilih;
	string item;
	int harga;
	
	void pilihMenu() {
        cout << "+=== Selamat Datang di Restoran Bejo ===+" << endl;
        cout << "| 1. Pilih Makanan                      |" << endl;
        cout << "| 2. Pilih Snack                        |" << endl;
        cout << "| 3. Pilih Minuman                      |" << endl;
        cout << "+=======================================+" << endl;
        cout << "Silahkan Pilih Menu: ";
        cin >> menu;
    }
	
	void makanan() {
		cout << "+===========================================+" << endl;
		cout << "| 1. Nasi Ayam Original           Rp. 12000 |" << endl;
		cout << "| 2. Nasi Ayam Asam Manis         Rp. 14000 |" << endl;
		cout << "| 3. Nasi Ayam Bakar              Rp. 15000 |" << endl;
		cout << "| 4. Nasi Ayam Geprek             Rp. 14000 |" << endl;
		cout << "| 5. Nasi Ayam Mentai             Rp. 16000 |" << endl;
		cout << "+===========================================+" << endl;
		cout << "Pilih Menu: ";
		cin >> pilih;
		
		switch(pilih) {
            case 1: item = "Nasi Ayam Original"; harga = 12000; break;
            case 2: item = "Nasi Ayam Asam Manis"; harga = 14000; break;
            case 3: item = "Nasi Ayam Bakar"; harga = 15000; break;
            case 4: item = "Nasi Ayam Geprek"; harga = 14000; break;
            case 5: item = "Nasi Ayam Mentai"; harga = 16000; break;
            default: item = "Menu Tidak Ada" ; harga = 0; break;
        }
	}
	
	void snack() {
		cout << "+===========================================+" << endl;
		cout << "| 1. Kentang Goreng               Rp. 8000  |" << endl;
		cout << "| 2. Cireng Pedas (3pcs)          Rp. 6000  |" << endl;
		cout << "| 3. Tempe Mendoan (2pcs)         Rp. 3000  |" << endl;
		cout << "| 4. Tahu Walik (3pcs)            Rp. 5000  |" << endl;
		cout << "| 5. Bakso Goreng                 Rp. 5000  |" << endl;
		cout << "+===========================================+" << endl;
		cout << "Pilih Menu: ";
		cin >> pilih;
		
		switch(pilih) {
            case 1: item = "Kentang Goreng"; harga = 8000; break;
            case 2: item = "Cireng Pedas (3pcs)"; harga = 6000; break;
            case 3: item = "Tempe Mendoan (2pcs)"; harga = 3000; break;
            case 4: item = "Tahu Walik (3pcs)"; harga = 5000; break;
            case 5: item = "Bakso Goreng "; harga = 5000; break;
            default: item = "Menu Tidak Ada"; harga = 0; break;
        }
	}
	
	void minuman() {
		cout << "+===========================================+" << endl;
		cout << "| 1. Air Putih                    Rp. 2000  |" << endl;
		cout << "| 2. Es Teh                       Rp. 4000  |" << endl;
		cout << "| 3. Ekstra Jos Susu              Rp. 7000  |" << endl;
		cout << "| 4. Nutrisari                    Rp. 4000  |" << endl;
		cout << "| 5. Kopi                         Rp. 5000  |" << endl;
		cout << "+===========================================+" << endl;
		cout << "Pilih Menu: ";
		cin >> pilih;
		
		switch(pilih) {
            case 1: item = "Air Putih"; harga = 2000; break;
            case 2: item = "Es Teh"; harga = 4000; break;
            case 3: item = "Ekstra Jos Susu"; harga = 7000; break;
            case 4: item = "Nutrisari"; harga = 4000; break;
            case 5: item = "Kopi"; harga = 5000; break;
            default: item = "Menu Tidak Ada"; harga = 0; break;
        }
	}
	
	void tampilkanPesanan() {
        if (harga > 0) {
            cout << "+============ Ringkasan Pesanan ==============+" << endl;
            cout << "- Pesanan	: " << item << endl;
            cout << "- Harga  	: Rp. " << harga << endl;
            cout << "+=============================================+" << endl;
        } else {
            cout << "\nPilihan tidak tersedia." << endl;
        }
    }

};

int main() {
	Proses p;
	
	p.pilihMenu();
	
	if (p.menu == 1) {
		p.makanan();
	} else if (p.menu == 2)  {
		p.snack();
	} else {
		p.minuman();
	}
	
	p.tampilkanPesanan();
	
	return 0;
	
}
