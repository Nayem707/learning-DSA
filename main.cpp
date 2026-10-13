

// =============================================================================================
// 01.This is a simple C++ program that demonstrates the use of basic input and output in C++.
// The program includes the necessary header files and uses the standard namespace.
// It defines a main function that prints "Hello, World!" to the console using the cout object.
// The program ends by returning 0, indicating successful execution.
// =============================================================================================


// int main() {
//     cout << "Hello, World!" << endl;

//     return 0;
// }

// =============================================================================================
// 02. This is a simple C++ program that demonstrates the use of basic data types and output in C++. 
// The program includes the necessary header files and uses the standard namespace. 
// It defines variables of different types, assigns values to them, and then prints those values 
// to the console. The program ends by returning 0, indicating successful execution.
// =============================================================================================


// int main() {
//     int age = 25;
//     double price = 99.5;
//     string name = "Nayem";
//     bool isDeveloper = true;
//     char grade = 'A';

//     cout << age << '\n';
//     cout << price << '\n';
//     cout << name << '\n';
//     cout << isDeveloper << '\n';
//     cout << grade << '\n';

//     return 0;
// }

// =============================================================================================
// 03. This is a simple C++ program that demonstrates the use of basic arithmetic operations in C++.
// The program includes the necessary header files and uses the standard namespace.
// It defines a main function that prompts the user to enter two numbers, reads those numbers from 
// the console, calculates their sum, and then prints the result to the console. The program ends 
// by returning 0, indicating successful execution.
// =============================================================================================


// int main() {
//     int a, b;

//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     int sum = a + b;

//     cout << "Sum = " << sum << '\n';

//     return 0;
// }


// int main(){

//     int a = 10;
//     int b = 20;
//     int sum = a + b;
//     cout << "sum = " << sum << endl;

// }


// int main(){

//     int a, b;

//     cout << "Enter two numbers: ";

//     cin >> a >> b;

//     int sum = a + b;

//     cout << "sum = " << sum << endl;

//     return 0;
// }


// int main() {
//     int a, b;
//     cin >> a >> b;
//     int sum = a + b;
//     cout << sum << endl;
//     return 0;
// }

// int main(){
//     int age = 25;
//     double price = 99.5;
//     string name = "Nayem";
//     bool isDeveloper = true;
//     char grade = 'A';
//     float pi = 3.14159;

//     cout << "Age: " << age << endl;
//     cout << "Price: " << price << endl;
//     cout << "Name: " << name << endl;
//     cout << "Is Developer: " << isDeveloper << endl;
//     cout << "Grade: " << grade << endl;
//     cout << "Pi: " << pi << endl;

//     return 0;
// }

// =============================================================================================
// 04. This is a simple C++ program that demonstrates the use of structures in C++.
// The program includes the necessary header files and uses the standard namespace.
// It defines a structure called Person that contains several member variables of different types.
// The program then creates an instance of the Person structure, assigns values to its member variables, 
// and prints those values to the console. The program ends by returning 0, indicating successful execution.
// =============================================================================================

// struct Person {
//     int age;
//     double price;
//     std::string name;
//     bool isDeveloper;
//     char grade;
//     float pi;
// };

// int main() {
//     Person person;
//     person.age = 25;
//     person.price = 99.5;
//     person.name = "Nayem";
//     person.isDeveloper = true;
//     person.grade = 'A';
//     person.pi = 3.14159;

//     cout << "Age: " << person.age << endl;
//     cout << "Price: " << person.price << endl;
//     cout << "Name: " << person.name << endl;
//     cout << "Is Developer: " << person.isDeveloper << endl;
//     cout << "Grade: " << person.grade << endl;
//     cout << "Pi: " << person.pi << endl;

//     return 0;
// }

// struct Person {
//     int id;
//     std::string name;
//     bool isDeveloper;
//     int age;
//     double price;
//     char grade;
//     float pi;
// };

// int main() {
//     Person user = {01, "Nayem", true, 25, 99.5, 'A', 3.14159};

//     cout << "ID: " << user.id << endl;
//     cout << "Name: " << user.name << endl;
//     cout << "Is Developer: " << (user.isDeveloper ? "Yes" : "No") << endl;
//     cout << "Age: " << user.age << endl;
//     cout << "Grade: " << user.grade << endl;
//     cout << "Price: " << user.price << endl;
//     cout << "Pi: " << user.pi << endl;

//     return 0;
// }


// int main() {
//     map<string, string> user = {
//         {"name", "Nayem"},
//         {"age", "25"},
//         {"isDeveloper", "true"}
//     };

//     cout << "Name: " << user["name"] << endl;
//     cout << "Age: " << user["age"] << endl;
//     cout << "Is Developer: " << user["isDeveloper"] << endl;

//     return 0;
// }

// struct User {
//     int age;
//     double price;
//     string name;
//     bool isDeveloper;
//     char grade;
//     float pi;
// };

// int main() {

//     User user1 = {25, 99.5, "Nayem", true, 'A', 3.14159f};
//     User user2 = {22, 59.5, "Islamy", true, 'B', 4.14159f};

//     cout << "User 1: " << endl;
//     cout << "Name: " << user1.name << endl;
//     cout << "Age: " << user1.age << endl;

//     cout << "User 2: " << endl;
//     cout << "Name: " << user2.name << endl;
//     cout << "Age: " << user2.age << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

// int main() {
// int a = 0;
// int b = 1;

// int next1 = a + b;
// int next2 = next1 + b;
// int next3 = next2 + next1;
// int next4 = next3 + next2;
// int next5 = next4 + next3;

// cout << next1 << endl;
// cout << next2 << endl;
// cout << next3 << endl;
// cout << next4 << endl;
// cout << next5 << endl;

// return 0;
// }

int main() {
int a = 0;
int b = 1;

int one = a + b;
int two = one + one;
int three = two + one;
int four = three + two;
int five = four + three;

cout << one << endl;
cout << two << endl;
cout << three << endl;
cout << four << endl;
cout << five << endl;

return 0;
}

