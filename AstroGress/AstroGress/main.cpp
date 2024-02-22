#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
int answer;

void displayMainMenu() {
    cout << setw(70) << "     _        _              ____                   \n";
    cout << setw(71) << "    / \\   ___| |_ _ __ ___  / ___|_ __ ___  ___ ___  \n";
    cout << setw(71) << "   / _ \\ / __| __| '__/ _ \\| |  _| '__/ _ \\/ __/ __/ \n";
    cout << setw(71) << "  / ___ \\\\__ \\ |_| | | (_)|| |_| | | |  __/\\__ \\__ \\ \n";
    cout << setw(71) << " /_/   \\_\\___/\\__|_|  \\___/ \\____|_|  \\___||___/___/ \n";
    cout << endl;
    cout << setw(57) << "=============================" << endl;
    cout << setw(56) << "        Welcome To         " << endl;
    cout << setw(53) << "        AstroGress      " << endl;
    cout << setw(57) << "=============================" << endl;
    cout << setw(49) << "[1] Start Game" << endl;
    cout << setw(51) << "[2] Instructions" << endl;
    cout << setw(47) << "[3] Settings" << endl;
    cout << setw(43) << "[4] Quit" << endl;
    cout << setw(57) << "=============================" << endl;
    cout << setw(57) << "Enter your choice (1-4): ";
    cin >> answer;
    cout << endl;
    cout << endl;
}
void DisplayGame() {
    string str = "Milky", str1 = "Way";
    string str2 = "Isaac", str3 = "Newton";
    string str4 = "Tilt", str5 = "of", str6 = "Earth's", str7 = "axis";
    string Answer[10];
    Answer[0] = str + " " + str1;
    Answer[1] = "Gravity";
    Answer[2] = "Astronomy";
    Answer[3] = "Mars";
    Answer[4] = "Equator";
    Answer[5] = str2 + " " + str3;
    Answer[6] = "Moon";
    Answer[7] = str4 + " " + str5 + " " + str6 + " " + str7;
    Answer[8] = "Hubble";
    Answer[9] = "Constellation";
    string temp1, temp2;
    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            cout << "What is the name of our galaxy?" << endl;
        }
        else if (i == 1){
            cout << "What is the force that keeps planets in orbit around the Sun?" << endl;
        }
        else if (i == 2) {
            cout << "What is the study of celestial objects such as stars, planets, and galaxies called?" << endl;
        }
        else if (i == 3) {
            cout << "Which planet is known as the 'Red Planet'?" << endl;
        }
        else if (i == 4) {
            cout << "What is the name of the imaginary line that divides the Earth into the Northern and Southern Hemispheres?" << endl;
        }
        else if (i == 5) {
            cout << "Who was the famous scientist known for his laws of motion and universal gravitation?" << endl;
        }
        else if (i == 6) {
            cout << "What is the name of the natural satellite of Earth?" << endl;
        }
        else if (i == 7) {
            cout << "What causes the seasons on Earth?" << endl;
        }
        else if (i == 8) {
            cout << "Which famous telescope was launched into space in 1990 and has provided valuable images of distant galaxies?" << endl;
        }
        else if (i == 9) {
            cout << "What is the term for a group of stars forming a recognizable pattern in the sky?" << endl;
        }
        cout << endl;
        cin.ignore(1, '\n');
        cout << "Player 1's Answer: ";
        getline(cin, temp1);
        cout << endl;
        cout << "Player 2's Answer: ";
        getline(cin, temp2);
        cout << endl;
        if (Answer[i] == temp1 && Answer[i] == temp2) {
            cout << "Both players' answers are correct. They both get 1 point." << endl;
            }
        else if (Answer[i] == temp1) {
            cout << "Player 1's answer is correct. He gets 1 point." << endl;
        }
        else if (Answer[i] == temp2) {
            cout << "Player 2's answer is correct. He gets 1 point." << endl;
        }
        else if (Answer[i] != temp1 && Answer[i] != temp2) {
            cout << "None of the players' answers are correct. None of them gets a point." << endl;
        }
        cout << endl;
    }
        
}
int main() {
    displayMainMenu();
    switch (answer) {
    case 1:
        DisplayGame();
    }
}