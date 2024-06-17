#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include "Windows.h"

#pragma comment(lib, "winmm.lib")


using namespace std;

const int FIELD_SIZE = 10;








//SetConsoleOutputCP(866);
//функция вывода лого
void print_ascii_art() {
    std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@%@@%@@%@%@@%@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@%@%%@%%@%@@%@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@@@@@@%@@@@@%@@%@%%@%%@%%@%%@%%@%@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@%%@%%@%@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@#*******************************************%@@@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@#*******************************************%@@@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@#*******************************************%@@@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@#*******************************************%@@@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@#*******************************************%@@@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@#*******************#%@@@@@%#***************%%%@%@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@%@%#***************#%@@@@@@@@@@#***************%@%@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@#*************#@@@@@#***********************%@%@%@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@%@@%@%#************%@@@%***#%@@@%*****************%%%@%%@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@%@%#***********%@@@***@@@@@@@@@#***************%%%@%@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@%#**********#@@@**#@@@******@#***************%%%@%@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@%@@%@%#**********%@@@**@@@************************#%%@%%@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@%@%#**********%@@%*#@@@*%@@@@@@#***************#%%@%%@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@%@@%@%#**********%@@@**@@@*%@@@@@@#***************#%%@%%@@%@@@@@@@@@\n"
        << "@@@@@@@@@@@%@@%@%#**********#@@@**#@@%***********************#%%@%%@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@%@@%@%#***********%@@@***@@@@%%@@@#***************#%%@%%@@%@@@@@@@@@\n"
        << "@@@@@@@@@@@%@@%@%#************%@@@%***#@@@%#*****************#%%@%%@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@%@@%@%#*************#@@@@@#*****#%#***************#%%@%%@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@%#****************@@@@@@@@@@@#***************#%%@%%@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@%@@%@%#*******************##%%%%#*****************%%%@%%@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@#*******************************************%%%@@%@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@#*******************************************%@%@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@%@@%@%#*******************************************%%%@@%@@%@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@#*******************************************%@@@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@%@@%@@#*******************************************%@%@@%@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@%@%%@%%%%%%%%#%%#%##@#%%#%%%%%%%%%%%%%%%@%%@@%@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@%@@%@@%@@%@@%@%%@%%%%@%%@%%@%%@%%%%@%%@%%@%%@%%@@%@@%@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@@@@%@@@@%@@%@@%@%%@%%@%%@%@%%@%%@%%@%%@%@@@@@@%@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@%@@@@@%@@%@%@@%@@%@%%@%%@%%@%@@%@%%@%%@%@@@@@@@@@%@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@%@%%@%%@%%@%@@%@@%@@%@%@@@@@@@@%@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@%%@%@@%@@%@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@%@%%@%%@%@@%@@%@@@@@@@@@@@@@@@@@%@@@@@@@@@@@@@@@\n"
        << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
}
    


void playStartSnd() {
    PlaySound(TEXT("kompzvuk.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
}
void print_ascii_1973() {
    SetConsoleOutputCP(866);
        cout << "                *        :*-                  :*=        \n"
        << "                  :@@@=     *@@@@@@   @@@@@@@@.  =@@@@@@      \n"
        << "                  =@@@=     @@   @@.  @@   %@+   @@   @@@     \n"
        << "                    @@=    *@@   @@@  @@   @@    @@   @@@     \n"
        << "                    @@=    %@@   @@@      @@          @@%     \n"
        << "                    @@=    =@@   @@@     .@@        @@@%      \n"
        << "                    @@=     @@@@@@@@     @@@        @@@@      \n"
        << "                    @@=       +. @@@     @@@          @@@     \n"
        << "                    @@=          @@@     @@*     ::   @@@     \n"
        << "                    @@=     @@   @@%     @@=     @@   @@@     \n"
        << "                    @@=     @@- :@@     .@@-     @@@  @@@     \n"
        << "                  =@@@@@     @@@@@     +@@@@@     @@@@@@     \n";
     
    SetConsoleOutputCP(1251);
    
}

int cPlayerShips(char Field[FIELD_SIZE][FIELD_SIZE]) {
    int counts = 0;
    for (int i = 0; i < FIELD_SIZE; i++)
    {
        for (int j = 0; j < FIELD_SIZE; j++)
        {
            if (Field[i][j]=='S')
            {
                counts++;
            }
        }
    }
    return counts;
}

void loading() {
    for (int i = 0; i < 1; i++)
    {
            cout << "  _     ___    _    ____ ___ _   _  ____ \n";
            cout << " | |   / _ \\  / \\  |  _ \\_ _| \\ | |/ ___|\n";
            cout << " | |  | | | |/ _ \\ | | | | ||  \\| | |  _ \n";
            cout << " | |__| |_| / ___ \\| |_| | || |\\  | |_| |\n";
            cout << " |_____\\___/_/   \\_\\____/___|_| \\_|\\____|\n";
        for (int j = 0; j < 4; j++)
        {
            cout << ".";
        }
    }
}

void name() {
    /*Sleep(50);
    Sleep(50);
    Sleep(50);
    Sleep(50);*/
    cout << "                    _____ _     ___ _____ _____             ____    _  _____ _____ _     _____ \n";
    cout << "                       |  ___| |   / _ \\_   _| ____|           | __ )  / \\|_   _|_   _| |   | ____|\n";
    cout << "                       | |_  | |  | | | || | |  _|             |  _ \\ / _ \\ | |   | | | |   |  _|  \n";
    cout << "                       |  _| | |__| |_| || | | |___            | |_) / ___ \\| |   | | | |___| |___ \n";
    cout << "                       |_|   |_____\\___/ |_| |_____|           |____/_/   \\_\\_|   |_| |_____|_____|\n";
}

// Функция для вывода поля
void printField(char field[FIELD_SIZE][FIELD_SIZE]) {
    cout << "  ";
    for (int i = 0; i < FIELD_SIZE; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < FIELD_SIZE; i++) {
        cout << i << " ";
        for (int j = 0; j < FIELD_SIZE; j++) {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
}

// Функция для проверки, является ли клетка допустимой для размещения корабля
bool isValidCell(char field[FIELD_SIZE][FIELD_SIZE], int row, int col) {
    return (row >= 0 && row < FIELD_SIZE && col >= 0 && col < FIELD_SIZE && field[row][col] == '~');
}
// Функция для размещения корабля на поле
void placeShip(char field[FIELD_SIZE][FIELD_SIZE], int shipSize, int row, int col, bool isHorizontal) {
    if (isHorizontal) {
        for (int i = 0; i < shipSize; i++) {
            if (!isValidCell(field, row, col + i)) {
                cout << "impossible to input here" << endl;
                return;
            }
            field[row][col + i] = 'S';
        }
    }
    else {
        for (int i = 0; i < shipSize; i++) {
            if (!isValidCell(field, row + i, col)) {
                cout << "impossible to input here" << endl;
                return;
            }
            field[row + i][col] = 'S';
        }
    }

   

}
void placeShipBot(char field[FIELD_SIZE][FIELD_SIZE], int shipSize, int row, int col, bool isHorizontal) {
    if (isHorizontal) {
        for (int i = 0; i < shipSize; i++) {
            if (!isValidCell(field, row, col + i)) {
                cout << "impossible to input here" << endl;
                return;
            }
            field[row][col + i] = 'S';
        }
    }
    else {
        for (int i = 0; i < shipSize; i++) {
            if (!isValidCell(field, row + i, col)) {
                cout << "impossible to input here" << endl;
                return;
            }
            field[row + i][col] = 'S';
        }
    }
    

}
// Функция для получения координат выстрела от игрока
void getShotCoordinates(int& row, int& col, bool bot) {
    cout << "input cord (row, col): ";
    cin >> row >> col;

    if (!bot)
    {
        PlaySound(TEXT("vistrel.wav"), NULL, SND_FILENAME | SND_ASYNC);
        Sleep(200);
    }

    if (bot) {
        PlaySound(TEXT("botvistrel.wav"), NULL, SND_FILENAME | SND_ASYNC);
        Sleep(200);
    }
}
// Функция для обработки выстрела
int missCount = 0;
bool handleShot(char field[FIELD_SIZE][FIELD_SIZE], int row, int col) {
    if (row >= 0 && row < FIELD_SIZE && col >= 0 && col < FIELD_SIZE) {
        if (field[row][col] == 'S') {
            field[row][col] = 'X';
            cout << "                                          ____   ___   ___  __  __   _ \n";
            cout << "                                         | __ ) / _ \\ / _ \\|  \\/  | | |\n";
            cout << "                                         |  _ \\| | | | | | | |\\/| | | |\n";
            cout << "                                         | |_) | |_| | |_| | |  | | |_|\n";
            cout << "                                         |____/ \\___/ \\___/|_|  |_| (_)\n";
            cout << endl;
            cout << endl;
            cout << endl;
            Sleep(900);

            PlaySound(TEXT("probit.wav"), NULL, SND_FILENAME | SND_ASYNC);
            
            return true;
        }
        else {
            field[row][col] = 'M';

            cout << "                                            __  __ ___ ____ ____ \n";
            cout << "                                           |  \\/  |_ _/ ___/ ___| \n";
            cout << "                                           | |\\/| || |\\___ \\___ \ \n";
            cout << "                                           | |  | || | ___) |__) |\n";
            cout << "                                           |_|  |_|___|____/____/ \n";
            cout << endl;
            cout << endl;
            cout << endl;
            Sleep(900);

            PlaySound(TEXT("ne-probil.wav"), NULL, SND_FILENAME | SND_ASYNC);
   
            return false;
        }
    }
    else {
        cout << "incorrect cords!" << endl;
        return false;
    }
}
//блок разведки
void googleCord( char Field[FIELD_SIZE][FIELD_SIZE]) {
    int a, b;
    bool count = false;

    cout << "                          /\\\n";
    cout << "                         |  |\n";
    cout << "                         |  |\n";
    cout << "                        .'  '.\n";
    cout << "                        |    |\n";
    cout << "                        |    |\n";
    cout << "                        | /\\ |\n";
    cout << "                      .' |__|'.\n";
    cout << "                      |  |  |  |\n";
    cout << "                     .'  |  |  '.\n";
    cout << "                /\\   |   \\__/   |   /\\\n";
    cout << "               |  |  |   |  |   |  |  |\n";
    cout << "           /|  |  |,-\\   |  |   /-,|  |  |\\\n";
    cout << "           ||  |,-'   |  |  |  |   '-,|  ||\n";
    cout << "           ||-'       |  |  |  |       '-||\n";
    cout << "|\\     _,-'           |  |  |  |           '-,_     /|\n";
    cout << "||  ,-' ___           |  |  |  |               '-,  ||\n";
    cout << "||-'      /           |  |  |  |                  '-||\n";
    cout << "||       /__          |  \\  /  |                    ||\n";
    cout << "|\\________....--------\\   ||   /--------....________/|\n";
    cout << "                      /|  ||  |\\\n";
    cout << "                     / |  ||  | \\\n";
    cout << "                    /  |  \\/  |  \\\n";
    cout << "                   /   |      |   \   \n";
    cout << "                 //   .|      |.   \\\\\n";
    cout << "               .' |_./ |      | \\._| '.\n";
    cout << "              /     _.-|||  |||-._     \\\n";
    cout << "              \\__.-'   \\||/\\||/   '-.__/\n ";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                        _        _   _   _ _   _  ____ _   _ \n";
    cout << "                                       | |      / \\ | | | | \\ | |/ ___| | | |\n";
    cout << "                                       | |     / _ \\| | | |  \\| | |   | |_| |\n";
    cout << "                                       | |___ / ___ \\ |_| | |\\  | |___|  _  |\n";
    cout << "                                       |_____/_/   \\_\\___/|_| \\_|\\____|_| |_|\n";
    Sleep(500);

    cout << endl;
    cout << endl;
    cout << "                                        ____  _____    _    ____   ____ _   _ \n";
    cout << "                                       / ___|| ____|  / \\  |  _ \\ / ___| | | |\n";
    cout << "                                       \\___ \\|  _|   / _ \\ | |_) | |   | |_| |\n";
    cout << "                                        ___) | |___ / ___ \\|  _ <| |___|  _  |\n";
    cout << "                                       |____/|_____/_/   \\_\\_| \\_\\\\____|_| |_|\n";
    Sleep(750);
    cout << endl;
    cout << endl;
    cout << "                                  ____    _  _____  _        _____ ___  _   _ _   _ ____    _ \n";
    cout << "                                 |  _ \\  / \\|_   _|/ \\      |  ___/ _ \\| | | | \\ | |  _ \\  | |\n";
    cout << "                                 | | | |/ _ \\ | | / _ \\     | |_ | | | | | | |  \\| | | | | | |\n";
    cout << "                                 | |_| / ___ \\| |/ ___ \\    |  _|| |_| | |_| | |\\  | |_| | |_|\n";
    cout << "                                 |____/_/   \\_\\_/_/   \\_\\   |_|   \\___/ \\___/|_| \\_|____/  (_)\n";



    
    for (int i = 0; i < FIELD_SIZE; i++)
    {

        
        
            for (int j = 0; j < FIELD_SIZE; j++)
            {
                if (Field[i][j] == 'S')
                {
                    if (count == false)
                    {
                        a = i;
                        b = j;
                        count = true;

                    }
                }
            }
        
    }

    cout << "coordinates: " << a << " " << "," << b;
    cout << endl;


}

//блок считывания поля бота и игроков и прернос данных на доп-поле
void goToDop(char dopField[FIELD_SIZE][FIELD_SIZE], char botField[FIELD_SIZE][FIELD_SIZE]) {
    for (int i = 0; i < FIELD_SIZE; i++)
   {
       for (int j = 0; j < FIELD_SIZE; j++)
       {
           if (botField[i][j] == 'S')
           {
               dopField[i][j] = '~';
           }
           else if (botField[i][j] == 'M')
           {
               dopField[i][j] = 'M';
           }
           else if (botField[i][j] == 'X')
           {
               dopField[i][j] = 'X';
           }
       }
   }
  }


// Функция для получения случайных координат выстрела от бота
void getBotShotCoordinates(int& row, int& col) {
    row = rand() % FIELD_SIZE;
    col = rand() % FIELD_SIZE;

    Sleep(300);
    PlaySound(TEXT("botvistrel.wav"), NULL, SND_FILENAME | SND_ASYNC);
    Sleep(300);
    
}

int main() {
    
    

    for (int i = 0; i <= 1; i++)
    {
       // PlaySound(TEXT("zvuk-zapuska-vindyi-na-polnuyu-gromkost-300-beregite-ushi.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }

    


    srand(time(0)); // Инициализация генератора случайных чисел
    // Создание полей
    char playerField[FIELD_SIZE][FIELD_SIZE];
    char botField[FIELD_SIZE][FIELD_SIZE];
    char dopField[FIELD_SIZE][FIELD_SIZE];
    // Поля для режима без бота
    char plOneF[FIELD_SIZE][FIELD_SIZE];
    char plTwoF[FIELD_SIZE][FIELD_SIZE];
    
    for (int i = 0; i < FIELD_SIZE; i++) {
        for (int j = 0; j < FIELD_SIZE; j++) {
            playerField[i][j] = '~';
            botField[i][j] = '~';
            plOneF[i][j] = '~';
            plTwoF[i][j] = '~';
        }
    }
    // Размещение кораблей (простейший вариант - случайное размещение)


    
    //блок создания до-поля
    for (int i = 0; i < FIELD_SIZE; i++)
    {
        for (int j = 0; j < FIELD_SIZE; j++)
        {
            dopField[i][j] = '~';
        }
    }

    
    
   


    /*int xF;
    int yF;
    bool horizont;
    int sSize;
    for (int i = 0; i < 4 ; i++)
    {
        cout << "you place " << i << "ship";
        cout << "input size of ship (from 3): ";
        cin >> sSize;
        cout << "input x: ";
        cin >> xF;
        cout << "input y: ";
        cin >> yF;
        cout << "is horizontal(0) or vertical(1): ";
        cin >> horizont;
        placeShip(playerField, sSize, yF, xF,horizont );

    }*/


    // Игра
    
    


    bool debugOrNot;
    bool botOrH;
    int playerShots = 0;
    int its = 0;
    int itsFirst = 0;
    int itsSecond = 0;
    int botShots = 0;
    int playerShipsSunk = 0;
    int botShipsSunk = 0;
    bool razv=false;
    
    cout << "debug or not(1)(0): ";
    cin >> debugOrNot;


    cout << "game with bot (0) or with friend (1): ";
    cin >> botOrH;
    
    playStartSnd();

    if (debugOrNot == false)
    {

        if (debugOrNot == false)
        {
            Sleep(2000);
        }
        print_ascii_art();
        Sleep(1500);
        print_ascii_1973();
        Sleep(2000);
        cout << ".";
        Sleep(100);
        cout << ".";
        Sleep(100);
        cout << ".";
        Sleep(100);
        cout << ".";
        Sleep(100);
        cout << ".";
        Sleep(100);
        cout << ".";
        cout << endl;

        loading();


        Sleep(550);
        PlaySound(TEXT("shelk.wav"), NULL, SND_FILENAME | SND_ASYNC);
        name();
    }

        if (!botOrH) {
            placeShip(botField, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
            placeShip(botField, 2, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 2-клеточный корабль
            placeShip(botField, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 2-клеточный корабль
            placeShip(botField, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
            placeShip(playerField, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
            placeShip(playerField, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
            placeShip(playerField, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
            placeShip(playerField, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
        }

        
        if (botOrH) {
            placeShip(plOneF, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
            placeShip(plOneF, 2, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 2-клеточный корабль
            placeShip(plOneF, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 2-клеточный корабль
            placeShip(plOneF, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
            placeShip(plTwoF, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
            placeShip(plTwoF, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
            placeShip(plTwoF, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
            placeShip(plTwoF, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточныйplOneF
        }
        int botS = cPlayerShips(botField);
        int playerS = cPlayerShips(playerField);
        int pl1S = cPlayerShips(plOneF);
        int pl2S = cPlayerShips(plTwoF);

    
    
    if (debugOrNot==true)
    {
        its = 15;
    }

    if (!botOrH)
    {
        cout << "hits to kill bot: ";
        cout << botS;
        cout << endl;

        cout << "hits to kill you: ";
        cout << playerS;
        cout << endl;
        while (playerShipsSunk < playerS  &&  botShipsSunk < botS) {
            // Ход игрока
            cout << "                                                __   _____  _   _ \n";
            cout << "                                                \\ \\ / / _ \\| | | |\n";
            cout << "                                                 \\ V / | | | | | |\n";
            cout << "                                                  | || |_| | |_| |\n";
            cout << "                                                  |_| \\___/ \\___/ \n";
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            its++;
            Sleep(1000);
            cout << endl;
            if (its >= 15)
            {
                cout << "you can to search cords (1-yes) (0-wait): ";
                cin >> razv;


            }
            if (razv == true)
            {
                razv = false;
                its = 0;
                googleCord(botField);
            }

            printField(dopField);
            int row, col;
            if (debugOrNot == true)
            {
                printField(botField);
            }

            //printField(botField);
            getShotCoordinates(row, col, false);
            if (handleShot(botField, row, col)) {
                playerShipsSunk++;
            }
            if (debugOrNot == false)
            {
                goToDop(dopField, botField);
            }
            playerShots++;
            // Ход бота

            Sleep(1000);
            cout << "                                                 ____   ___ _____\n";
            cout << "                                                | __ ) / _ \\_   _|\n";
            cout << "                                                |  _ \\| | | || |  \n";
            cout << "                                                | |_) | |_| || |  \n";
            cout << "                                                |____/ \\___/ |_| \n";
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            int botRow, botCol;
            getBotShotCoordinates(botRow, botCol);
            if (handleShot(playerField, botRow, botCol)) {
                botShipsSunk++;
            }
            botShots++;
            cout << endl;
            Sleep(1000);
            printField(playerField);
        }

    }
    

    if (botOrH) {

        cout << "hits to kill first player: ";
        cout << pl1S;
        cout << endl;
        cout << endl;

        cout << "hits to kill second player: ";
        cout << pl2S;

        cout << endl;

        while (playerShipsSunk < pl1S && botShipsSunk < pl2S) {
            // Ход игрока 1
            cout << "## pl1 it! ##" << endl;

            Sleep(1000);
            cout << endl;
            if (its >= 15)
            {
                cout << "you can to search cords (1-yes) (0-wait): ";
                cin >> razv;


            }
            if (razv == true)
            {
                razv = false;
                its = 0;
                googleCord(plTwoF);
            }

            printField(dopField);
            int row, col;
            if (debugOrNot == true)
            {
                printField(plTwoF);
            }

            //printField(botField);
            getShotCoordinates(row, col, true);
            if (handleShot(plTwoF, row, col)) {
                playerShipsSunk++;
            }
            if (debugOrNot == false)
            {
                goToDop(dopField, plOneF);
            }
            playerShots++;

            // ход второго игрока
            cout << "## pl2 it! ##" << endl;

            Sleep(1000);
            cout << endl;
            if (its >= 15)
            {
                cout << "you can to search cords (1-yes) (0-wait): ";
                cin >> razv;


            }
            if (razv == true)
            {
                razv = false;
                its = 0;
                googleCord(plOneF);
            }

            printField(dopField);
            //int row, col;
            if (debugOrNot == true)
            {
                printField(plOneF);
            }

            //printField(botField);
            getShotCoordinates(row, col, false);
            if (handleShot(plOneF, row, col)) {
                playerShipsSunk++;
            }
            if (debugOrNot == false)
            {
                goToDop(dopField, plTwoF);
            }
            playerShots++;
        }
    }
    // Определение победителя
    if (playerShipsSunk == 16) { 
        cout << "enemy is destroed!" << endl;
    }
    else {
        cout << "bot destroy you!" << endl;
    }

 
    
    return 0;
}
