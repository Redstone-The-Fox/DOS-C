#include <string>
#include <iostream>

using namespace std;

string cmi = "/kw.zip-tx/none";
string cdir = "/";
string username = "USERNAME=NIL_ERROR";

void setup() {
    cout << "Set a username -> ";
    cin >> username;
}

void cmdi() {
    cout << "[" << username << "] | [" << cdir << "] | $ ";
    getline(cin, cmi);
    if (cmi == "version") {
        // version.cmd
        cout << "DOS-C Version 1.0 \n";
        cmdi();
    } else if (cmi == "clear") {
        system("clear");
        cmdi();
    } else if (cmi == "whoami") {
        cout << username << "\n";
        cmdi();
    } else {
        cout << "Invalid Command: " << cmi << "\n";
        cmdi();
    }
}

int main() {
    cout << "Welcome to DOS+C!" << "\n";
    setup();
    cmdi();
    return 0;
}
