#include "mapClass.hpp"
#include <cstdlib>
#include <ctime>

void layout::mapGen()
{
  srand(time(0));

  for(int i = 0; i < 18; i++)
  {
    for(int j = 0; j < 18; j++)
    {
      mapArray[i][j] = rand() % 100 + 1;
      tileState[i][j] = rand() % 8 + 1;
    }
  }
}

int layout::mapInfo(int xCoord, int yCoord)
{
  return tileState[xCoord][yCoord];
}

void layout::mapDraw()
{

  for(int i = 0; i < 19; i++)
  {
    for(int j = 0; j < 19; j++)
    {
      int x = tileState[i][j];
      if (x < 5)
      {
        std::cout << "-";
      }
      else if (x >= 5 && x <=6)
      {
        std::cout << "+";
      }
      else if (x > 6)
      {
        std::cout << "x";
      }


      if (j == 18)
      {
        std::cout << "\n";
      }
    }
  }
}
