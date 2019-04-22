// Предметна область   -   Агенство обміну і продажу нерухомості.
// Розв'язувані задачі -  видача довідок про характеристики нерухомості.
//                        (наприклад, район, площа квартири, кількість кімнат, поверх, ціна, адреса тощо),
//                        і заявки клієнтів (обмін, купівля або продаж, адреса і телефон, дата заявки).
// Реалізувати наступні сервіси: 
//                               Заповнення бази даних
//                               Перегляд даних про всі заявки
//                               Доповнення бази даних
//                               Видалення із бази даних
// Упорядкування по полях :   ПІБ клієнтів, площа квартир
// Пошук :   координати клієнта по прізвищу, по номеру телефона
// Вибірка : N - кімнатні квартири не на першому поверсі;
//           квартири площею від АА до ВВ у районі СС
// 	         Обчислення : середня ціна трикімнатної квартири; сумарне число заявок по районах міста
// 	         Корекція : видалення зведень про виконані заявки;
//           зміна ціни квартири заданого клієнта з ХХ на УУ
// 	         Табличний звіт : список квартир; груповання по районах і кількості кімнат
// 	         Додаткові вимоги : дата заявки не повинна бути пізніше поточного числа,
// 	         а ПІБ і адреса клієнта - не порожніми значеннями.
// 	         Для обробки даних скористатися динамічним масивом покажчиків на структури 
// 	         відповідного типу.

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
	
void SwapData(Address& data1, Address& data2) // ф-я для зміни місцями даних (для використання у ф-ях сортування)
{
	Address tempData;

	tempData.city = data1.city;
	tempData.district = data1.district;
	tempData.street = data1.street;
	tempData.houseNumber = data1.houseNumber;
	tempData.flatNumber = data1.flatNumber;
	tempData.roomsAmount = data1.roomsAmount;
	tempData.area = data1.area;
	tempData.floor = data1.floor;
	tempData.telNumber = data1.telNumber;
	tempData.ownersName = data1.ownersName;
	tempData.ownersSurname = data1.ownersSurname;

	data1.city = data2.city;
	data1.district = data2.district;
	data1.street = data2.street;
	data1.houseNumber = data2.houseNumber;
	data1.flatNumber = data2.flatNumber;
	data1.roomsAmount = data2.roomsAmount;
	data1.area = data2.area;
	data1.floor = data2.floor;
	data1.telNumber = data2.telNumber;
	data1.ownersName = data2.ownersName;
	data1.ownersSurname = data2.ownersSurname;

	data2.city = tempData.city;
	data2.district = tempData.district;
	data2.street = tempData.street;
	data2.houseNumber = tempData.houseNumber;
	data2.flatNumber = tempData.flatNumber;
	data2.roomsAmount = tempData.roomsAmount;
	data2.area = tempData.area;
	data2.floor = tempData.floor;
	data2.telNumber = tempData.telNumber;
	data2.ownersName = tempData.ownersName;
	data2.ownersSurname = tempData.ownersSurname;
}

void CopyAddress(Address& data1, Address data2) // копіює дані з одної змінної Address в іншу //ф-я для перезаписування(зміни) даних
{
	data1.city = data2.city;
	data1.district = data2.district;
	data1.street = data2.street;
	data1.houseNumber = data2.houseNumber;
	data1.flatNumber = data2.flatNumber;
	data1.roomsAmount = data2.roomsAmount;
	data1.area = data2.area;
	data1.floor = data2.floor;
	data1.telNumber = data2.telNumber;
	data1.ownersName = data2.ownersName;
	data1.ownersSurname = data2.ownersSurname;
}

void AddNewAddress (Address *&arrData, Address data) // Address *&arrData - вказівник на посилання масиву адрес  // Address data - параметр для введення нової адреси
{
	Address* newData = new Address[SIZE + 1];
	for (int i = 0; i < SIZE; i++)
	{
		CopyAddress(newData[i], arrData[i]);
	}
	CopyAddress(newData[SIZE], data);

	delete[] arrData;
	arrData = newData;
	SIZE++;
}

void RemoveAddressFromList(Address*& arrData, int index)
{
	Address* newData = new Address[SIZE - 1];

	for (int i = 0; i < index; i++)
	{
		CopyAddress(newData[i], arrData[i]);
	}
	for (int i = index + 1; i < SIZE; i++)
	{
		CopyAddress(newData[i - 1], arrData[i]);
	}

	delete[] arrData;
	arrData = newData;
	SIZE--;
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

	Address tempdata;
	cout << "Enter the name of the city: ";
	cin >> tempdata.city;
	cout << "Enter the district: ";
	cin >> tempdata.district;
	cout << "Enter the street: ";
	cin >> tempdata.street;
	cout << "Enter a house Number: ";
	cin >> tempdata.houseNumber;
	cout << "Enter flatNumber: ";
	cin >> tempdata.flatNumber;
	cout << "Enter rooms Amount: ";
	cin >> tempdata.roomsAmount;
	cout << "Enter the area: ";
	cin >> tempdata.area;
	cout << "Enter the floor: ";
	cin >> tempdata.floor;
	cout << "Enter the Telephone Number: ";
	cin >> tempdata.telNumber;
	cout << "Enter the Owner's Name: ";
	cin >> tempdata.ownersName;
	cout << "Enter the Owner's Surname: ";
	cin >> tempdata.ownersSurname;
	AddNewAddress (data, tempdata);
	PrintAddress(data);

	////////////Remove address////////////
	int index = 0;
	cout << " Enter index of data you want to delete:   " << endl;
	cin >> index;
	RemoveAddressFromList(data, index);
	PrintAddress(data);

	delete[]data;
	system("pause");
	return 0;
}