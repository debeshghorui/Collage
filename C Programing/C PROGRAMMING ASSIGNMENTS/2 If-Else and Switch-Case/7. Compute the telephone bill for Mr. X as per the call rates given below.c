/*
 Compute the telephone bill for Mr. X as per the call rates given below:
 Rental = 250
 1st 100 calls @Rs. 0.2
 Next 100 calls @ Rs. 0.3
 Remaining calls @ Rs. 0.5
*/
 #include <stdio.h>

int main() {
    int calls;
    float bill;

    // Fixed rental charge
    float rental = 250.0;

    // Input the number of calls made by Mr. X
    printf("Enter the number of calls made: ");
    scanf("%d", &calls);

    // Compute the bill based on the number of calls
    if (calls <= 100) {
        bill = rental + (calls * 0.2);  // First 100 calls @ Rs. 0.2
    } else if (calls <= 200) {
        bill = rental + (100 * 0.2) + ((calls - 100) * 0.3);  // Next 100 calls @ Rs. 0.3
    } else {
        bill = rental + (100 * 0.2) + (100 * 0.3) + ((calls - 200) * 0.5);  // Remaining calls @ Rs. 0.5
    }

    // Output the total bill
    printf("The total telephone bill is: Rs. %.2f\n", bill);

    return 0;
}