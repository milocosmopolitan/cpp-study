// Import "Input/Output" Stream
// equivalent NodeJS "stdio" from "process" & "child_process"
#include <iostream>
// use namespace so that you don't need to repeat typing std::
using namespace std;

int main() {
  // declare string variable named "name"
  string name;
  string first_name; 
  string last_name;
  // char name; // hmm this doesn't work. why?
  int age;

  // "\n" is equivalent to endl since using "\n\n" did created two empty lines
  cout << "Hello MAC101 Class!\n\n"; 
  cout << "What is your name?" << endl; // endl = end line

  // std::cin is input stream
  // which will be prompted on the terminal 
  // Hmmm input variable doesn't take space without quotation
  // cin >> name;
  cout << " Firstname:" << endl;
  cin >> first_name;

  cout << " Lastname:" << endl;
  cin >> last_name;
  // cout << "  You entered " << name << endl;
  cout << "  You entered " << first_name << " " << last_name << endl;

  cout << "What is your age?" << endl;
  // std::cin is input stream
  // which will be prompted on the terminal 
  cin >> age;
  cout << "  You entered " << age << "\n" << endl;
}
