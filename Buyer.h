#pragma once

class Buyer
{
private :
  int buyerID;
  char buyerName[20];
  char buyerEmail[35];
  char buyerContactNo[10];
  
public :
  void setBDetails(int bID, const char bName[], const char bEmail [],const char bContact []);
  void viewBDetails();
  void viewLDetails();
  void viewAppDetails();

};