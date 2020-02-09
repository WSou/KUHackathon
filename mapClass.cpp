#include "mapClass.hpp"
#include <cstdlib>
#include <ctime>

void layout::mapGen()
{
  srand(time(0));

  for(int i = 0; i < 8; i++)
  {
    for(int j = 0; j < 8; j++)
    {
      mapArray[i][j] = rand() % 10 + 1;
      std::cout <<mapArray[i][j] <<std::endl;
      tileState[i][j] = rand() % 8 + 1;
      tileDesc[j];
      std::cout <<tileDesc[j]<<std::endl;
      std::cout <<tileState[i][j] <<std::endl;
    }
  }
  mapArray[5][5] = 0;
}

int layout::mapInfo(int xCoord, int yCoord)
{
  return tileState[xCoord][yCoord];
}

void layout::mapDraw()
{

  for(int i = 1; i < 8; i++)
  {
    for(int j = 1; j < 8; j++)
    {
      int x = tileState[i][j];
      if (x < 5)
      {
        std::cout << "-";
      }
      else if (x >= 5 && x <=7)
      {
        std::cout << "+";
      }
      else if (x > 8)
      {
        std::cout << "x";
      }
      encName[x];
      std::cout <<encName[x] <<std::endl;


      if (j == 8)
      {
        std::cout << "\n";
      }
    }
  }
}

std::string layout::locationReturn(int xCoord, int yCoord)
{
  return " ";
}
