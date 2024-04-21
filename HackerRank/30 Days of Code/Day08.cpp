#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    string name, phoneNum, query;
    map<string, string> phoneBook;
    
    cin>>n;
    
    for(int i = 0; i < n; i++)
    {
        cin>>name>>phoneNum;
        phoneBook[name] = phoneNum;
    }
    
    while(cin>>query)
    {
        auto iterator = phoneBook.find(query);
        if (iterator != phoneBook.end()) {
            cout << iterator->first << "=" << iterator->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}
