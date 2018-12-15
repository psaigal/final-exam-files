#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

int main() {
    int line;
    int count = 0;

    ifstream intFile("cards.txt");

    if (intFile.is_open())
    {
        cout << "Reading data from the file.\n";
        while ( count < 3 )
        {
            intFile >> line;
            cout << line << '\n';
            count += 1;
        }
        intFile.close();
    }
    else 
    {
        cout << "Unable to open file";
    }
    return 0;
}


