// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

float calculateFare(char travelClass);
float checkBaggage(char travelClass, float baggageWeight);
void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee);

int main() {
    calculateFare();
    checkBaggage();
    printTicket();
}
float calculateFare(char travelClass);
    char travelClass;
    float baggageFare;
}

float checkBaggage(char travelClass, float baggageWeight);

    float BaggageWeight;
    printTicket();
    return 0;
}
void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee){
    
    printf("\n-----Ticket-----\n");
    if(travelclass=='E' || travelclass=='e'){
        printf("Travel Class Economy\n");
    }
    else {
        printf("Travel Class Business\n");
    }

    printf("Base Fare: PHP %.2f\n",basefare);
    printf("Baggage Weight: %.1f\n",baggageweight);
    printf("Excess Baggage Fee: PHP %.2f\n",excessbaggagefee);
    printf("Total Fee: PHP %.2f\n",totalfare);
}
