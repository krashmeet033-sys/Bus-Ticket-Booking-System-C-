🚌 Bus Ticket Booking System (C++)

A console-based Bus Ticket Booking System developed in C++ that simulates how real-world bus reservation systems manage seat bookings. The program allows users to view seat availability, book seats, cancel reservations, and manage seat status dynamically through a menu-driven interface.

🌟 Overview

Bus transportation systems require efficient seat management to avoid issues such as double booking, incorrect seat allocation, or difficulty tracking available seats.

This project simulates a bus seat reservation system where users can interact with a console-based application to manage seat bookings.

The system displays a bus-style seat layout (2 seats + aisle + 2 seats) and updates seat availability dynamically when bookings or cancellations occur.

The program continues running in a loop until the user chooses to exit the system.

🚀 Features

View bus seat layout with seat status

Book available seats

Cancel booked seats

Dynamic seat availability updates

Input validation for seat numbers

Menu-driven console interface

Realistic bus seat layout display

🪑 Seat Layout System

The bus seat layout is displayed in rows with left side, aisle, and right side seats.

Seat status indicators :- 

Status	Meaning
[A]	Available Seat
[B]	Booked Seat

Example layout:

Row    Left Side       Aisle      Right Side

1      [A]1 [A]2        ||        [A]3 [A]4
2      [B]5 [A]6        ||        [A]7 [A]8

⚙️ Program Workflow

1️⃣ User enters Bus Number and Total Seats

2️⃣ The system initializes seat availability

3️⃣ The program displays the Main Menu

1. View Seats
2. Book Seat
3. Cancel Seat
4. Exit

4️⃣ Operations performed :- 

View Seats → Displays the seat layout

Book Seat → Books selected seat if available

Cancel Seat → Cancels booked seat

Exit → Terminates the program

5️⃣ Seat status updates dynamically during program execution.

🛠️ Technologies Used
Programming Language

C++

Standard Libraries Used

<iostream>
Used for input and output operations.

<vector>
Used for dynamic seat storage.

<iomanip>
Used for formatted seat layout display.

📊 System Architecture

The program is built using an Object-Oriented design.

Main components:

User Input
     ↓
Menu System
     ↓
Bus Class
     ↓
Seat Management Vector
     ↓
Seat Layout Display

The Bus class manages:

Bus number

Total seats

Seat booking status

Seat status is stored using:

vector<bool> seats;

🧪 Testing
The program was tested with multiple scenarios :- 
| Test Case                | Result               |
| ------------------------ | -------------------- |
| Book available seat      | Success              |
| Book already booked seat | Error message        |
| Cancel booked seat       | Success              |
| Cancel unbooked seat     | Error message        |
| Invalid seat number      | Validation triggered |

💻 Example Output
--- Seat Layout for Bus 101 ---

[A]: Available   [B]: Booked

Row    Left Side       Aisle      Right Side

1      [A]1 [A]2        ||        [A]3 [A]4
2      [A]5 [B]6        ||        [A]7 [A]8

Example booking output :- 
Seat Booked Successfully
Seat Number: 6

Example cancellation output :- 
Booking Cancelled Successfully
Seat Number: 6

🎯 Learning Objectives

This project demonstrates:

Object-Oriented Programming in C++

Menu-driven program design

Data structures using vectors

Seat allocation logic

Input validation techniques

Simulation of real-world reservation systems

🔮 Future Improvements

Possible enhancements include:

Support for multiple buses

Passenger information storage

File-based booking storage

Graphical User Interface (GUI)

Online reservation system

👨‍💻 Author
Rashmeet Kaur Nanade 
B.Tech Computer Science Engineering
ITM Skills University
School of Future Tech
