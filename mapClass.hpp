#include <iostream>
#include <string>

class layout
{
private:
  int mapArray[19][19];
  int tileState[19][19];
  bool revealed[19][19];
public:
  void mapGen();
  int mapInfo(int xCoord, int yCoord);
  void mapDraw();
  void locationReturn(int xCoord, int yCoord);
};
