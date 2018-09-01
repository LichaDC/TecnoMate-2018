#include <iostream>
using namespace std;

string word;
string word1;
string word2;

main(){

    word1 = "Hello";
    word2 = "World";
    word  = word1 + word2; // word contains now contains "HelloWorld"

    word = "hola";
    word[0] = toupper (word[0]); // Convert to Uppercase the first letter (#include <cctype>?)
    word.length(); // Return the length.
    cout<< word;
    position = str.find (' ');

}
