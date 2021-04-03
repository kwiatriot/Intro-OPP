// Specification file for the Question class
#ifndef QUESTION
#define QUESTION

#include <string>
using namespace std;

class Question
{
private:
    string question_text, ans1, ans2, ans3, ans4;
    int ans_correct;
public:
    Question(string a, string b, string c, string d, string e, int f)
    {
        question_text = a;
        ans1 = b;
        ans2 = c;
        ans3 = d;
        ans4 = e;
        ans_correct = f;
    }
    bool ask_question()
    {
        int player_response;
        cout << question_text << endl;
        cout << "1. " << ans1 << endl;
        cout << "2. " << ans2 << endl;
        cout << "3. " << ans3 << endl;
        cout << "4. " << ans4 << endl;
        cin >> player_response;
        if (player_response == ans_correct)
            return true;
        else
            return false;
    }
};

#endif // !QUESTION




