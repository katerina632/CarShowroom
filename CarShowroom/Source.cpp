#include"CarShowroom.h"
int main() {
	CarShowroom cs1;
	cs1.AddCar(Car("Audi", 2007, 12000, 2.5));
	cs1.AddCar(Car("BMW", 2015, 25000, 4));
	cs1.AddCar(Car("Jaguar", 2019, 40000, 3.5));
	cs1.AddCar(Car("Bugatti", 2017,70000, 3.8));

	cs1.Show();
	cout << "\nSearch by volume:\n";
	cs1.SearchByVolume(2.5);
	cout << "\nSearch by model:\n";
	cs1.SearchByModel("Audi");
	cout << "\nSearch by price:\n";;
	cs1.SearchByPrice(40000);
	cout << "\nSearch by year:\n";
	cs1.SearchByYear(2017);
	cout << "\nDelete:\n";
	cs1.Delete(2);
	cs1.Show();
	cout << "\nSort by model:\n";
	cs1.SortByModel();
	cs1.Show();
	cout << "\nSort by volume:\n";
	cs1.SortByVolume();
	cs1.Show();
	cout << "\nSort by price:\n";
	cs1.SortByPrice();
	cs1.Show();
	cout << "\nSort by year:\n";
	cs1.SortByYear();
	cs1.Show();
	return 0;
}