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
    double unitPrice = 0.0;
    char isMember;
    char tipChoice;
    double tipAmount = 0.0;

    // Display Menu
    cout << "---------------- MENU ----------------" << endl;
    cout << left << setw(25) << "Item"
        << setw(10) << "Small"
        << setw(10) << "Medium"
        << setw(10) << "Large" << endl;

    cout << left << setw(25) << "A. Cheeseburger"
        << setw(10) << "$6.00"
        << setw(10) << "$8.00"
        << setw(10) << "$10.00" << endl;

    cout << left << setw(25) << "B. Chicken Tenders"
        << setw(10) << "$5.00"
        << setw(10) << "$7.00"
        << setw(10) << "$9.00" << endl;

    cout << left << setw(25) << "C. French Fries"
        << setw(10) << "$2.50"
        << setw(10) << "$3.50"
        << setw(10) << "$4.50" << endl;

    cout << left << setw(25) << "D. Milkshake"
        << setw(10) << "$3.00"
        << setw(10) << "$4.00"
        << setw(10) << "$5.00" << endl;

    cout << "---------------------------------------" << endl;

    // Get food choice
    cout << "Select an item (A-D): ";
    cin >> foodChoice;

    // Get size choice
    cout << "Select a size (S/M/L): ";
    cin >> sizeChoice;

    // Food selection
    switch (foodChoice) {

    case 'A':
    case 'a':
        foodName = "Cheeseburger";

        if (sizeChoice == 'S' || sizeChoice == 's') {
            unitPrice = 6.00;
        }
        else if (sizeChoice == 'M' || sizeChoice == 'm') {
            unitPrice = 8.00;
        }
        else if (sizeChoice == 'L' || sizeChoice == 'l') {
            unitPrice = 10.00;
        }
        break;

    case 'B':
    case 'b':
        foodName = "Chicken Tenders";

        if (sizeChoice == 'S' || sizeChoice == 's') {
            unitPrice = 5.00;
        }
        else if (sizeChoice == 'M' || sizeChoice == 'm') {
            unitPrice = 7.00;
        }
        else if (sizeChoice == 'L' || sizeChoice == 'l') {
            unitPrice = 9.00;
        }
        break;

    case 'C':
    case 'c':
        foodName = "French Fries";

        if (sizeChoice == 'S' || sizeChoice == 's') {
            unitPrice = 2.50;
        }
        else if (sizeChoice == 'M' || sizeChoice == 'm') {
            unitPrice = 3.50;
        }
        else if (sizeChoice == 'L' || sizeChoice == 'l') {
            unitPrice = 4.50;
        }
        break;

    case 'D':
    case 'd':
        foodName = "Milkshake";

        if (sizeChoice == 'S' || sizeChoice == 's') {
            unitPrice = 3.00;
        }
        else if (sizeChoice == 'M' || sizeChoice == 'm') {
            unitPrice = 4.00;
        }
        else if (sizeChoice == 'L' || sizeChoice == 'l') {
            unitPrice = 5.00;
        }
        break;

    default:
        cout << "Invalid item." << endl;
        return 1;
    }

    // Check for invalid size
    if (unitPrice == 0.0) {
        cout << "Invalid size." << endl;
        return 1;
    }

    // Quantity
    cout << "Enter Quantity: ";
    cin >> quantity;

    // Membership
    cout << "Is Member (y/n): ";
    cin >> isMember;

    // Calculate subtotal
    double subtotal = quantity * unitPrice;

    // Calculate taxes
    double arkansasTax = subtotal * 0.065;
    double countyTax = subtotal * 0.005;
    double conwayTax = subtotal * 0.02125;

    double totalTax = arkansasTax + countyTax + conwayTax;

    // Receipt
    cout << fixed << setprecision(2);

    cout << endl;
    cout << "--------------- RECEIPT ---------------" << endl;

    cout << "Item:        " << foodName << endl;
    cout << "Size:        " << sizeChoice << endl;
    cout << "Quantity:    " << quantity << endl;
    cout << "Unit Price:  $" << unitPrice << endl;
    cout << "Subtotal:    $" << subtotal << endl;

    // Taxes
    cout << endl;
    cout << "---------------- TAXES ----------------" << endl;

    cout << "Arkansas State Tax (6.5%):     $"
        << arkansasTax << endl;

    cout << "Faulkner County Tax (0.5%):    $"
        << countyTax << endl;

    cout << "Conway Municipal Tax (2.125%): $"
        << conwayTax << endl;

    cout << "Total Tax:                     $"
        << totalTax << endl;

    // Tip menu
    cout << endl;
    cout << "--------------- TIP MENU ---------------" << endl;
    cout << "A. 15%" << endl;
    cout << "B. 20%" << endl;
    cout << "C. 25%" << endl;
    cout << "D. Other Amount" << endl;

    cout << "What tip do you choose? ";
    cin >> tipChoice;

    switch (tipChoice) {

    case 'A':
    case 'a':
        tipAmount = subtotal * 0.15;
        break;

    case 'B':
    case 'b':
        tipAmount = subtotal * 0.20;
        break;

    case 'C':
    case 'c':
        tipAmount = subtotal * 0.25;
        break;

    case 'D':
    case 'd':
        cout << "How much would you like to tip? $";
        cin >> tipAmount;
        break;

    default:
        cout << "Invalid tip choice." << endl;
        return 1;
    }

    // Final total
    double total = subtotal + totalTax + tipAmount;

    cout << endl;
    cout << "------------- FINAL RECEIPT -------------" << endl;

    cout << "Item:        " << foodName << endl;
    cout << "Size:        " << sizeChoice << endl;
    cout << "Quantity:    " << quantity << endl;
    cout << "Unit Price:  $" << unitPrice << endl;
    cout << "Subtotal:    $" << subtotal << endl;
    cout << "Total Tax:   $" << totalTax << endl;
    cout << "Tip:         $" << tipAmount << endl;
    cout << "-----------------------------------------" << endl;
    cout << "TOTAL:       $" << total << endl;

    return 0;
}
