#include <iostream>
#include <string>
#include<windows.h>

using namespace std;

int searchVal(string base, string sub) {

    if (base.find(sub) != string::npos) {
        return true;
    }
    else {
        return false;
    }

}

int main()
{
    string feeling;

    cout << "Hello, I am a therapist, how are you feeling?" << endl << "Feeling: ";
    cin >> feeling;


    if (searchVal(feeling, "happy") == 1 || searchVal(feeling, "feel happy") == 1 || searchVal(feeling, "awesome") == 1 || searchVal(feeling, "very happy") == 1 || searchVal(feeling, "not bad") == 1 || searchVal(feeling, "great") == 1 || searchVal(feeling, "good") == 1) 
    {
        if (searchVal(feeling, "feel terrible") == 0 && searchVal(feeling, "feel bad") == 0 && searchVal(feeling, "feeling sad") == 0 && searchVal(feeling, "feel sad") == 0)
        {
            if (feeling != "bad" || feeling != "terrible" || feeling != "sad" || feeling != "mad") 
            {
                cout << "I'm very glad to here that!";
            }
        }
    }
    else {

        cout << "I'm sorry to here that, please follow my instructions and hopefully you will feel better." << endl;
        Sleep(2300);

        cout << "First, what you want to do is to breathe in. Breathe in for 6 seconds until the timer finishes." << endl << endl;

        Sleep(1200);
        cout << "On your mark, ";
        Sleep(1000);
        cout << "Go!" << endl;

        for (int i = 6; i >= 0; --i) {

            Sleep(1000);
            cout << to_string(i) << endl;

        }

        
        cout << endl << "Great!" << endl << "What you will do next is hold your breath for 7 seconds!" << endl;

        Sleep(1200);
        cout << "On your mark, ";
        Sleep(1000);
        cout << "Go!" << endl;

        for (int i = 7; i >= 0; --i) {

            Sleep(1000);
            cout << to_string(i) << endl;

        }

        cout << "You did great! Now, what you will do is breathe out for 8 seconds!" << endl;

        Sleep(1200);
        cout << "On your mark, ";
        Sleep(1000);
        cout << "Go!" << endl;

        for (int i = 8; i >= 0; --i) {

            Sleep(1000);
            cout << to_string(i) << endl;

        }

        cout << endl << "You did very, very well. I hope I made your day at least a little better!" << endl;


    }


    return 0;
}