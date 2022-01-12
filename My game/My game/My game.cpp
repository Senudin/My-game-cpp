

// NOTE Enter your name and two number seprate, first number from 1 to 4, and second from 1 to 2.//


#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Accident {
public:
    virtual void attack() = 0;
};

class Scorpion : public Accident {
public:
    void attack() {
        cout << "Scorpion has bitten you!\n" << endl;
    }
};
class Storm : public Accident {
public:
    void attack() {
        cout << "Your plain felt into storm!\n" << endl;
    }
};
class Car : public Accident {
public:
    void attack() {
        cout << "Your car went out of fuel on highway between Berlin and Warclawa!\n" << endl;
    }
};
class Train : public Accident {
public:
    void attack() {
        cout << "Your train has stoped somewhere in Sibir\n" << endl;
    }
};

int main()
{
    string username, a, b, c, d;
    char x;
    int trip, v, battle, battle1, battle2,
        battle3, e;
    cout << "Enter your name:\n";
    cin >> username;
    cin >> v;
    cin >> e;
    cout << username << "\n" << "Let us go to a trip shall we?\n" << endl;
    cout << "We will enter a first character of your name\n";
    a = "USA";
    b = "EUROPE";
    c = "AFRICA";
    d = "LATIN AMERICA";
    int g = username.length();
    for (int x = 0; x < 1; x++)
    {
        switch (username[x]) {
        case 'a':
        case 'A':
            cout << "You are from\n" << d << endl;
            cout << "Your trip destination is\n" << b << endl;
            break;
        case 'b':
        case 'B':
            cout << "You are from\n" << a << endl;
            cout << "Your trip destination is\n" << c << endl;
            break;
        case 'c':
        case 'C':
            cout << "You are from\n" << b << endl;
            cout << "Your trip destination is\n" << d << endl;
            break;
        case 'd':
        case 'D':
            cout << "You are from\n" << c << endl;
            cout << "Your trip destination is\n" << a << endl;
            break;
        case 'e':
        case 'E':
            cout << "You are from\n" << b << endl;
            cout << "Your trip destination is\n" << a << endl;
            break;
        case 'f':
        case 'F':
            cout << "You are from\n" << c << endl;
            cout << "Your trip destination is\n" << b << endl;
            break;
        case 'g':
        case 'G':
            cout << "You are from\n" << b << endl;
            cout << "Your trip destination is\n" << c << endl;
            break;
        case 'h':
        case 'H':
            cout << "You are from\n" << a << endl;
            cout << "Your trip destination is\n" << b << endl;
            break;
        case 'i':
        case 'I':
            cout << "You are from\n" << c << endl;
            cout << "Your trip destination is\n" << a << endl;
            break;
        case 'j':
        case 'J':
            cout << "You are from\n" << d << endl;
            cout << "Your trip destination is\n" << b << endl;
            break;
        case 'k':
        case 'K':
            cout << "You are from\n" << a << endl;
            cout << "Your trip destination is\n" << d << endl;
            break;
        case 'l':
        case 'L':
            cout << "You are from\n" << c << endl;
            cout << "Your trip destination is\n" << b << endl;
            break;
        case 'm':
        case 'M':
            cout << "You are from\n" << c << endl;
            cout << "Your trip destination is\n" << d << endl;
            break;
        case 'n':
        case 'N':
            cout << "You are from\n" << d << endl;
            cout << "Your trip destination is\n" << c << endl;
            break;
        case 'o':
        case 'O':
            cout << "You are from\n" << a << endl;
            cout << "Your trip destination is\n" << c << endl;
            break;
        case 'p':
        case 'P':
            cout << "You are from\n" << c << endl;
            cout << "Your trip destination is\n" << a << endl;
            break;
        case 'q':
        case 'Q':
            cout << "You are from\n" << c << endl;
            cout << "Your trip destination is\n" << a << endl;
            break;
        case 'r':
        case 'R':
            cout << "You are from\n" << c << endl;
            cout << "Your trip destination is\n" << a << endl;
            break;
        case 's':
        case 'S':
            cout << "You are from\n" << a << endl;
            cout << "Your trip destination is\n" << b << endl;
            break;
        case 't':
        case 'T':
            cout << "You are from\n" << c << endl;
            cout << "Your trip destination is\n" << b << endl;
            break;
        case 'u':
        case 'U':
            cout << "You are from\n" << d << endl;
            cout << "Your trip destination is\n" << a << endl;
            break;
        case 'v':
        case 'V':
            cout << "You are from\n" << d << endl;
            cout << "Your trip destination is\n" << b << endl;
            break;
        case 'w':
        case 'W':
            cout << "You are from\n" << b << endl;
            cout << "Your trip destination is\n" << a << endl;
            break;
        case 'x':
        case 'X':
            cout << "You are from\n" << c << endl;
            cout << "Your trip destination is\n" << d << endl;
            break;
        case 'y':
        case 'Y':
            cout << "You are from\n" << b << endl;
            cout << "Your trip destination is\n" << d << endl;
            break;
        case 'z':
        case 'Z':
            cout << "You are from\n" << a << endl;
            cout << "Your trip destination is\n" << c << endl;
            break;
        default:
            cout << "Welcome to space ;)" << endl;
            break;
        }

        Scorpion s;
        Storm st;
        Car c;
        Train t;
        Accident* a1 = &s;
        Accident* a2 = &st;
        Accident* a3 = &c;
        Accident* a4 = &t;

        cout << "Let us see how your jurney ends\n" << endl;
        cout << "Enter a number from 1 to 4,\n" << endl;
        trip = v;
        {switch (trip) {
        case 1:
            a1->attack();
            cout << "You have four houres to find a hospital, there is one nearby.\n" << endl;
            cout << "You have to decide to wait and call the hospital or to go to hospital? 1 or 2?\n" << endl;
            battle = e;
            {
                switch (battle) {
                case 1:
                    cout << "You decided to go to hospital you did make it ;).\n" << endl;
                    break;
                case 2:
                    cout << "You decided to wait them to come but it pass houres before they come and you pass out." << "\n" << "Fortunattly they come in the last moment to save you\n" << endl;
                    break;
                }
                break;
            }
        case 2:
            a2->attack();
            cout << "The pilot and his team asure you that the nearby airport will accepte your request for landing.\n" << endl;
            cout << "The crew starts to panic. Eventually crew fall apart. In which crew would you be? 1 or 2?\n" << endl;
            battle1 = e;
            {
                switch (battle1) {
                case 1:
                    cout << "You went into first part of crew that decides to jump out of plain." << "\n" << "Don't worry you did survive with some broken bones :(.\n" << endl;
                    break;
                case 2:
                    cout << "You went into second group that decides to stay in plain." << "\n" << "Well that was a smart choice because you did get to the airport ;).\n" << endl;
                    break;
                }
                break;
            }
        case 3:
            a3->attack();
            cout << "You find out in your phone in google maps that there is a nearby a fuel station.\n" << endl;
            cout << "You start to walk. After a mile you find out a bridge that is closed. You have two tracks that leads from the bridge.\n" << endl;
            cout << "Which way will you choose 1 or 2?\n" << endl;
            battle2 = e;
            {
                switch (battle2) {
                case 1:
                    cout << "After you have choose first track you get lost in the wood. Sorry :(.\n" << endl;
                    break;
                case 2:
                    cout << "After you have choose second track, after a few miles you have found the gas station. See yout effort did work out well ;).\n" << endl;
                    break;
                }
                break;
            }
        case 4:
            a4->attack();
            cout << "You start to hear some weird noise that come from outdoor.Passengers start to panic.\n" << endl;
            cout << "The passengers decided that it's up to you to check it out.You have two ways, which way will you choose 1 or 2?\n" << endl;
            battle3 = e;
            {
                switch (battle3) {
                case 1:
                    cout << "Your train felt into snow storm, so you're hearing wind in the branches. Don't worry ;).\n" << endl;
                    break;
                case 2:
                    cout << "Your train felt into ambush of wearwolfs be aweare that you have no way out. Sorry :(.\n" << endl;
                    break;
                }
                break;
            }
        }
        }
    }
    cout << "My name is Senudin. This is my first code and if you like it put one up vote. If you have any comment write it. Thank you!!";


    return 0;
}