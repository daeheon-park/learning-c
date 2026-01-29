/* Calculate balance after montly payment */

#include <stdio.h>
#define MONTH 12

int main(void)
{
    float loan, interest_rate, monthly_payment, balance_after_first_payment;
    float balance_after_second_payment,balance_after_third_payment;
    float montly_rate = interest_rate / MONTH / 100;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter montly payment: ");
    scanf("%f", &monthly_payment);

    balance_after_first_payment = (loan - monthly_payment) * ( 1+ montly_rate);
    balance_after_second_payment = (balance_after_first_payment - monthly_payment)  * ( 1+ montly_rate);
    balance_after_third_payment = (balance_after_second_payment - monthly_payment)  * ( 1+ montly_rate);

    printf("Balance remaining after first payment: %.2f\n", balance_after_first_payment);
    printf("Balance remaining after second payment: %.2f\n", balance_after_second_payment);
    printf("Balance remaining after third payment: %.2f\n", balance_after_third_payment);

}