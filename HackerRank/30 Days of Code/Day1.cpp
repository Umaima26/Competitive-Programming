#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    //Tutorial Link: https://www.hackerrank.com/challenges/30-data-types/tutorial
    
    // Declare second integer, double, and String variables.
    int var1;
    double var2;
    string var3;
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin>>var1;
    cin>>var2;
    getline(cin >> ws, var3);

    // Print the sum of both integer variables on a new line.
    cout<<var1+i<<endl;
    // Print the sum of the double variables on a new line.
    cout<<fixed<<setprecision(1)<<var2+d<<endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s + var3<<endl;

    return 0;
}
