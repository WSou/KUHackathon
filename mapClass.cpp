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
      tileState[i][j] = rand() % 3;
    }
  }
}

int layout::mapInfo(int xCoord, int yCoord)
{

}

void layout::mapDraw()
{

  for(int i = 0; i < 19; i++)
  {
    for(int j = 0; j < 19; j++)
    {
      int x = tileState[i][j];
      if (x == 0)
      {
        std::cout << "-";
      }
      else if (x == 1)
      {
        std::cout << "+";
      }
      else if (x == 2)
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
