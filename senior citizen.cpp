#include <iostream>
using namespace std;

// Function to calculate simple interest
float calculateSimpleInterest(float principal, int years, bool isSeniorCitizen) {
    float rateOfInterest = isSeniorCitizen ? 12.0f : 10.0f;
    float interest = (principal * rateOfInterest * years) / 100;
    return interest;
}

int main() {
    float principal;
    int years;
    char seniorCitizenChar;
    bool isSeniorCitizen;

    // Input principal amount
    cout << "Enter the principal amount: ";
    cin >> principal;

    // Input number of years
    cout << "Enter the number of years: ";
    cin >> years;

    // Input senior citizen status
    cout << "Is customer senior citizen (y/n): ";
    cin >> seniorCitizenChar;
    isSeniorCitizen = (seniorCitizenChar == 'y' || seniorCitizenChar == 'Y');

    // Calculate interest
    float interest = calculateSimpleInterest(principal, years, isSeniorCitizen);

    // Output interest
    cout << "Interest: " << interest << endl;

    return 0;
}