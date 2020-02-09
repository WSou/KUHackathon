#include <iostream>
#include <string>

class layout
{
private:
  int mapArray[9][9];
  int tileState[9][9];
  bool revealed[9][9];
  std::string tileDesc[9] = {"Money Village","Mall Street","Bank of Money","Capital Two Mountain","Oak Industry","Getsla Company",
                             "Doogle University","GoGoDuck Farm","ShouldersBook Forest"};
  std::string encName[9] = {"Elon Musky","Star Patrick","Obama Care","Yaylor Swooft","Devaughn James", "Cristiano Tomato","Charlie Putin"
                            ,"Lady Dada","Mark MyWord"};

  std::string posEvent[5] = {"You babysit as a side gig. you earned $1000!","You did some labor work and got paid in cash","You bartended."
                             "You earned $1000!","It's Tax time!","Work at a minimum wage job. You have earned 5000! But due to income taxes"};
   double posEventNum[5] = {1000,2000,1500,5000};        

  std::string neuEvent[3] = {"An old traveler walked up to you and asked for money in exchange for a\nlottery ticket. Would you like to give"
                              "him 500 for a chance to win 20,000?\n","There's a great opportunity for you to start your own company! You will" 
                              "losses 3 turns\nbut will gain a constant income of 1000\nEnter (y/n)","This is your chance to follow your dream!" 
                              "You will losses 5 turns\nbut will gain a constant income of 3000.\n Become a Youtuber (y/n)?"};

  std::string negEvent[5] = {"You are walking along the path and out of nowhere a thief pop up","You Is Dead. Like FR FR Dead DEAD","You were speeding "
                              "and got pulled over by a cop. You were fined 1000","Your car broke down cause it hates you. You have to pay 3000",
                              "While you were enjoying your vacation in hawaii. Your grandma appears from nowhere and beat you up. She stole 1000 from you"};
  double negEventNum[5] =   {-4000,0,-1000,-3000,-1000};
public:
  void mapGen();
  int mapInfo(int xCoord, int yCoord);
  void mapDraw();
  std::string locationReturn(int xCoord, int yCoord);
};
