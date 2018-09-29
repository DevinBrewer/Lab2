// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list:  " << cows << " Size: " << cows.getSum() << endl;
	cout << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list:  " << cows << " Size: " << cows.getSum() << endl;
	cout << endl;

	cows.removeFirst();
	cout << "cows list:  " << cows << " Size: " << cows.getSum() << endl;
	cout << endl;

	List horses(cows);
	cout << "cows list:  " << cows << " Size: " << cows.getSum() << endl;
	cout << "horses list:  " << horses << " Size: " << horses.getSum() << endl;
	cout << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list:  " << cows << " Size: " << cows.getSum() << endl;
	cout << "horses list:  " << horses << " Size: " << horses.getSum() << endl;
	cout << endl;

	List pigs;
	cout << "cows list:  " << cows << " Size: " << cows.getSum()<< endl;
	cout << "horses list:  " << horses << " Size: " << horses.getSum() << endl;
	cout << "pigs list:  " << pigs << " Size: " << pigs.getSum() << endl;
	cout << endl;

	pigs = cows;
	cout << "cows list:  " << cows << " Size: " << cows.getSum() << endl;
	cout << "horses list:  " << horses << " Horses: " << horses.getSum() << endl;
	cout << "pigs list:  " << pigs << " Size: " << pigs.getSum() << endl;
	cout << endl;

	pigs = horses;
	cout << "cows list:  " << cows << " Size: " << cows.getSum() << endl;
	cout << "horses list:  " << horses << " Size: " << horses.getSum() << endl;
	cout << "pigs list:  " << pigs << " Size: " << pigs.getSum() << endl;
	cout << endl;

	cout << "End of code" << endl;

	return 0;
}
