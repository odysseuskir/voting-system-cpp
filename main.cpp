/*Author: Odysseus-Abraham Kirikopoulos
License: GNU General Public License v3.0
Version: 1.1 Stable
*/

#include <iostream>

int main() {

    // Declare variables
    double party_a = 0.0;
    double party_b = 0.0;
    double party_c = 0.0;
    double ttl_votes = 0.0;
    char authentication[] = "null";
    int option = 10;
    bool authentic_copy = false;
    double party_a_percentage = 0.0;
    double party_b_percentage = 0.0;
    double party_c_percentage = 0.0;

    // Print license and version

    std::cout << "Voting System Copyright (C) 2022 Odysseus-Abraham Kirikopoulos\nThis program comes with ABSOLUTELY NO WARRANTY.\nThis is free software, and you are welcome to redistribute it under certain conditions.";
    std::cout << "Author: Odysseus-Abraham Kirikopoulos\n";
    std::cout << "Build Version: 1.1 Stable\n";

    // Print welcome message

    std::cout << "Welcome to the Voting System";

    // Print party list

    std::cout << "\nParty list:\n\nParty A (Code: 1)\nParty B (Code: 2)\nParty C (Code: 3)\n\nTo exit submitions type 0\n";

    while (option != 0) {

        // Print vote submition

        std::cout << "Vote here: ";
        std::cin >> option;

        // Calculate votes

        if (option == 1) {
        party_a += 1.0;
        ttl_votes += 1.0;
        std::cout << ("\nYour vote has been registered\n");
        } else if (option == 2) {
        party_b += 1.0;
        ttl_votes += 1.0;
        std::cout << ("\nYour vote has been registered\n");
        } else if (option == 3) {
        party_c += 1.0;
        ttl_votes += 1.0;
        std::cout << ("\nYour vote has been registered\n");
        } else if (option == 0) {
            option = 0;
        } else {
        std::cout << ("\n\nError: Unknown party\n\n");
        }
    }

    // Calculate percentages

    if (party_a == 0 && party_b == 0 && party_c == 0) {
        party_a_percentage = 0;
        party_b_percentage = 0;
        party_c_percentage = 0;
    } else {
        party_a_percentage = (party_a / ttl_votes) * 100.0;
        party_b_percentage = (party_b / ttl_votes) * 100.0;
        party_c_percentage = (party_c / ttl_votes) * 100.0;
    }

    // Print results

    std::cout << "\nParty A has: " << party_a << " votes and " << party_a_percentage << "%.\n";
    std::cout << "Party B has: " << party_b << " votes and " << party_b_percentage << "%.\n";
    std::cout << "Party C has: " << party_c << " votes and " << party_c_percentage << "%.\n";

    if (party_a > party_b && party_a > party_c) {
        std::cout << "\nParty A has the most votes\n";
    } else if (party_b > party_a && party_b > party_c) {
        std::cout << "\nParty B has the most votes\n";
    } else if (party_c > party_a && party_c > party_b) {
        std::cout << "\nParty C has the most votes\n";
    } else {
        std::cout << "\nAll parties have equal votes\n";
    }

    return 0;

}
