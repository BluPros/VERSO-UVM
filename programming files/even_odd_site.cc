#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open file of numbers
    ofstream file;
    file.open("numbers.html");
    // Create html headers/titles
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";
    // Loop through finding which numbers are even
    // Add even numbers to first column and odd numbers to second column
    for (int i = 0; i <= 50; i++) {
        if (i % 2 = 0) {
            file << "<tr><td>" << i << "</td><td></td></tr>\n";
        }
        else {
            file << "<tr><td></td><td>" << i << "</td></tr>\n";
        }
    }
    // Close file
    file << "</table>\n</body>\n</html>";
    file.close();
    ifstream input("numbers.html");
    cout << input.rdbuf();
    input.close();
    return 0;
}
