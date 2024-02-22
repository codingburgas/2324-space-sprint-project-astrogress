#include <iostream>
#include <iomanip>

using namespace std;


void displayMainMenu() {
    cout << setw(70) << "     _        _              ____                   \n";
    cout << setw(71) << "    / \\   ___| |_ _ __ ___  / ___|_ __ ___  ___ ___  \n";
    cout << setw(71) << "   / _ \\ / __| __| '__/ _ \\| |  _| '__/ _ \\/ __/ __/ \n";
    cout << setw(71) << "  / ___ \\\\__ \\ |_| | | (_)|| |_| | | |  __/\\__ \\__ \\ \n";
    cout << setw(71) << " /_/   \\_\\___/\\__|_|  \\___/ \\____|_|  \\___||___/___/ \n";
    cout << "" << endl;
    cout << setw(57) << "=============================" << endl;
    cout << setw(56) << "        Welcome To         " << endl;
    cout << setw(53) << "        AstroGress      " << endl;
    cout << setw(57) << "=============================" << endl;
    cout << setw(49) << "[1] Start Game" << endl;
    cout << setw(51) << "[2] Instructions" << endl;
    cout << setw(47) << "[3] Settings" << endl;
    cout << setw(43) << "[4] Quit" << endl;
    cout << setw(58) << "=============================" << endl;
    cout << setw(57) << "Enter your choice (1-4): ";
}
int main() {
    displayMainMenu();
}