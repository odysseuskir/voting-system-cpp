/*
Author: Odysseus-Abraham Kirikopoulos
License: GNU General Public License v3.0
Version: 1.1 beta
*/

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
    std::cout << "License: GNU General Public License v3.0\n";
    std::cout << "Build Version: 1.1 beta\n";

    std::cout << "Welcome to the Voting System";

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

    if (party_a > party_b && party_a > party_c) {
        std::cout << "\nParty A has the most votes";
    } else if (party_b > party_a && party_b > party_c) {
        std::cout << "\nParty B has the most votes";
    } else if (party_c > party_a && party_c > party_b) {
        std::cout << "\nParty C has the most votes";
    }
}
