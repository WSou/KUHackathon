#include <iostream>
#include <string>

class layout
{
private:
  int mapArray[9][9];
  int tileState[9][9];
  string tileDesc[9][9];
  bool revealed[9][9];
public:
  void mapGen();
  int mapInfo(int xCoord, int yCoord);
  void mapDraw();
  void locationReturn(int xCoord, int yCoord);
};
