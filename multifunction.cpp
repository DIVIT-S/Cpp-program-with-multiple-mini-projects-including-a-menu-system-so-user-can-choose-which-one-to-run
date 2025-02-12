#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void calculator() {
    double a, b;
    char op;
    cout << "Enter first number, operator (+, -, *, /), second number: ";
    cin >> a >> op >> b;
    switch (op) {
        case '+': cout << "Result: " << a + b << endl; break;
        case '-': cout << "Result: " << a - b << endl; break;
        case '*': cout << "Result: " << a * b << endl; break;
        case '/': if (b != 0) cout << "Result: " << a / b << endl;
                  else cout << "Cannot divide by zero!" << endl; break;
        default: cout << "Invalid operator!" << endl;
    }
}

void numberGuessingGame() {
    srand(time(0));
    int number = rand() % 100 + 1, guess;
    cout << "Guess a number between 1 and 100: ";
    do {
        cin >> guess;
        if (guess > number) cout << "Too high! Try again: ";
        else if (guess < number) cout << "Too low! Try again: ";
    } while (guess != number);
    cout << "Congratulations! You guessed it!" << endl;
}

void ageCalculator() {
    int birthYear, currentYear = 2025;
    cout << "Enter your birth year: ";
    cin >> birthYear;
    cout << "Your age is: " << currentYear - birthYear << " years" << endl;
}

void temperatureConverter() {
    double temp;
    char unit;
    cout << "Enter temperature followed by unit (C/F): ";
    cin >> temp >> unit;
    if (unit == 'C' || unit == 'c')
        cout << "In Fahrenheit: " << (temp * 9/5) + 32 << " F" << endl;
    else if (unit == 'F' || unit == 'f')
        cout << "In Celsius: " << (temp - 32) * 5/9 << " C" << endl;
    else
        cout << "Invalid unit!" << endl;
}

void evenOrOddChecker() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (num % 2 == 0 ? "Even" : "Odd") << endl;
}

void multiplicationTable() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= 10; i++)
        cout << num << " x " << i << " = " << num * i << endl;
}

void simpleToDoList() {
    vector<string> tasks;
    string task;
    char choice;
    do {
        cout << "Enter a task: ";
        cin.ignore();
        getline(cin, task);
        tasks.push_back(task);
        cout << "Add another task? (y/n): ";
        cin >> choice;
    } while (choice == 'y');
    cout << "Your To-Do List:" << endl;
    for (const auto &t : tasks) cout << "- " << t << endl;
}



int main() {
    int choice;
    do {
        cout << "\nChoose a project to run: \n";
        cout << "1. Calculator\n2. Number Guessing Game\n3. Age Calculator\n4. Temperature Converter\n";
        cout << "5. Even or Odd Checker\n6. Multiplication Table\n7. Simple To-Do List\n8. Rock, Paper, Scissors\n";
        cout << "0. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: calculator(); break;
            case 2: numberGuessingGame(); break;
            case 3: ageCalculator(); break;
            case 4: temperatureConverter(); break;
            case 5: evenOrOddChecker(); break;
            case 6: multiplicationTable(); break;
            case 7: simpleToDoList(); break;
            case 0: cout << "Exiting program. Goodbye!" << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 0);
    return 0;
}