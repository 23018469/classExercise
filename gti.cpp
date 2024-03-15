#include <iostream>
using namespace std;

double calculateMarkup(double merchandiseCost, double employeeSalary, double yearlyRent, double electricityCost, double desiredProfit) {
    // Calculate total expenses
    double totalExpenses = merchandiseCost + employeeSalary + yearlyRent + electricityCost;

    // Calculate required revenue to achieve desired profit
    double requiredRevenue = totalExpenses / (1 - desiredProfit);

    // Calculate markup considering the 15% sale
    double markup = requiredRevenue / (merchandiseCost * 0.85);

    return markup;
}

int main() {
    double merchandiseCost, employeeSalary, yearlyRent, electricityCost;
    const double desiredProfit = 0.10; // Desired profit of 10%

    // Prompt user for input
    cout << "Enter total cost of merchandise: ";
    cin >> merchandiseCost;
    cout << "Enter total salary of employees (including your own): ";
    cin >> employeeSalary;
    cout << "Enter yearly rent: ";
    cin >> yearlyRent;
    cout << "Enter estimated electricity cost: ";
    cin >> electricityCost;

    // Calculate markup
    double markup = calculateMarkup(merchandiseCost, employeeSalary, yearlyRent, electricityCost, desiredProfit);

    cout << "The merchandise should be marked up by approximately " << markup << " times." << endl;

    return 0;
}
