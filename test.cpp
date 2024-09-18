// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <sstream> 
#include <string> 

using namespace std;

// taken from https://www.geeksforgeeks.org/how-to-split-string-into-an-array-in-cpp/
void splitString(string& input, char delimiter,
    string arr[], int& index)
{
    // Creating an input string stream from the input string 
    istringstream stream(input);

    // Temporary string to store each token 
    string token;

    // Read tokens from the string stream separated by the 
    // delimiter 
    while (getline(stream, token, delimiter)) {
        // Add the token to the array 
        arr[index++] = token;
    }
}

int main() {
    int n;
    cin >> n;
    const int totalItems = n - 1;
    // Plan: Create "marked" array and then mark based on the index
    vector<bool> marked;
    string numbers;
    cin >> numbers;
    for (int i = 0; i < totalItems; i++) {
        int curr;
        cin >> curr;
        marked[curr] = true;
    }
    for (int i = 1; i < marked.size(); i++) {
        if (marked[i] == false) {
            cout << i;
            return 0;
        }
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
