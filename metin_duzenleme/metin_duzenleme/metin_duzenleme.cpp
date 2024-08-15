//Seyfullah ERDURAN   08/08/2024

#include <iostream>
#include <string>
#include <stack>
#include <fstream>

using namespace std;


struct Action {
    string type;
    string value;
};


stack<Action> actions;

int main() {
    string text = ""; 
    string command;
    string argument;
    int count;

    while (true) {
        cout << "Komut girin: ";
        cin >> command;

        if (command == "append") {
            cin.ignore();
            getline(cin, argument);
            text += argument;
            actions.push({ "append", argument });

        }
        else if (command == "delete") {
            cin >> count;
            string deletedText = text.substr(text.size() - count, count);
            text.erase(text.size() - count);
            actions.push({ "delete", deletedText });

        }
        else if (command == "print") {
            cin >> count;
            cout << text.substr(0, count) << endl;

        }
        else if (command == "undo") {
            if (!actions.empty()) {
                Action lastAction = actions.top();
                actions.pop();

                if (lastAction.type == "append") {
                    text.erase(text.size() - lastAction.value.size());
                }
                else if (lastAction.type == "delete") {
                    text += lastAction.value;
                }
            }

        }
        else if (command == "save") {
            cin.ignore();
            getline(cin, argument);
            ofstream outFile(argument);
            outFile << text;
            outFile.close();
            break; 

        }
        else {
            cout << "Gecersiz komut!" << endl;
        }
    }

    return 0;
}
