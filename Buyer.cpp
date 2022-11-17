#include "Buyer.h"
#include "Appointment.h"
#include <cstring>
#include <iostream>
using namespace std;

void Buyer::setBDetails(int bID, const char bName[], const char bEmail [],const char bContact [])
{
	buyerID = bID;
	strcpy_s(buyerName,bName);
	strcpy_s(buyerEmail, bEmail);
	strcpy_s(buyerContactN, bContact);
}

void Buyer::viewBDetails()
{
	cout << "Buyer ID = " << buyerID << endl;
	cout << "Buyer Name = " << buyerName << endl;
	cout << "Buyer Email = " << buyerEmail << endl;
	cout << "Buyer Contact Number = " << buyerContactN << endl << endl;
}

void Buyer::viewLDetails()
{
  cout << "Land ID = " << landID << endl;
	cout << "Land Location = " << landLocation << endl;
	cout << "Land Price = " << landPrice << endl;
	cout << "Land Size = " << landContactN << endl << endl;
}

void Buyer::viewAppDetails()
{
}