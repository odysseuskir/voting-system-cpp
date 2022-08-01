// Author: Odysseus-Abraham Kirikopoulos
// (CC) Attribution-NonCommercial 4.0 International - SOME RIGHTS RESERVED - ODYSSEUS ABRAHAM KIRIKOPOULOS - 2022
// Version: 1.0 beta

#include <iostream>

int main() {

    int party_a = 0;
    int party_b = 0;
    int party_c = 0;
    int ttl_votes = 0;
    char authentication[] = "null";
    int option = 10;
    bool authentic_copy = false;

    std::cout << "Launching\n";
    std::cout << "Author: Odysseus-Abraham Kirikopoulos\n";
    std::cout << "(CC) Attribution-NonCommercial 4.0 International - SOME RIGHTS RESERVED - ODYSSEUS ABRAHAM KIRIKOPOULOS - 2022\n";
    std::cout << "Build Version: 0.1 dev\n";

    std::cout << "Welcome to the Voting System";

    // while(authentic_copy == false) {
    //     std::cout << "\nPlease enter the election center authetication code: ";
    //     std::cin >> authentication;
    //     if (authentication == "demo") {
    //         authentic_copy = true;
    //         std::cout << "You have successfuly signed in";
    //     } else {
    //         std::cout << "Failed to authenticate. Please try again.";
    //     }
    // }

    std::cout << "\nParty list:\n\nParty A (Code: 1)\nParty B (Code: 2)\nParty C (Code: 3)\n\nTo exit submitions type 0\n";

    while (option != 0) {

        std::cout << "Vote here: ";
        std::cin >> option;

        if (option == 1) {
        party_a += 1;
        ttl_votes += 1;
        std::cout << ("\nYour vote has been registered\n");
        } else if (option == 2) {
        party_b += 1;
        ttl_votes += 1;
        std::cout << ("\nYour vote has been registered\n");
        } else if (option == 3) {
        party_c += 1;
        ttl_votes += 1;
        std::cout << ("\nYour vote has been registered\n");
        } else if (option == 0) {
            option = 0;
        } else {
        std::cout << ("Error: Unknown party");
        }
    }

    std::cout << "\nParty A has: " << party_a << " votes.\n";
    std::cout << "Party B has: " << party_b << " votes.\n";
    std::cout << "Party C has: " << party_c << " votes.\n";
}