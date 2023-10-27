#include <iostream>
#include <string>

int main() {
    int numAppointments;

    std::cout << "Appointment Scheduling\n";
    std::cout << "How many appointments do you want to schedule? ";
    std::cin >> numAppointments;

    for (int i = 0; i < numAppointments; i++) {
        std::string patientName, appointmentDate;

        std::cout << "Enter patient name: ";
        std::cin >> patientName;
        std::cout << "Enter appointment date (YYYY-MM-DD): ";
        std::cin >> appointmentDate;

        std::cout << "Appointment for " << patientName << " on " << appointmentDate << " has been scheduled.\n";
    }

    std::cout << "Appointment scheduling process completed.\n";

    return 0;
}
