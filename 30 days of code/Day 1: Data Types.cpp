#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int j; double e; string t;
    // Read and save an integer, double, and String to your variables.
    cin >> j;
    cin >> e;
    getline(cin, t);
    // Print the sum of both integer variables on a new line.
    cout << i + j << "\n";
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << (double)(d + e) << "\n";
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    //cout << t << "\n";
    cout << s + t << "\n";
    return 0;
}
