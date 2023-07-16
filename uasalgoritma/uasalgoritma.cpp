#include <iostream>
#include <string>
using namespace std;

class Program {
	int FRONT, REAR, max = 100;
	int queue_array[100];

public:
	Program() {
		FRONT = -1;
		REAR = -1;
	}
};
const int MAX_MAHASISWA = ;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 100;

//
void tambahMahasiswa() {
	int NIM;
	cout << "Enter a number: ";
	cin >> NIM;
	cout << endl;
	
	if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
		cout << "\nQueue overflow\n";
		return;
	}

	if (FRONT == -1) {
		FRONT = 0;
		REAR = 0;
	}

	else {
		//jika REAR berada di posisi terakhir array, kembali ke awal array
		if (REAR == max - 1)
			REAR = 0;
		else
			REAR = REAR + 1;
	}
void tampilkanSemuaMahasiswa();
//
void algoritmacariMahasiswaByNIM;
//
void algoritmaSortByTahunMasuk();


int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();

		switch (pilihan) {
		case 1: {
			pilihan.insert();
			break;
		}
		case 2: {
			pilihan.display();
			break;
		}
		case 3: {
			pilihan.search();
			break;
		}
		case 4: {
			pilihan.traverse();
			break;
		}
		case 5:{
			pilihan.exit();
			break;


			cout << "Terima kasih! Program selesai." << endl;
			break;
		default: 
			cout << "Pilihan tidak valid. silakan coba lagi. " << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}




// 2. Queues 
// 3. perbedaan stack dan queue:
//		a. stack :  - menyimpan data dengan ditumpuk seperti bola tenis lapangan 
//					- penyimpanan menggunakan Last in first out (LIFO)
//		b. Queue :  - menyimpan data dengan antrian, permintaan yang datang terlebih dahulu maka yang pertama akan diproses
//					- penyimpanan menggunakan First In First Out (FIFO)
// 4. 
// 5.	a. kedalaman 5 
//		b. menggunakan postorder traversal (anak kiri, anak kanan, root)
