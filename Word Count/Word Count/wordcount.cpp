#include <iostream>
#include <fstream>
#include <iterator>
#include <string>

using namespace std;
int main() {
    
    string fn;

    // Notificatuion to the user to enter the file name
    cout << "Enter the file name: ";
    cin >> fn;

    // ifstream is used here to open the file
    ifstream file(fn);

    // Check if the file opened successfully
    if (!file) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }

    string word;
    int wordCount = 0;

    // Reading the file word by word and counting only non-empty words
    while (file >> word) {
        wordCount++;
    }

    // Displaying the total word count
    std::cout << "Total word count in '" << fn << "': " << wordCount << std::endl;

    return 0;
}
