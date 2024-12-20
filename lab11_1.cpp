#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    int random;
    string grade;
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get(); cin.get(); cin.get();
    random = rand() % 9 + 1;
    switch (random){
    case 1:
        grade = "A";
        break;
    case 2:
        grade = "B+";
        break;
    case 3:
        grade = "B";
        break;
    case 4:
        grade = "C+";
        break;
    case 5:
        grade = "C";
        break;
    case 6:
        grade = "D+";
        break;
    case 7:
        grade = "D";
        break;
    case 8:
        grade = "F";
        break;
    case 9:
        grade = "W";
        break;
    default:
        break;
    }
    cout << "You will get " << grade << " in this 261102.";

}

// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
