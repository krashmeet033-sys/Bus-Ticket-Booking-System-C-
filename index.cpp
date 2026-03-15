#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class Bus {
private:
    int busNumber;
    int totalSeats;
    vector<bool> seats;

public:
    Bus(int number, int seatsCount) : busNumber(number), totalSeats(seatsCount) {
        seats.resize(totalSeats, false); // Initialize all seats as available (false)
    }

    void viewSeats() {
        cout << "\n--- Seat Layout for Bus " << busNumber << " ---\n";
        cout << " [A]: Available   [B]: Booked\n";
        cout << "--------------------------------------\n";
        cout << " Row    Left Side       Aisle    Right Side\n";
        cout << "--------------------------------------\n";
        
        int rows = (totalSeats + 3) / 4;
        for (int r = 0; r < rows; r++) {
            cout << " " << setw(2) << r + 1 << "   ";
            
            // Left Side (2 seats)
            for (int s = 0; s < 2; s++) {
                int idx = r * 4 + s;
                if (idx < totalSeats) {
                    cout << "[" << (seats[idx] ? "B" : "A") << "] " << setw(2) << idx + 1 << "  ";
                } else {
                    cout << "        ";
                }
            }
            
            cout << "  ||    "; // Aisle
            
            // Right Side (2 seats)
            for (int s = 2; s < 4; s++) {
                int idx = r * 4 + s;
                if (idx < totalSeats) {
                    cout << "[" << (seats[idx] ? "B" : "A") << "] " << setw(2) << idx + 1 << "  ";
                } else {
                    cout << "        ";
                }
            }
            cout << endl;
        }
        cout << "--------------------------------------\n";
    }

    void bookSeat(int seatNumber) {
        if (seatNumber < 1 || seatNumber > totalSeats) {
            cout << "Error: Invalid seat number! Please choose between 1 and " << totalSeats << ".\n";
            return;
        }

        if (seats[seatNumber - 1]) {
            cout << "Error: Seat " << seatNumber << " is already booked!\n";
        } else {
            seats[seatNumber - 1] = true;
            cout << "Seat Booked Successfully\n";
            cout << "Seat Number: " << seatNumber << endl;
        }
    }

    void cancelBooking(int seatNumber) {
        if (seatNumber < 1 || seatNumber > totalSeats) {
            cout << "Error: Invalid seat number! Please choose between 1 and " << totalSeats << ".\n";
            return;
        }

        if (!seats[seatNumber - 1]) {
            cout << "Error: Seat " << seatNumber << " is not booked yet!\n";
        } else {
            seats[seatNumber - 1] = false;
            cout << "Booking Cancelled Successfully\n";
            cout << "Seat Number: " << seatNumber << endl;
        }
    }

    int getBusNumber() const { return busNumber; }
};

int main() {
    int busNum, totalS;
    
    cout << "ITM Skills University\n";
    cout << "Case Study 112: Bus Ticket Booking System (C++)\n";
    cout << "-----------------------------------------------\n";
    
    cout << "Enter Bus Number: ";
    cin >> busNum;
    cout << "Enter Total Seats: ";
    cin >> totalS;

    if (totalS <= 0) {
        cout << "Invalid total seats. Setting default to 20.\n";
        totalS = 20;
    }

    Bus myBus(busNum, totalS);
    int choice;

    do {
        cout << "\n----- Main Menu -----\n";
        cout << "1. View Seats\n";
        cout << "2. Book Seat\n";
        cout << "3. Cancel Seat\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                myBus.viewSeats();
                break;
            case 2: {
                int seatToBook;
                cout << "Enter seat number to book: ";
                cin >> seatToBook;
                myBus.bookSeat(seatToBook);
                break;
            }
            case 3: {
                int seatToCancel;
                cout << "Enter seat number to cancel: ";
                cin >> seatToCancel;
                myBus.cancelBooking(seatToCancel);
                break;
            }
            case 4:
                cout << "Exiting Program. Thank you!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}