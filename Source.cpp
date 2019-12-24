#pragma warning (disable : 4996)
#include <iostream>
#include <conio.h>

using namespace std;

/*
	
	Encapsulation (Enkapsulasi) adalah merupakan suatu cara penyembunyian informasi dari suatu class program.
	Hal ini dimaksudnya untuk menjaga suatu proses program agar tidak dapat diakses sembarangan oleh program lain.
	Untuk menerapkan konsel enkapsulasi dalam suatu program perlu digunakan akses modifier. Terdapat 3 akses modifier 
	di C++, yaitu Private, Protected dan Public.

	Apabila member yang terdapat di dalam class menggunakan Private, maka member tersebut hanya dapat diakses oleh 
	class itu sendiri. Apabila member yang terdapat di dalam class menggunakan Protected, maka member tersebut hanya dapat
	diakses oleh class itu sendiri dan juga class turunannya. Protected biasanya digunakan untuk pewarisan sifat.
	Dan untuk akses modifier Public menandakan bahwa member yang terdapat di dalam class tersebut dapat di akses oleh
	class manapun. Jika kita tidak memberikan access modifer pada variabel, maka seacra otomatis akses yang diberikan 
	adalah Private.

	Untuk mengatur nilai-nilai yang terdapat dalam atribut (variabel), kita dapat menggunakan constructor atau fungsi 
	yang bernama Setter dan Getter.
	
	Encapsulation adalah sebuah konsep Object Oriented Programming digunakan untuk membungkus data dan fungsi, 
	untuk menjaga tetap terjaga agar tidak adanya penyalahgunaan. Konsep encapsulation menyebabkan sebuah konsep OOP 
	yang bernama “Abstraction” atau “Data Hiding”. 
	
	Encapsulation adalah sebuah teknik untuk membuat antar muka dan menyembunyikan mekanisme atau isi secara menyeluruh 
	terhadap pengguna, dengan hal itu pengguna tidak diperbolehkan untuk mengakses data yang disembunyikan secara langsung,
	tapi bisa menggunakan dan memahami dengan mudah berdasarkan antar muka yang telah disediakan.


*/


class Mobil 
{
private:
	char PlatNomor[100];
	char Warna[100];
	int Kecepatan;

public:
	void Berjalan()
	{
		cout << "Mobil Berjalan" << endl;
	}

	//Setter
	void setPlatNomor(char PlatNomor[100])
	{
		strcpy(this->PlatNomor, PlatNomor);
	}
	
	void setWarna(char W[100])
	{
		strcpy(Warna, W);
	}
	
	void setKecepatan(int K)
	{
		Kecepatan = K;
	}
	
	//Getter
	char *getPlatNomor()
	{
		return PlatNomor;
	}

	char *getWarna()
	{
		return Warna;
	}

	int getKecepatan()
	{
		return Kecepatan;
	}

	Mobil ();
	~Mobil ();
};

Mobil ::Mobil ()
{
}

Mobil ::~Mobil ()
{
}

int main()
{
	//Objek
	Mobil Mobil_WakBu;
	
	Mobil_WakBu.setPlatNomor("BK1234XYZ");
	Mobil_WakBu.setWarna("Merah");
	Mobil_WakBu.setKecepatan(50);

	cout << Mobil_WakBu.getPlatNomor() << endl;
	cout << Mobil_WakBu.getWarna() << endl;
	cout << Mobil_WakBu.getKecepatan() << endl;

	_getch();
	return 0;
}