#include<iostream>
#include<string.h>

using namespace std;

int main(){

    string user_name; // declaring variable  
    string last_name; 

    // taking user input with cin

    std::cout << "What is your name? :" << std::endl;

        // using getline

    getline(cin, user_name);
    cout<<"\nWelcome to Simplilearn "<<user_name << endl;
    std::cout << "What is your last name? :" << std::endl;

        // using getline

    getline(cin, last_name);
    cout<<"\nWelcome to Simplilearn "<<last_name;
    
 std::cout << "What is your last name? :" << std::endl;

        // using getline

    getline(cin, last_name);
    return 0;

}