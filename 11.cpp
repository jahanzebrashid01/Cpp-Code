#include <iostream>
#include <string>

int main() {
    int numRegistrations;

    std::cout << "Patient Registration\n";
    std::cout << "How many patients do you want to register? ";
    std::cin >> numRegistrations;

    for (int i = 0; i < numRegistrations; i++) {
        std::string patientName;
        int patientAge;

        std::cout << "Enter patient name: ";
        std::cin >> patientName;
        std::cout << "Enter patient age: ";
        std::cin >> patientAge;

        std::cout << "Patient " << patientName << " (Age: " << patientAge << ") has been registered.\n";
    }

    std::cout << "Patient registration process completed.\n";

    return 0;
}
