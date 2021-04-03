/*
Date: 3/26/21
Author: Wayne Kwiat
Description:
In this programming challenge you will create a simple trivia game for two players. The program will work like this:
Starting with player 1, each player gets a turn at answering five trivia questions. (There are a total of 10 questions.)
When a question is displayed, four possible answers are also displayed.
Only one of the answers is correct, and if the player selects the correct answer he or she earns a point.
After answers have been selected for all of the questions, the program displays the number of points earned by each player
and declares the player with the highest number of points the winner.
*/

#include <iostream>
#include "Question.h"
using namespace std;

int main()
{
    int player1 = 0, player2 = 0;
    const int NUM_QUESTIONS = 10;
    Question quest_arr[NUM_QUESTIONS] = {
        Question("What does BASH stand for?", "Born Again Shell", "Basic Shell", "Bourne Again Shell", "None of the above", 3),
        Question("Which of the following is true of software version control?", "It is a naming convention for software releases.", "It is also known as source code managment.", "It is the smae as BitKeeper.", "None of the above are true.", 2),
        Question("What does YAML stand for?", "Yet Another Markup Language", "Name of its creator", "None of the above", "YAML Ain't Markup Language", 4),
        Question("How many bits are in a MAC address", "24 bits", "48 bits", "32 bits", "64 bits", 2),
        Question("Which HTTP response code indicates that a resource has moved?", "301", "201", "501", "401", 1),
        Question("What does SOAP stand for?", "Software Operations and Procedures", "Software Operations Authentication Protocol", "Simple Object Access Protocol", "Support Object Abstract Protocol", 3),
        Question("Which of the following is not an HTTP method", "GET", "HEAD", "TRIGGER", "PATCH", 3),
        Question("What command do you use to add the specific filename file.py to the Git index?", "git add .", "git index file.py", "git index add .", "git add file.py", 4),
        Question("What are the three main structures tracked by Git?", "Index, head, and local repo", "Local workspace, index, and local repository", "Remote repository, head, and local index", "None of the above", 2),
        Question("What of the following is a simple use case of a southbound API?", "Pushing network configuration changes down to devices", "Increasing security", "Streaming telemetry", "Sending information to the cloud", 1)
    };

    cout << "Welcome to the Quiz game!\n" << "Player 1 is up first with five questions!" << endl;

    for (int i = 0; i < 5; i++)
    {
        if (quest_arr[i].ask_question() == true) {
            cout << "Correct!" << endl;
            player1++;
        }
        else
            cout << "Incorrect!" << endl;
    }

    cout << "***********   Player 2 is up!   *************" << endl;

    for (int i = 5; i < NUM_QUESTIONS; i++)
    {
        if (quest_arr[i].ask_question() == true) {
            cout << "Correct!" << endl;
            player2++;
        }
        else
            cout << "Incorrect!" << endl;
    }

    if (player1 > player2) {
        cout << "**********   The Winner is Player 1!   *************";
    }
    else
        cout << "**********   The Winner is Player 2!   **************";

    return 0;
}

