#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    int count = 0, maxCount = 0;
    queue<int> binaryQueue;
        
    while(n > 0)
    {
        binaryQueue.push(n % 2);
        n = n/2;
    }
    
    while (!binaryQueue.empty()) 
    {
        int digit = binaryQueue.front();
        binaryQueue.pop();

        if (digit == 1) 
        {
            count++;
            maxCount = max(maxCount, count);
        } 
        else 
        {
            count = 0;
        }
    }
    
    cout<<maxCount<<endl;
    
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
