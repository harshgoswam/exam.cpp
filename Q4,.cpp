#include <iostream>
#include <stdexcept>

class Person {
private:
    int age;

public:
    Person(int personAge) : age(personAge) {}

    void vote() 
	
	{
        if (age < 18) 
		{
            throw (" 18 years old to vote.");
        }

         cout<< "You are eligible to vote" << endl;
        
    }
};

int main() {
    int personAge;

    cout << "Enter your age: ";
    cin >> personAge;

    try
	 {
        Person person(personAge);
        
        person.vote();
    } 
	
	
	catch
	 (const exception& e) {
        scr << "Error: " << e() << endl;
    }

}

