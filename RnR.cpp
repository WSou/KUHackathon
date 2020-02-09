// Low earn no repercussions
if (){
    condition = "You babysit as a side gig. you earned $1000!";
    money += 1000;
}
if (){
    condition = "You did some labor work and got paid in cash";
    money += 2000;
}
if (){
    condition = "You bartended. You earned $1000!";
    money += 1500;
}
if (){
    Condition = "It's Tax time!"
    switch(money)
    {
        case money <= 10000: 
        money = money * 0.9;
        break;
        case money > 10000 && Money <= 20000: 
        money = money * 0.85;
        break;
        case money > 20000 && Money <= 30000:
        money = money * 0.8;
        break;
        case money > 30000 && Money <= 40000:
        money = money * 0.75;
        break;
        case money > 40000
        money = money * 0.7;
        break;
    }
    cout << "You now have " <<money <<"!\n";
    break;
}
//used this for tax stuff
if (){
    double Earn = 5000;
    switch(money)
    {
        case money <= 10000: 
        Earn = Earn * .9;
        money = money + Earn;
        break;
        case money > 10000 && Money <= 20000: 
        Earn = Earn * .85;
        money = money + Earn;
        break;
        case money > 20000 && Money <= 30000:
        Earn = Earn * .80;
        money = money + Earn;
        break;
        case money > 30000 && Money <= 40000:
        Earn = Earn * .75;
        money = money + Earn;
        break;
        case money > 40000
        Earn = Earn * .70;
        money = money + Earn;
        break;
    }
    condition = "Work at a minimum wage job. You have earned 5000! But due to income taxes"
    "You now earned" <<Earn;
}

// Risk and Reward
if (){
    Condition = "An old traveler walked up to you and asked for money in exchange for a\n"
     "lottery ticket. Would you like to give him 500 for a chance to win 20,000?\n"
     "Enter (y/n)";
     string ticket;
     cin >> ticket;
     switch(ticket)
     {
         case y or Y:
         //random change of winning
         case n or N:
         break;
         default:
         cout << "The old traveler fleed away";
         break;
     }
break;
}

if(){
    Condition = "There's a great opportunity for you to start your own money! You will losses 3 turns\n"
    "but will gain a constant income of 1000"
    "Enter (y/n)";
     string ticket;
     cin >> ticket;
     switch(ticket)
     {
         case y or Y:
         otherIncome += 1000;
         turn -= 5;
         case n or N:
         break;
         default:
         cout << "You missed the opportunity!";
         break;
     }
     break;
}
if(){
    Condition = "This is your time to work on a code for 2 years! You will losses 2 turns\n"
    "but will win 1000 in a competition."
    "Learn to code (y/n)?";
     string ticket;
     cin >> ticket;
     switch(ticket)
     {
         case y or Y:
         otherIncome += 1000;
         turn -= 5;
         case n or N:
         break;
         default:
         cout << "You missed the opportunity!";
         break;
     }
     break;
}
if(){
    Condition = "This is your chance to become a Youtuber! You will losses 3 turns\n"
    "but will gain a constant income of 1000"
    "Become a Youtuber (y/n)?";
     string ticket;
     cin >> ticket;
     switch(ticket)
     {
         case y or Y:
         otherIncome += 1000;
         turn -= 3;
         case n or N:
         break;
         default:
         cout << "You missed the opportunity!";
         break;
     }
     break;
}
if(){
    Condition = "This is your chance to follow your dream! You will losses 5 turns\n"
    "but will gain a constant income of 3000"
    "Become a Youtuber (y/n)?";
     string ticket;
     cin >> ticket;
     switch(ticket)
     {
         case y or Y:
         otherIncome += 3000;
         turn -= 5;
         case n or N:
         break;
         default:
         cout << "You missed the opportunity!";
         break;
     }
     break;
}