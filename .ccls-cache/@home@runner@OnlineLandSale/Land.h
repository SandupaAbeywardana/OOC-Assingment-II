#pragma once

class Land
{
  private:
     int landID;
     char landLocation[20];
     int landPrice;
     char landSize[10];
  
  public:
    void setLDetails(int lID, const char lLocation[], int lPrice, const char lSize[]);
    void viewLDetails();

};