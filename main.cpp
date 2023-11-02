#include <iostream>
#include <list>
using namespace std;

// --------------------------------------------------

class Person {
    string FirstName;
    string Gender;
    int Age;

    Person(string firstName, string gender, int age) {
        FirstName = firstName;
        Gender = gender;
        Age = age;
    }
};

// --------------------------------------------------

void Loop_MenuChoice();
void AddPerson(list<Person>& AllPeople);
void DeletePerson(list<Person>& AllPeople);
void PrintAllPeople(list<Person>& AllPeople);

// --------------------------------------------------

int main() {
    cout << "\n";
    cout << "This program is used to keep track of a database of people.\n";
    Loop_MenuChoice();

    return 0;
}

// --------------------------------------------------

void Loop_MenuChoice(){
    list<Person> AllPeople;
    string inputChoice;
    
    while(2 > 1) {
        cout << "_________________________\n";
        cout << "\n";          
        cout << "What would you like to do?.\n";
        cout << "\n";
        cout << "1. Add a person\n";
        cout << "2. Delete a person\n";
        cout << "3. Print all people\n";
        cout << "4. Exit the program\n";
        cout << "\n";
        cout << "Enter the number here: ";
        cin >> inputChoice;
        cout << "\n";

        if(inputChoice == "1"){
            AddPerson(AllPeople);
        }
        else if(inputChoice == "2"){
            DeletePerson(AllPeople);
        }
        else if(inputChoice == "3"){
            PrintAllPeople(AllPeople);
        }
        else if(inputChoice == "4"){
            cout << "\n\n";
            exit(0);
        }
        else {
            cout << "\"" << inputChoice << "\" is not an option.\n";
        }
    }
}
void AddPerson(list<Person>& AllPeople){
    cout << "Here is where I would: add a person.\n";
}
void DeletePerson(list<Person>& AllPeople){
    cout << "Here is where I would: delete a person.\n";
}
void PrintAllPeople(list<Person>& AllPeople){
    cout << "Here is where I would: print all people.\n";
}