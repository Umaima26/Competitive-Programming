#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Strings {
    string even;
    string odd;
};

Strings processString(string S)
{
    Strings result;
    
    for(int i = 0; i < S.length(); i++)
    {
        if(i % 2 == 0)
        {
            result.even += S[i];
        }
        else 
        {
            result.odd += S[i];
        }
    }
    
    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string S;
    int T;
    
    cin>>T;
    
    for(int i = 0; i < T; i++)
    {
        cin>>S;
        Strings result = processString(S);
        cout<<result.even<<" "<<result.odd<<endl;
        
    }
    
    return 0;
}
