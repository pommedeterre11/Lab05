// Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <cctype>



char convert(char inp) { //This is the function responsible for translating the original characters into their encoded counterparts. 

    std::vector<std::string> cypher = { "V","F","X","B","L","I","T","Z","J","R","P","H","D","K","N","O","W","S","G","U","Y","Q","M","A","C","E" };
    if (std::isupper(inp)) { //I hardcoded it rather than using ascii by writing a lot of if statements. 
        if (inp == 'A') {
            return 'V';
        }
        else if (inp == 'B') {
            return 'F';
        }
        else if (inp == 'C') {
            return 'X';
        }
        else if (inp == 'D') {
            return 'B';
        }
        else if (inp == 'E') {
            return 'L';
        }
        else if (inp == 'F') {
            return 'I';
        }
        else if (inp == 'G') {
            return 'T';
        }
        else if (inp == 'H') {
            return 'Z';
        }
        else if (inp == 'I') {
            return 'J';
        }
        else if (inp == 'J') {
            return 'R';
        }
        else if (inp == 'K') {
            return 'P';
        }
        else if (inp == 'L') {
            return 'H';
        }
        else if (inp == 'M') {
            return 'D';
        }
        else if (inp == 'N') {
            return 'K';
        }
        else if (inp == 'O') {
            return 'N';
        }
        else if (inp == 'P') {
            return 'O';
        }
        else if (inp == 'Q') {
            return 'W';
        }
        else if (inp == 'R') {
            return 'S';
        }
        else if (inp == 'S') {
            return 'G';
        }
        else if (inp == 'T') {
            return 'U';
        }
        else if (inp == 'U') {
            return 'Y';
        }
        else if (inp == 'V') {
            return 'Q';
        }
        else if (inp == 'W') {
            return 'M';
        }
        else if (inp == 'X') {
            return 'A';
        }
        else if (inp == 'Y') {
            return 'C';
        }
        else{
            return 'E';
        }

    }
    else if(std::islower(inp)) {
        if (inp == 'a') {
            return 'v';
        }
        else if (inp == 'b') {
            return 'f';
        }
        else if (inp == 'c') {
            return 'x';
        }
        else if (inp == 'd') {
            return 'b';
        }
        else if (inp == 'e') {
            return 'l';
        }
        else if (inp == 'f') {
            return 'i';
        }
        else if (inp == 'g') {
            return 't';
        }
        else if (inp == 'h') {
            return 'z';
        }
        else if (inp == 'i') {
            return 'j';
        }
        else if (inp == 'j') {
            return 'r';
        }
        else if (inp == 'k') {
            return 'p';
        }
        else if (inp == 'l') {
            return 'h';
        }
        else if (inp == 'm') {
            return 'd';
        }
        else if (inp == 'n') {
            return 'k';
        }
        else if (inp == 'o') {
            return 'n';
        }
        else if (inp == 'p') {
            return 'o';
        }
        else if (inp == 'q') {
            return 'w';
        }
        else if (inp == 'r') {
            return 's';
        }
        else if (inp == 's') {
            return 'g';
        }
        else if (inp == 't') {
            return 'u';
        }
        else if (inp == 'u') {
            return 'y';
        }
        else if (inp == 'v') {
            return 'q';
        }
        else if (inp == 'w') {
            return 'm';
        }
        else if (inp == 'x') {
            return 'a';
        }
        else if (inp == 'y') {
            return 'c';
        }
        else {
            return 'e';
        }
    }
    else {
        return inp;
    }
    
}

int main() //The main function of the program. There is a simple loop that loops through the inputted string.
{
    std::cout << "Hello World!\n";


    std::string userinput;
    std::cout << "Input text to cypher:";
    std::string encrypted;

    std::getline(std::cin, userinput);

    int N = userinput.length();

    for (int i = 0; i < N; i++) {
        encrypted += convert(userinput[i]); //The loop simply extracts the next character from the string, inputs it into convert, and adds the character the convert function returns to the end of the encrypted string. 
    }
    std::cout << "Encoded message:";
    std::cout << encrypted << std::endl;
    return 0; 

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
