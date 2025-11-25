#include <stdio.h> 
#include <string.h>

int main() { int choice;

printf("**** DIGITAL PAYMENT PLATFORM ****\n");


do {
printf("\n1. Load Money\n2. Mobile Recharge\n3. Bill Payment\n4. View Transaction History\n5. Exit\n");
printf("Select an option: "); scanf("%d", &choice);

switch (choice) {
case 1: addToWallet(); break; case 2: mobileRecharge(); break; case 3: payBill(); break;
case 4: displayHistory(); break;
case 5: printf("Thank you for using our Digital Payment System!\n");
break;
default: printf("Invalid selection! Please try again.\n");
}
} while (choice != 5);


return 0;
}
