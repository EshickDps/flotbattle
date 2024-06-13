#include <iostream>
#include <ctime>
#include <cstdlib>
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
    

void print_ascii_1973() {
    SetConsoleOutputCP(866);
        cout << "        *        :*-                  :*=        \n"
        << "      :@@@=     *@@@@@@   @@@@@@@@.  =@@@@@@      \n"
        << "      =@@@=     @@   @@.  @@   %@+   @@   @@@     \n"
        << "        @@=    *@@   @@@  @@   @@    @@   @@@     \n"
        << "        @@=    %@@   @@@      @@          @@%     \n"
        << "        @@=    =@@   @@@     .@@        @@@%      \n"
        << "        @@=     @@@@@@@@     @@@        @@@@      \n"
        << "        @@=       +. @@@     @@@          @@@     \n"
        << "        @@=          @@@     @@*     ::   @@@     \n"
        << "        @@=     @@   @@%     @@=     @@   @@@     \n"
        << "        @@=     @@- :@@     .@@-     @@@  @@@     \n"
        << "      =@@@@@     @@@@@     +@@@@@     @@@@@@     \n";
     
    SetConsoleOutputCP(1251);
    
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
void getShotCoordinates(int& row, int& col) {
    cout << "input cord (row, col): ";
    cin >> row >> col;
    PlaySound(TEXT("vistrel.wav"), NULL, SND_FILENAME | SND_ASYNC);
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

//блок считывания поля бота и прернос данных на доп-поле
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
    
    for (int i = 0; i < FIELD_SIZE; i++) {
        for (int j = 0; j < FIELD_SIZE; j++) {
            playerField[i][j] = '~';
            botField[i][j] = '~';
        }
    }
    // Размещение кораблей (простейший вариант - случайное размещение)

    placeShip(botField, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
    placeShip(botField, 2, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 2-клеточный корабль
    placeShip(botField, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 2-клеточный корабль
    placeShip(botField, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
    placeShip(playerField, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
    placeShip(playerField, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
    placeShip(playerField, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль
    placeShip(playerField, 3, rand() % FIELD_SIZE, rand() % FIELD_SIZE, rand() % 2); // 3-клеточный корабль

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
    int playerShots = 0;
    int its = 0;
    int botShots = 0;
    int playerShipsSunk = 0;
    int botShipsSunk = 0;
    bool razv=false;
    cout << "debug or not(1)(0): ";
    cin >> debugOrNot;
    

    if (debugOrNot==false)
    {
        
        print_ascii_art();
        Sleep(1000);
        print_ascii_1973();
        Sleep(500);
        loading();
        Sleep(250);
        name();
    }
    
    if (debugOrNot==true)
    {
        its = 15;
    }

    while (playerShipsSunk < 16 && botShipsSunk < 16) {
        // Ход игрока
        cout << "## you it! ##" << endl;
        its++;
        Sleep(1000);
        cout << endl;
        if (its>=15)
        {
            cout << "you can to search cords (1-yes) (0-wait): ";
            cin >> razv;


        }
        if (razv==true)
        {
            razv = false;
            its = 0;
            googleCord(botField);
        }
        
        printField(dopField);
        int row, col;
        if (debugOrNot==true)
        {
            printField(botField);
        }

        //printField(botField);
        getShotCoordinates(row, col);
        if (handleShot(botField, row, col)) {
            playerShipsSunk++;
        }
        if (debugOrNot==false)
        {
            goToDop(dopField, botField);
        }
        playerShots++;
        // Ход бота
        cout << "## bot it! ##" << endl;
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
    // Определение победителя
    if (playerShipsSunk == 16) { 
        cout << "enemy is destroed!" << endl;
    }
    else {
        cout << "bot destroy you!" << endl;
    }
    return 0;
}
