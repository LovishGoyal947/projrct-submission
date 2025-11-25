#include <stdio.h> 
#include <string.h>

void addToWallet() { float add;
printf("Enter amount to load into wallet: ₹"); scanf("%f", &add);
wallet += add;
printf("₹%.2f successfully added to wallet.\n", add);
}


void mobileRecharge() { float amount, cb;
printf("Enter recharge value: ₹"); scanf("%f", &amount);

if (amount > wallet) {
printf("Not enough balance in wallet!\n"); return;
}
 
cb = amount * 0.02;
wallet = wallet - amount + cb;


strcpy(logs[indexLog].category, "Recharge"); logs[indexLog].amt = amount; logs[indexLog].reward = cb;
indexLog++;


printf("Recharge Completed! Cashback Earned: ₹%.2f\n", cb);
}


void payBill() { float bill, cb;
printf("Enter bill amount to pay: ₹"); scanf("%f", &bill);

if (bill > wallet) {
printf("Wallet balance is insufficient!\n"); return;
}
 
cb = bill * 0.01;
wallet = wallet - bill + cb;


strcpy(logs[indexLog].category, "Bill Payment"); logs[indexLog].amt = bill; logs[indexLog].reward = cb;
indexLog++;


printf("Bill Payment Successful! Cashback Received: ₹%.2f\n", cb);
}


void displayHistory() {
printf("\n--- Transaction Summary ---\n"); for (int i = 0; i < indexLog; i++) {
printf("%d) %s - ₹%.2f | Cashback: ₹%.2f\n",
i + 1, logs[i].category, logs[i].amt, logs[i].reward);
}
printf("Available Wallet Balance: ₹%.2f\n", wallet);
}
