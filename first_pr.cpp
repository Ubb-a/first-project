#include <bits/stdc++.h>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <windows.h>

#define red "\033[1;31m";
#define green "\033[1;32m";
#define yellow "\033[1;33m";
#define blue "\033[1;34m";
#define magenta "\033[1;35m";
#define cyan "\033[1;36m";
#define white "\033[1;37m";
#define reset "\033[0m";
#define bold "\033[1m";
#define underline "\033[4m";
#define blink "\033[5m";
#define reverse "\033[7m";
#define invisible "\033[8m";

using namespace std;

void display_logo()
{

    cout << red;
    cout << R"(
                 ____  __  __ _   _   ______   ______ _____ _____ __  __
                / ___||  \/  | | | | / ___\ \ / / ___|_   _| ____|  \/  |
                \___ \| |\/| | |_| | \___ \\ V /\___ \ | | |  _| | |\/| |
                 ___) | |  | |  _  |  ___) || |  ___) || | | |___| |  | |
                |____/|_|  |_|_| |_| |____/ |_| |____/ |_| |_____|_|  |_|

)";
}

void displayName(string input = "Smart Home Systeme By Abdelrahman Za3Zo3 ", int speed = 100)
{
    cout << "                          ";

    for (char character : input)
    {
        cout << character << flush;
        this_thread::sleep_for(chrono::milliseconds(speed));
    }

    cout << endl
         << endl;
}

void age(int userAge, const string &userName)
{

    system("cls");

    string Temperature;
    string Sleep_Time;

    cout << blue;
    cout << R"(
                         _____                                      _
                        | ____|__ _ ___ _   _   _ __ ___   ___   __| | ___
                        |  _| / _` / __| | | | | '_ ` _ \ / _ \ / _` |/ _ \
                        | |__| (_| \__ \ |_| | | | | | | | (_) | (_| |  __/
                        |_____\__,_|___/\__, | |_| |_| |_|\___/ \__,_|\___|
                                        |___/


)";

    cout << "            Are you feeling cold or hot? (cold , hot) : ";
    cin >> Temperature;
    cout << R"(

            )";

    cout << "Are you feeling sleepy? (yes , no) : ";
    cin >> Sleep_Time;
    cout << R"(

            )";

    if (Temperature == "cold")
    {
        cout << white;
        cout << R"(----------------------------------------------------)" << endl
             << endl;
        cout << red;

        cout << "            Heating mode activated 🔥";
        cout << R"(

            )";
    }
    else if (Temperature == "hot")
    {
        cout << white;
        cout << R"(----------------------------------------------------)" << endl
             << endl;
        cout << blue;

        cout << "            Cooling mode activated 🧊 ";
        cout << R"(

            )";
    }
    else
    {
        cout << white;
        cout << "            Temperature is stable.";
        cout << R"(

            )";
    }

    if (Sleep_Time == "yes")
    {
        cout << "Good Night!";
        cout << R"(

            )";

        cout << "Night mode enabled: Lights dimmed.";
        cout << R"(

            )";
    }
    else
    {
        cout << "Day mode enabled: Lights on.";
        cout << R"(

            )";
    }
    cout << R"(

            )";

    cout << "Press (9) to return to the menu or any other key to exit : ";
    int backChoice;
    cin >> backChoice;
    if (backChoice == 9)
    {
        system("cls");
        display_logo();
        displayName();

        return;
    }
}

void dui(const vector<pair<string, int>> &users)
{
    system("cls");

    cout << red;

    cout << R"(
                         _   _                 ___        __
                        | | | |___  ___ _ __  |_ _|_ __  / _| ___
                        | | | / __|/ _ \ '__|  | || '_ \| |_ / _ \
                        | |_| \__ \  __/ |     | || | | |  _| (_) |
                         \___/|___/\___|_|    |___|_| |_|_|  \___/



)";
    cout << bold;

    if (users.empty())
    {
        cout << "                        No users found!" << endl;
        return;
    }

    cout << "User Information:" << endl;
    for (const auto &user : users)
    {
        cout << "               Name: " << user.first << " | Age: " << user.second << endl;
    }
    cout << endl;
}
void menu()
{

    vector<pair<string, int>> users;

    int choice;

    while (true)
    {
        cout << cyan;

        cout << R"(

                        +-----------------MENU-----------------+
                        |                                      |
                        | 0. How To Use                        |
                        |                                      |
                        | 1. Smart Home                        |
                        |                                      |
                        | 2. User Information                  |
                        |                                      |
                        | 3. Exit                              |
                        +--------------------------------------+


)";

        cout << "                          Enter your choice: ";

        cin >> choice;

        if (choice == 0)
        {
            system("cls");
            cout << green;
            cout << R"(
                        +-----------------------------------------------------------------+
                        |                                                                 |
                        |                        How To Use                               |
                        |                                                                 |
                        |                                                                 |
                        |      1 - smart home system                                      |
                        |                                                                 |
                        |          If the user is under 60 years old                      |
                        |          the user enters the room temperature (hot or cold)     |
                        |          and the time to adjust the lighting                    |
                        |                                                                 |
                        |                                                                 |
                        |          If the age is over 60                                  |
                        |                                                                 |
                        |              the program will automatically enter the easy      |
                        |              mode to make it easier for the elderly to use it   |
                        |              It will ask him if he feels cold or hot            |
                        |              and if he is awake or going to sleep               |
                        |                                                                 |
                        |      2 - user information                                       |
                        |                                                                 |
                        |           Used to view user information                         |
                        |                                                                 |
                        |      3 - exit                                                   |
                        |                                                                 |
                        |          Used to close the program                              |
                        |                                                                 |
                        +-----------------------------------------------------------------+

)";
        }

        if (choice == 1)
        {
            system("cls");

            cout << red;

            cout << R"(
                         ____  __  __    _  _____ ____    _   _  ___  __  __ _____
                        / ___||  \/  |  / \|_   _|  _ \  | | | |/ _ \|  \/  | ____|
                        \___ \| |\/| | / _ \ | | | |_) | | |_| | | | | |\/| |  _|
                         ___) | |  | |/ ___ \| | |  _ <  |  _  | |_| | |  | | |___
                        |____/|_|  |_/_/   \_\_| |_| \_\ |_| |_|\___/|_|  |_|_____|

)";

            cout << bold;
            float roomTemperature;
            int userAge;
            char preferredMode;
            bool isNightTime;
            string userName;

            cout << R"(

            )";

            cout << "Enter Your Name: ";
            cin.ignore();
            getline(cin, userName);
            cout << R"(

            )";

            cout << "Enter userAge: ";
            cin >> userAge;
            cout << R"(

            )";
            users.push_back({userName, userAge});

            if (userAge >= 60)
            {
                age(userAge, userName);
                continue;
            }

            cout << "Enter roomTemperature: ";
            cin >> roomTemperature;
            cout << R"(

            )";

            cout << "Enter preferredMode (C , H): ";
            cin >> preferredMode;
            cout << R"(

            )";

            cout << "Enter isNightTime (1 , 0) : ";
            cin >> isNightTime;
            cout << R"(

            )";

            // if condition

            if (preferredMode == 'C' && roomTemperature > 25)
            {
                cout << white;
                cout << R"(----------------------------------------------------)" << endl
                     << endl;
                cout << blue;
                cout << "            Cooling mode activated! 🧊 | RoomTemperature : " << roomTemperature << "°" << endl;
                cout << endl;
            }
            else if (preferredMode == 'H' && roomTemperature < 18)
            {
                cout << white;
                cout << R"(----------------------------------------------------)" << endl
                     << endl;
                cout << red;
                cout << "            Heating mode activated! 🔥 | RoomTemperature : " << roomTemperature << "°" << endl;
                cout << endl;
            }
            else
            {
                cout << white;

                cout << "Temperature is stable | RoomTemperature : " << roomTemperature << "°" << endl;
                cout << endl;
            }

            cout << (isNightTime ? "            Night mode enabled : Lights dimmed" : "               Day mode enabled : Lights on") << endl;
        }

        else if (choice == 2)
        {
            dui(users);
        }

        else if (choice == 3)
        {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << "Press (9) to return to the menu or any other key to exit : ";
        int backChoice;
        cin >> backChoice;
        if (backChoice == 9)
        {
            system("cls");
            display_logo();
            displayName();

            continue;
        }
    }
}

int main()
{

    SetConsoleOutputCP(CP_UTF8);

    display_logo();
    displayName();
    menu();
}