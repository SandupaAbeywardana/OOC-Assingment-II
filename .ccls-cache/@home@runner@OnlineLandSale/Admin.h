#pragma once

class Admin
{
private:
  int adminID; 
  char adminPassword[20];

public:
	void viewBuyers();
  void viewSellers();
  void viewListings();

};