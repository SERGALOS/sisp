#include <iostream>
using namespace std;

class Titles
{
public:
	char brand[32];
	int size_h;	// размер в высоту
	int size_w;	// размер в ширину
	double price;
	void getData();
};
int main()
{
	setlocale(LC_ALL, "rus");

	Titles SaloniCeramica;
	strcpy_s(SaloniCeramica.brand, "SaloniCeramica");
	SaloniCeramica.size_h = 10;
	SaloniCeramica.size_w = 10;
	SaloniCeramica.price = 30;

	Titles PorcellanaDiRocca;
	strcpy_s(PorcellanaDiRocca.brand, "PorcellanaDiRocca");
	PorcellanaDiRocca.size_h = 20;
	PorcellanaDiRocca.size_w = 30;
	PorcellanaDiRocca.price = 25;

	SaloniCeramica.getData();
	PorcellanaDiRocca.getData();

	return 0;
}

void Titles::getData()
{
	cout << brand << ": " << size_h << 'x' << size_w << " _ " << price << "$" << endl;
};