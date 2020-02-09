#include <iostream>
#include <string>

class layout
{
private:
  int mapArray[9][9];
  int tileState[9][9];
  bool revealed[9][9];
  std::string tileDesc[9] = {"Money Village","Mall Street","Bank of Money","Capital Two Mountain","Oak Industry","Getsla Company","Doogle University","GoGoDuck Farm","ShouldersBook Forest"};
  std::string encounterName[9] = {"Elon Musky","Star Patrick","Obama Care","Yaylor Swooft","Devaughn James", "Cristiano Tomato","Charlie Putin","Lady Dada","Mark MyWord"};
public:
  void mapGen();
  int mapInfo(int xCoord, int yCoord);
  void mapDraw();
  std::string locationReturn(int xCoord, int yCoord);
};
