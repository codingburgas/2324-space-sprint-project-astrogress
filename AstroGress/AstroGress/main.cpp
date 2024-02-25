#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int answer;

struct question {
    string questionText;
    string answer;
};

question questions[30] = {
{"What is the name of our home planet?", "Earth"},
{ "Which planet is closest to the Sun?", "Mercury" },
{ "What's the biggest planet in our solar system?", "Jupiter" },
{ "What's the bright object in the night sky closest to us?", "Moon" },
{ "What's the 'Red Planet'?", "Mars" },
{ "What do you call a group of stars forming a pattern?", "Constellation" },
{ "Which galaxy is our solar system part of?", "Milky Way" },
{ "What causes the Moon to change its shape in the sky?", "Phases and its position" },
{ "Which planet has beautiful rings around it?", "Saturn" },
{ "What's a shooting star?", "Meteor" },
{ "How do stars produce energy?", "Nuclear fusion" },
{ "Which is the largest moon in our solar system?", "Ganymede (Jupiter's moon)" },
{ "What happens during a solar eclipse?", "Moon covers the Sun" },
{ "What's the bright band of stars in the night sky called?", "Milky Way" },
{ "What are the rocky objects orbiting the Sun, sometimes called 'minor planets'?", "Asteroids" },
{ "What is the closest star to Earth?", "Sun" },
{ "What's the imaginary line Earth rotates around?", "Axis" },
{ "Which spacecraft landed the first humans on the Moon?", "Apollo 11" },
{ "What causes Earth's seasons?", "Tilt of Earth's axis" },
{ "What's the bright trail of light left by a shooting star?", "Meteor streak" },
{ "What's the study of stars and planets called?", "Astronomy" },
{ "Which planet is known as the 'Evening Star' or 'Morning Star'?", "Venus" },
{ "What do you call a group of galaxies held together by gravity?", "Galaxy cluster" },
{ "What's the big storm on Jupiter called?", "Great Red Spot" },
{ "What happens when a star explodes?", "Supernova" },
{ "What's the outermost layer of the Sun's atmosphere called?", "Corona" },
{ "Which galaxy is closest to the Milky Way?", "Andromeda" },
{ "What's the name of the spacecraft that explored the outer planets?", "Voyager" },
{ "What's the distance light travels in a year called?", "Light-year" },
{ "What's the study of the entire universe called?", "Cosmology" }
};

void mainMenu() {
        cout << setw(85) << "     _        _              ____                   \n";
        cout << setw(86) << "    / \\   ___| |_ _ __ ___  / ___|_ __ ___  ___ ___  \n";
        cout << setw(86) << "   / _ \\ / __| __| '__/ _ \\| |  _| '__/ _ \\/ __/ __/ \n";
        cout << setw(86) << "  / ___ \\\\__ \\ |_| | | (_)|| |_| | | |  __/\\__ \\__ \\ \n";
        cout << setw(86) << " /_/   \\_\\___/\\__|_|  \\___/ \\____|_|  \\___||___/___/ \n";

        cout << endl;

        cout << setw(72) << "=============================" << endl;
        cout << setw(71) << "        Welcome To         " << endl;
        cout << setw(68) << "        AstroGress      " << endl;
        cout << setw(72) << "=============================" << endl;
        cout << setw(65) << "[1] Start Game" << endl;
        cout << setw(67) << "[2] Instructions" << endl;
        cout << setw(63) << "[3] Settings" << endl;
        cout << setw(59) << "[4] Quit" << endl;
        cout << setw(71) << "=============================" << endl;
        cout << setw(70) << "Enter your choice [1-4]: ";

        cin >> answer;
        cin.ignore(1 , '\n');
        cout << endl;
        cout << endl;
}

int playerScores[2] = { 0,0 };


bool check(string correctAnswer, string playerAnswer, int player) {
    if (correctAnswer == playerAnswer) {
        playerScores[player]++;
        return true;
    }
    else {
        return false;
    }
}
void displayGame() {
    question randomizedQuestions[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        int randomIndex = rand() % 30;
        randomizedQuestions[i] = questions[randomIndex];
    }
    for (int i = 0; i < 10; i++) {
        cout << setw(22) << "Question number " << i + 1 << ": " << randomizedQuestions[i].questionText << endl;
        cout << endl;
        string player1Answer, player2Answer;
        cout << setw(26) << "Player 1's Answer: ";
        getline(cin, player1Answer);
        cout << endl;
        cout << setw(26) << "Player 2's Answer: ";
        getline(cin, player2Answer);
        cout << endl;

        bool check1 = check(randomizedQuestions[i].answer, player1Answer, 0);
        bool check2 = check(randomizedQuestions[i].answer, player2Answer, 1);

        if (check1) {
            if (check2) {
                cout << setw(65) << "Both players have guessed correctly! They both get 1 point." << endl;
            }
            else {
                cout << setw(59) << "Only player 1 has guessed correctly! He gets 1 point." << endl;
            }
        }
        else if (check2) {
            cout << setw(59) << "Only player 2 has guessed correctly! He gets 1 point." << endl;
        }
        else {
            cout << setw(69) << "None of the player have guessed correctly! No one gets a point." << endl;
        }
        cout << endl;


    }
    cout << setw(47) << "Player 1's Score: " << playerScores[0] << setw(24) << "Player 2's Score: " << playerScores[1] << endl;
    if (playerScores[0] == playerScores[1]) {
        cout << "The game is a Draw!" << endl;
    }
    else if(playerScores[0] > playerScores[1]) {
        cout << setw(56) << "Player 1 Wins!" << endl;
    }
    else {
        cout << "Player 2 Wins!" << endl;
    }
}

int main() {
    mainMenu();
    if (answer == 1) {
        displayGame();
    }
}