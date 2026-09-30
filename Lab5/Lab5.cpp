#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Variables
    string foodName;
    char foodChoice;
    char sizeChoice;
    int quantity;
    double unitPrice;
    char isMember;//gggg

    // Display Menu
    cout << "--------------- MENU ---------------" << endl;
    cout << left << setw(25) << "Item"
        << setw(12) << "Small"
        << setw(12) << "Medium"
        << setw(12) << "Large" << endl;

    cout << left << setw(25) << "A. Cheeseburger"
        << setw(12) << "$6.00"
        << setw(12) << "$8.00"
        << setw(12) << "$10.00" << endl;

    cout << left << setw(25) << "B. Chicken Tenders"
        << setw(12) << "$5.00"
        << setw(12) << "$7.00"
        << setw(12) << "$9.00" << endl;

    cout << left << setw(25) << "C. French Fries"
        << setw(12) << "$2.50"
        << setw(12) << "$3.50"
        << setw(12) << "$4.50" << endl;

    cout << left << setw(25) << "D. Milkshake"
        << setw(12) << "$3.00"
        << setw(12) << "$4.00"
        << setw(12) << "$5.00" << endl;

    // Ask user to select an item
    cout << "\nSelect an item: ";
    cin >> foodChoice;

    // Ask user to select a size
    cout << "Select a size (S/M/L): ";
    cin >> sizeChoice;

    // Make choices uppercase
    if (foodChoice >= 'a' && foodChoice <= 'z') {
        foodChoice = foodChoice - 32;
    }

    if (sizeChoice >= 'a' && sizeChoice <= 'z') {
        sizeChoice = sizeChoice - 32;
    }

    // Determine food and price
    switch (foodChoice) {

    case 'A':
        foodName = "Cheeseburger";

        if (sizeChoice == 'S') {
            unitPrice = 6.00;
        }
        else if (sizeChoice == 'M') {
            unitPrice = 8.00;
        }
        else if (sizeChoice == 'L') {
            unitPrice = 10.00;
        }
        else {
            cout << "Invalid size." << endl;
            return 1;
        }

        break;

    case 'B':
        foodName = "Chicken Tenders";

        if (sizeChoice == 'S') {
            unitPrice = 5.00;
        }
        else if (sizeChoice == 'M') {
            unitPrice = 7.00;
        }
        else if (sizeChoice == 'L') {
            unitPrice = 9.00;
        }
        else {
            cout << "Invalid size." << endl;
            return 1;
        }

        break;

    case 'C':
        foodName = "French Fries";

        if (sizeChoice == 'S') {
            unitPrice = 2.50;
        }
        else if (sizeChoice == 'M') {
            unitPrice = 3.50;
        }
        else if (sizeChoice == 'L') {
            unitPrice = 4.50;
        }
        else {
            cout << "Invalid size." << endl;
            return 1;
        }

        break;

    case 'D':
        foodName = "Milkshake";

        if (sizeChoice == 'S') {
            unitPrice = 3.00;
        }
        else if (sizeChoice == 'M') {
            unitPrice = 4.00;
        }
        else if (sizeChoice == 'L') {
            unitPrice = 5.00;
        }
        else {
            cout << "Invalid size." << endl;
            return 1;
        }

        break;

    default:
        cout << "Invalid item choice." << endl;
        return 1;
    }

    // Get quantity
    cout << "Enter Quantity: ";
    cin >> quantity;

    // Get membership
    cout << "Is Member (y/n): ";
    cin >> isMember;

    // Calculate subtotal
    double subtotal = quantity * unitPrice;

    // Format the Receipt
    cout << "\n--- RECEIPT ---" << endl;
    cout << fixed << setprecision(2);

    cout << left << setw(20) << "Item"
        << setw(10) << "Size"
        << setw(10) << "Qty"
        << setw(10) << "Price"
        << setw(10) << "Total" << endl;

    cout << left << setw(20) << foodName
        << setw(10) << sizeChoice
        << setw(10) << quantity
        << setw(10) << unitPrice
        << setw(10) << subtotal << endl;

    return 0;
}