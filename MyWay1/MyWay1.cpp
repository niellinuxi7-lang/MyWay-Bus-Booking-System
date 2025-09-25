#include <iostream>
#include <string>

int main() {
    const std::string USER = "customer";
    const std::string PASS = "12345";

    bool loggedIn = false;

    while (true) {
        if (!loggedIn) {
        login:
            system("cls");
            std::cout << "MyWay Bus Booking System\n";
            std::cout << "1. Login\n2. Exit\n";
            std::cout << "\nSelect option: ";

            int choice;
            if (!(std::cin >> choice)) {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                system("pause");
                std::cout << "Invalid input. Please enter a number.\n";
                goto login;
            }

            if (choice == 1) {
                std::string username, password;
                system("cls");
                std::cout << "Username: "; std::cin >> username;
                std::cout << "Password: "; std::cin >> password;

                if (username == USER && password == PASS) {
                    loggedIn = true;
                    std::cout << "Login successful. Welcome, " << USER << "!\n";
                }
                else {
                    std::cout << "\nLogin failed. Please Try Again\n\n";
                    system("pause");
                    goto login;
                }
            }
            else if (choice == 2) {
                break;
            }
            else {
                std::cout << "Unknown selection.\n";
            }
        }
        else {
            system("pause");
            system("cls");
            std::cout << "MyWay Bus Booking System\n";
            std::cout << "1. Make Your Boooking \n2. Update Booking\n3. View Booking\n4. Delete Booking\n5. Logout\n6. Exit\n";
            std::cout << "\nSelect option: ";

            int choice2;
            if (!(std::cin >> choice2)) {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                system("pause");
                std::cout << "Invalid input. Please enter a number.\n";
                continue;
            }

            int pickup;
            int dropoff;

            std::string locations[] = { "", "DPulzeMallX", "Apple Store", "Mamak Power" };

            if (choice2 == 1) {
                booking:
                system("cls");
                std::cout << "Please Choose Your Pickup Location: \n";
                std::cout << "1. DPulzeMallX \n2. Apple Store \n3. Mamak Power\n";
                std::cout << "\nSelect option: ";

                if (!(std::cin >> pickup)) {
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                    system("pause");
                    std::cout << "Invalid input. Please enter a number.\n";
                    continue;
                }

                std::cout << "\n\nPlease Choose Your DropOff Location: \n";
                std::cout << "1. DPulzeMallX \n2. Apple Store \n3. Mamak Power\n";
                std::cout << "\nSelect option: ";

                if (!(std::cin >> dropoff)) {
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                    system("pause");
                    std::cout << "Invalid input. Please enter a number.\n";
                    continue;
                }

                if (pickup < 1 || pickup > 3 || dropoff < 1 || dropoff > 3) {
                    std::cout << "Invalid selection.\n";
                    continue;
                }

                if (pickup == dropoff) {
                    std::cout << "\nPickup and DropOff cannot be the same location. Please Try Again\n";
                    system("pause");
                    goto booking;
                }

                std::cout << "\n\nYou Have Made A Booking To PickUp From: "
                    << locations[pickup]
                    << " And DropOff At: "
                    << locations[dropoff]
                    << "\n";


            }

            else if (choice2 == 2) {

            }
            else if (choice2 == 3) {

            }
            else if (choice2 == 4) {

            }
            else if (choice2 == 5) {
                loggedIn = false;
                std::cout << "Logged out.\n";
            }
            else if (choice2 == 6) {
                break;
            }
            else {
                std::cout << "Unknown command.\n";
            }
        }
    }

    return 0;
}
