/*
 * BlackJack Card Counter
 * Written by Barnabas Nomo (www.Github.com/Kowus)
 * This code is in the public Domain



 * NOTE: Card counting is illegal in many
 * countries. This code is only for
 * illustrative purposes. I will not take
 * responsibility in any way for Improper
 * use of the program.
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	int count = 0;

	while(card_name[0] != 'X'){
        puts("Enter the card name: ");
        scanf("%2s", card_name);
        int val = 0;
        switch(card_name[0])
        {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        case 'X':
            continue;
        default:
            val = atoi(card_name);
            if(val < 1 || val > 10){
                puts("I don't understand that value!");
                continue;
            }
        }

        /*
        if(card_name[0] == 'K'){
            val = 10;
        }else if(card_name[0] == 'Q'){
            val = 10;
        }else if(card_name[0] == 'J'){
            val = 10;
        }else if(card_name[0] == 'A'){
            val = 11;
        }else{
            val = atoi(card_name);
        }
        */
        //printf("The card value is: %i\n", val);

        /* Check if the value is 3 to 6*/
        if(val > 2 && val < 7)
            count++;

        /* Otherwise check if the card was 10, J, Q, or K*/
        else if(val == 10)
            count--;

        printf("Current count: %i\n", count);
	}
	return 0;
}
