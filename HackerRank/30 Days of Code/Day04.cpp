#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
    private:
        int age;
    
    public:
    
        Person(int initialAge)
        {
            if(initialAge < 0)
            {
                age = 0;
                cout<<"Age is not valid, setting age to 0."<<endl;
            }
            else 
            {
                age = initialAge;
            }
        }
        
        void yearPasses()
        {
            age++;
        }
        
        void amIOld()
        {
            if(age < 13)
            {
                cout<<"You are young."<<endl;
            }
            else if(age >= 13 && age < 18)
            {
                cout<<"You are a teenager."<<endl;
            }
            else 
            {
                cout<<"You are old."<<endl;
            }
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    cin>>T;

    // Loop through each test case
    for (int i = 0; i < T; i++) {
        int age;
        cin >> age;
        
        // Create an object of the Person class for each test case
        Person person = Person(age);
        person.amIOld();
      
        for (int j = 0; j < 3; j++)
        {
            person.yearPasses();
        }
      
        person.amIOld();
        cout<<endl;
        
    }

    return 0;
}
