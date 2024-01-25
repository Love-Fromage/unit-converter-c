#include <stdio.h>
#include <ctype.h>

int main(){

    int choice = 0;

    do {
        // Prompt the user for input
        printf("Choose the kind of units you want to convert:\n\n");

        printf("1. mi to km\n");
        printf("2. lbs to kg\n");
        printf("3. F to C\n");
        printf("4. cm to po\n");


        // Read the input
        if (scanf("%d", &choice) !=1){
            // Invalid input (not an int)
            printf("Invalid input. Please enter a single digit.\n\n");

            // Clear the input buffer
            while (getchar() != '\n');

        } else {
            // Check if there are any non-whitespace characters after the valid integer
            int nextChar = getchar();
            if(nextChar != '\n'){
                printf("Invalid input. Please enter a single number between 1 and 4\n\n");
                
                // Clear the input buffer
                while(getchar()!='\n');
                choice = 0;
            } else if(choice <1 || choice > 4){
                // Invalid range
                printf("Invalid Input. Please enter a number between 1 and 4\n\n");
            }
        }        

        
    } while (choice < 1 || choice > 4);

    // The choice variable now contains a valid value between 1 and 4
    printf("\nYou entered: %d\n\n", choice);



    return 0;
}