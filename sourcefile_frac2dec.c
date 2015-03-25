#include <stdio.h>

int main()

{

	/* Defining variables and creating loop. */
	int progRunning = 1;
	int numerator;
	int denomenator;
	float numerator_f;
	float denomenator_f;
	float answer_f;

	while(progRunning == 1) {

		/* Greeting user and reading input. */

		puts("Welcome to Yvan's fraction to decimal converter! Please enter your numerator to continue.");

		scanf("%i", &numerator);

		puts("Now please enter your denomenator.");

		scanf("%i", &denomenator);

		/* Defining float values of ints. */

		numerator_f = numerator;
		denomenator_f = denomenator;

		/* Error message condition. */

		if (denomenator == 0) {
			puts("What do you think you are doing? Outsmarting the system? Nice try.");

			return 33;
		}

		/* Communicating results to user. */

		answer_f = numerator_f / denomenator_f;
		
		
		printf("Input is equivalent to %f", answer_f);
		puts

		continue;

	}


	return 0;


}