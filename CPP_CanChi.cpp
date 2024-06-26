#include <iostream>
using namespace std;
int main()
{
	string can[10] = { "Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky" };
	string chi[12] = { "Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui" };
	cout << "nhap nam\n";
	int year; cin >> year;
	string cn = can[year % 10];
	string ci = chi[year % 12];
	cout << "ma can chi\a" << year << "la: " << can[year % 10] << " " << chi[year % 12];
	return 0;

}