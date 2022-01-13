

// NOTE Enter your name and two number seprate, first number from 1 to 4, and second from 1 to 2.//


#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <ctype.h>
#include <ctime>

using namespace std;

class Accident {
public:
    virtual void attack() = 0;
};

class Scorpion : public Accident {
public:
    void attack() {
        std::cout << "Scorpion has bitten you!\n" << endl;
    }
};
class Storm : public Accident {
public:
    void attack() {
        std::cout << "Your plain felt into storm!\n" << endl;
    }
};
class Car : public Accident {
public:
    void attack() {
        std::cout << "Your car went out of fuel on highway between Berlin and Warclawa!\n" << endl;
    }
};
class Train : public Accident {
public:
    void attack() {
        std::cout << "Your train has stoped somewhere in Sibir\n" << endl;
    }
};

int main()
{
    string username, a, b, c, d;
    char x;
    int trip, v, battle, battle1, battle2,
        battle3, e;
    std::cout << "This is a simple game in c++, hope you'll enjoy it.\nFor start enter your name, and two numbers.\nFirst in range from 1 to 4.\nSecond in range from 1 to 2.\n";
    std::cout << "Enter your name:\n";
    cin >> username;
    std::cout << "Enter first number:\n";
    cin >> v;
    std::cout << "Enter second number:\n";
    cin >> e;
    std::cout << username << "\n" << "Let us go to a trip shall we?\n" << endl;
    std::cout << "We will enter a first character of your name\n";
    a = "USA";
    b = "EUROPE";
    c = "AFRICA";
    d = "LATIN AMERICA";
    int g = username.length();
    for (int x = 0; x < 1; x++) {

       if(isalpha(username[x]))
        {

            srand(time(0));

            int Random_number = rand() % 4 + 1;
            int Random_number1 = rand() % 4 + 1;

            if (Random_number == Random_number1 && Random_number1 < 4) {
                Random_number1++;
            }
            else if (Random_number == Random_number1 && Random_number1 == 4) {
                Random_number1--;
            }
            if (Random_number == 1) {
                std::cout << "You are from\n" << a << endl;
            }
            else if (Random_number == 2) {
                std::cout << "You are from\n" << b << endl;
            }
            else if (Random_number == 3) {
                std::cout << "You are from\n" << c << endl;
            }
            else if (Random_number == 4) {
                std::cout << "You are from\n" << d << endl;
            }
            if (Random_number1 == 1) {
                std::cout << "Your trip destination is\n" << a << endl;
            }
            else if (Random_number1 == 2) {
                std::cout << "Your trip destination is\n" << b << endl;
            }
            else if (Random_number1 == 3) {
                std::cout << "Your trip destination is\n" << c << endl;
            }
            else if (Random_number1 == 4) {
                std::cout << "Your trip destination is\n" << d << endl;
            }


            Scorpion s;
            Storm st;
            Car c1;
            Train t;
            Accident* a1 = &s;
            Accident* a2 = &st;
            Accident* a3 = &c1;
            Accident* a4 = &t;

            std::cout << "Let us see how your jurney ends\n" << endl;
            std::cout << "Enter a number from 1 to 4,\n" << endl;
            trip = v;
            {switch (trip) {
            case 1:
                a1->attack();
                std::cout << "You have four houres to find a hospital, there is one nearby.\n" << endl;
                std::cout << "You have to decide to wait and call the hospital or to go to hospital? 1 or 2?\n" << endl;
                battle = e;
                {
                    switch (battle) {
                    case 1:
                        std::cout << "You decided to go to hospital you did make it ;).\n" << endl;
                        break;
                    case 2:
                        std::cout << "You decided to wait them to come but it pass houres before they come and you pass out." << "\n" << "Fortunattly they come in the last moment to save you\n" << endl;
                        break;
                    }
                    break;
                }
            case 2:
                a2->attack();
                std::cout << "The pilot and his team asure you that the nearby airport will accepte your request for landing.\n" << endl;
                std::cout << "The crew starts to panic. Eventually crew fall apart. In which crew would you be? 1 or 2?\n" << endl;
                battle1 = e;
                {
                    switch (battle1) {
                    case 1:
                        std::cout << "You went into first part of crew that decides to jump out of plain." << "\n" << "Don't worry you did survive with some broken bones :(.\n" << endl;
                        break;
                    case 2:
                        std::cout << "You went into second group that decides to stay in plain." << "\n" << "Well that was a smart choice because you did get to the airport ;).\n" << endl;
                        break;
                    }
                    break;
                }
            case 3:
                a3->attack();
                std::cout << "You find out in your phone in google maps that there is a nearby a fuel station.\n" << endl;
                std::cout << "You start to walk. After a mile you find out a bridge that is closed. You have two tracks that leads from the bridge.\n" << endl;
                std::cout << "Which way will you choose 1 or 2?\n" << endl;
                battle2 = e;
                {
                    switch (battle2) {
                    case 1:
                        std::cout << "After you have choose first track you get lost in the wood. Sorry :(.\n" << endl;
                        break;
                    case 2:
                        std::cout << "After you have choose second track, after a few miles you have found the gas station. See yout effort did work out well ;).\n" << endl;
                        break;
                    }
                    break;
                }
            case 4:
                a4->attack();
                std::cout << "You start to hear some weird noise that come from outdoor.Passengers start to panic.\n" << endl;
                std::cout << "The passengers decided that it's up to you to check it out.You have two ways, which way will you choose 1 or 2?\n" << endl;
                battle3 = e;
                {
                    switch (battle3) {
                    case 1:
                        std::cout << "Your train felt into snow storm, so you're hearing wind in the branches. Don't worry ;).\n" << endl;
                        break;
                    case 2:
                        std::cout << "Your train felt into ambush of wearwolfs be aweare that you have no way out. Sorry :(.\n" << endl;
                        break;
                    }
                    break;
                }
            }
            }
        } 
        else
        std::cout << "Name is not valid.";
    }
 };

