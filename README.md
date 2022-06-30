# atm-exercise
An ATM machine needs to be programmed to dispense any given amount of currency in proper bills. (C programming class exercise taught by Abbas Razaghpanah)

An ATM machine needs to be programmed to dispense any given amount of currency in proper bills. Available notes are 1, 2, 5, 10, 20, 50 and 100 dollars. Every day in the morning, the machine is refilled with 10 of each of these notes. Assuming that there are 10 transactions carried out every day and no transaction is worth more than 350 dollars, you should write a program that asks the amount of cash and calculates what bills should be dispensed so that the number of total bills is minimum. Your program should keep on for one whole day. Of course, at each cash payment, the used notes should be removed from the system. If the amount given is not dispensable using the available bills, it should be mentioned so that the transaction can be rolled back.

WARNING: No use of arrays, what so ever, is allowed!

For example, if the user enters 219 dollars as the first payment amount, your program should display:
Enter cash amount:
219
The bills are:
2 x 100$
1 x 10$
1 x 5$
2 x 2$
