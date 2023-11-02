#include <iostream>
#include <list>
using namespace std;

// --------------------------------------------------

class Person {
    public:
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
void AddPerson(list<Person>& allPeople);
void DeletePerson(list<Person>& allPeople);
void PrintAllPeople(list<Person>& allPeople);

// --------------------------------------------------

int main() {
    cout << "\n";
    cout << "This program is used to keep track of a database of people.\n";
    Loop_MenuChoice();

    return 0;
}

// --------------------------------------------------

void Loop_MenuChoice(){
    list<Person> allPeople;
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
            AddPerson(allPeople);
        }
        else if(inputChoice == "2"){
            DeletePerson(allPeople);
        }
        else if(inputChoice == "3"){
            PrintAllPeople(allPeople);
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
void AddPerson(list<Person>& allPeople){
    string firstName, gender, ageStr;
    int ageNum;

    cout << "First name: ";
    cin >> firstName;
    cout << "\n";

    while(2 > 1) {
        cout << "Gender\n";
        cout << "1. Male\n";
        cout << "2. Female\n";
        cout << "Enter the number here: ";
        cin >> gender;

        if(gender == "1"){
            gender = "Male";
            break;
        }
        else if(gender == "2"){
            gender = "Female";
            break;
        }
        else {
            cout << "\"" << gender << "\" is not an option.\n\n";
        }
    }
    while(2 > 1) {
        cout << "\n";
        cout << "Age: ";
        cin >> ageStr;
        
        try {
            ageNum = stoi(ageStr);
            break;
        }
        catch(...) {
            cout << "\"" << ageStr << "\" must be an integer >= 0.\n";
        }
    }
    Person newPerson(firstName, gender, ageNum);
    allPeople.push_back(newPerson);
}
void DeletePerson(list<Person>& allPeople){
    cout << "Here is where I would: delete a person.\n";
}
void PrintAllPeople(list<Person>& allPeople){
    cout << "Here is where I would: print all people.\n";
}