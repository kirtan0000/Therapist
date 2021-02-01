#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono_literals;
using std::chrono::system_clock;

int searchVal(string base, string sub)
{

    if (base.find(sub) != string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void badFeeling()
{

    cout << "I'm sorry to here that, please follow my instructions and hopefully you will feel better." << endl;
    sleep_for(2.3s);

    cout << "First, what you want to do is to breathe in. Breathe in for 6 seconds until the timer finishes." << endl
         << endl;

    sleep_for(1.2s);
    cout << "On your mark, ";
    sleep_for(1s);
    cout << "Go!" << endl;

    for (int i = 6; i >= 0; --i)
    {

        sleep_for(1s);
        cout << to_string(i) << endl;

    }

    cout << endl
         << "Great!" << endl
         << "What you will do next is hold your breath for 7 seconds!" << endl;

    sleep_for(1.2s);
    cout << "On your mark, ";
    sleep_for(1s);
    cout << "Go!" << endl;

    for (int i = 7; i >= 0; --i)
    {

        sleep_for(1s);
        cout << to_string(i) << endl;
    }

    cout << "You did great! Now, what you will do is breathe out for 8 seconds!" << endl;

    sleep_for(1.2s);
    cout << "On your mark, ";
    sleep_for(1s);
    cout << "Go!" << endl;

    for (int i = 8; i >= 0; --i)
    {

        sleep_for(1s);
        cout << to_string(i) << endl;


    }

    cout << endl
         << "You did very, very well. I hope I made your day at least a little better!" << endl;
}

int main()
{
    string feeling;

    cout << "Hello, I am a therapist, how are you feeling?" << endl
         << "Feeling: ";
    getline(cin, feeling);
    // Using getline instead of regular cin because of some random bug

    if (searchVal(feeling, "happy") == 1 || searchVal(feeling, "feel happy") == 1 || searchVal(feeling, "awesome") == 1 || searchVal(feeling, "very happy") == 1 || searchVal(feeling, "not bad") == 1 || searchVal(feeling, "great") == 1 || searchVal(feeling, "good") == 1 || searchVal(feeling, "well") == 1 || searchVal(feeling, "im feeling good") == 1 && feeling != "not good" && searchVal(feeling, "not the best") == 0 || searchVal(feeling, "excited") == 1)
    {
        if (feeling != "im not feeling good" && feeling != "im not feeling too good" && feeling != "im not feeling the best" && feeling != "im not feeling the best today" && feeling != "not good" && feeling != "not well" && searchVal(feeling, "not the best") == 0 && searchVal(feeling, "angry") == 0 && searchVal(feeling, "agitated") == 0 && searchVal(feeling, "scared") == 0 && searchVal(feeling, "worried") == 0 && feeling != "sad" && feeling != "not great" && feeling != "not happy" && searchVal(feeling, "disgusted") == 0 && feeling != "not excited" && feeling != "not the happiest" && feeling != "worst" && feeling != "im not feeling good" && feeling != "not too good" && feeling != "not well" && feeling != "im nto feeling good" && feeling != "not teh best" && feeling != "not the best" && feeling != "horrible" && feeling != "im nto feeling too good" && feeling != "im not feeling good")
        {

            cout << "I'm very glad to here that!";
        }
        else
        {

            badFeeling();
        }
    }
    else
    {

        badFeeling();
    }

    system("pause>0");
}