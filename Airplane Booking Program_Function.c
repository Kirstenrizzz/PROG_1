#include <stdio.h>

float calculateFare(char travelClass);
float checkBaggage(char travelClass, float baggageWeight);
void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee)
int main() {
    calculateFare();
    checkBaggage();
    printTicket();
    return 0;
}
