// ��������� �������   -   �������� ����� � ������� ����������.
// ����'������� ������ -  ������ ������ ��� �������������� ����������.
//                        (���������, �����, ����� ��������, ������� �����, ������, ����, ������ ����),
//                        � ������ �볺��� (����, ������ ��� ������, ������ � �������, ���� ������).
// ���������� �������� ������: 
//                               ���������� ���� �����
//                               �������� ����� ��� �� ������
//                               ���������� ���� �����
//                               ��������� �� ���� �����
// ������������� �� ����� :   ϲ� �볺���, ����� �������
// ����� :   ���������� �볺��� �� �������, �� ������ ��������
// ������ : N - ������� �������� �� �� ������� ������;
//           �������� ������ �� �� �� �� � ������ ��
// 	         ���������� : ������� ���� ���������� ��������; ������� ����� ������ �� ������� ����
// 	         �������� : ��������� ������� ��� �������� ������;
//           ���� ���� �������� �������� �볺��� � �� �� ��
// 	         ��������� ��� : ������ �������; ���������� �� ������� � ������� �����
// 	         �������� ������ : ���� ������ �� ������� ���� ������ ��������� �����,
// 	         � ϲ� � ������ �볺��� - �� ��������� ����������.
// 	         ��� ������� ����� ������������ ��������� ������� ��������� �� ��������� 
// 	         ���������� ����.

#include <iostream>
#include <string>
using namespace std;
int SIZE = 9;
struct Address {
	string city;
	string district;
	string street;
    int houseNumber;
	int flatNumber;
	int roomsAmount;
	int area;
	int floor;
	string telNumber;
	string ownersName;
	string ownersSurname;
	void ShowAddress() {
		cout << "\n City:              " << city << "\n District:          " << district << "\n Street:            " << street << "\n House number:      " << houseNumber;
		cout << "\n Flat Number:       " << flatNumber << "\n Amount of rooms:   " << roomsAmount << "\n Area:              " << area << "\n Floor:             " << floor;
		cout << "\n Telephone number:  " << telNumber << "\n Owner:             " << ownersName << "   " << ownersSurname; 
	}
};

void FillAddress(Address*& data) {
	data[0].city = "Rivne";
	data[0].district = "Northern district";
	data[0].street = "Shuhevych street ";
	data[0].houseNumber = 2;
	data[0].flatNumber = 25;
	data[0].roomsAmount = 1;
	data[0].area = 40;
	data[0].floor = 2;
	data[0].telNumber = "067-555-45-45";
	data[0].ownersName = "Bohdan";
	data[0].ownersSurname = "Burulka";

	data[1].city = "Rivne";
	data[1].district = "Northern district";
	data[1].street = "Shuhevych street ";
	data[1].houseNumber = 10;
	data[1].flatNumber = 35;
	data[1].roomsAmount = 3;
	data[1].area = 82;
	data[1].floor = 5;
	data[1].telNumber = "067-444-45-45";
	data[1].ownersName = "Petryk";
	data[1].ownersSurname = "Piatochkin";

	data[2].city = "Rivne";
	data[2].district = "Northern district";
	data[2].street = "Melnyka street ";
	data[2].houseNumber = 15;
	data[2].flatNumber = 115;
	data[2].roomsAmount = 3;
	data[2].area = 75;
	data[2].floor = 3;
	data[2].telNumber = "067-545-45-45";
	data[2].ownersName = "Viktoriia";
	data[2].ownersSurname = "Barabashka";

	data[3].city = "Rivne";
	data[3].district = "Chaika";
	data[3].street = "Haharin street";
	data[3].houseNumber = 35;
	data[3].flatNumber = 46;
	data[3].roomsAmount = 1;
	data[3].area = 40;
	data[3].floor = 2;
	data[3].telNumber = "067-333-11-22";
	data[3].ownersName = "Anna";
	data[3].ownersSurname = "Anisimova";

	data[4].city = "Rivne";
	data[4].district = "Chaika";
	data[4].street = "Bohoiavlenska street ";
	data[4].houseNumber = 33;
	data[4].flatNumber = 18;
	data[4].roomsAmount = 2;
	data[4].area = 54;
	data[4].floor = 3;
	data[4].telNumber = "067-222-22-22";
	data[4].ownersName = "Iryna";
	data[4].ownersSurname = "Pavlova";

	data[5].city = "Rivne";
	data[5].district = "Chaika";
	data[5].street = "Bohoiavlenska street ";
	data[5].houseNumber = 22;
	data[5].flatNumber = 30;
	data[5].roomsAmount = 2;
	data[5].area = 48;
	data[5].floor = 4;
	data[5].telNumber = "067-222-11-11";
	data[5].ownersName = "Myhailo";
	data[5].ownersSurname = "Kozhumiaka";

	data[6].city = "Rivne";
	data[6].district = "Center";
	data[6].street = "Soborna street ";
	data[6].houseNumber = 28;
	data[6].flatNumber = 14;
	data[6].roomsAmount = 2;
	data[6].area = 50;
	data[6].floor = 3;
	data[6].telNumber = "095-222-22-22";
	data[6].ownersName = "Lys";
	data[6].ownersSurname = "Mykyta";

	data[7].city = "Rivne";
	data[7].district = "Center";
	data[7].street = "Drahomanov street ";
	data[7].houseNumber = 12;
	data[7].flatNumber = 25;
	data[7].roomsAmount = 1;
	data[7].area = 40;
	data[7].floor = 3;
	data[7].telNumber = "050-888-25-25";
	data[7].ownersName = "Andrii";
	data[7].ownersSurname = "Velgun";

	data[8].city = "Rivne";
	data[8].district = "Center";
	data[8].street = "Chornovol street";
	data[8].houseNumber = 1;
	data[8].flatNumber = 15;
	data[8].roomsAmount = 3;
	data[8].area = 80;
	data[8].floor = 4;
	data[8].telNumber = "095-222-22-22";
	data[8].ownersName = "Sophiia";
	data[8].ownersSurname = "Duma";
}

void PrintAddress(Address* data) {
	for (int i = 0; i < SIZE; i++) {
		data[i].ShowAddress();
		cout << "\n===============================================" << endl;
	}
	}
	

int main() {
	
	Address* data = new Address[SIZE];
	string city;
	string district;
	string street;
	int houseNumber;
	int flatNumber;
	int roomsAmount;
	int area;
	int floor;
	FillAddress(data);
	PrintAddress(data);
	delete[]data;
	system("pause");
	return 0;
}