#pragma once
class Seller
{
private:
	int sellerID;
	char sellerName[20];
	char sellerEmail[35];
	char sellerContactN[10];

public:
	void setSDetails(int sID, const char sName[], const char sEmail[], const char sContact[]);
	void viewSDetails();
	void viewAppDetails();

};