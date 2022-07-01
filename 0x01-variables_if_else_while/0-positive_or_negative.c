#include <stdlib.h>
#include <time.h>
#include <stdio.h>



/**
 *main - assign a random number to the variable n each time it is executed
 *and prints out based on condition
 *
<<<<<<< HEAD
 *  *main - assign a random number to the variable n each time it is executed
 *
 *   *and prints out based on condition
 *
 *    *
 *
 *     *Return: Always 0 (Success)
 *
 *      */
=======
 *Return: Always 0 (Success)
 */
>>>>>>> 204903e14693e23c913876838383fa114d93c4f6



int main(void)
{
<<<<<<< HEAD

	        int n;



		        srand(time(0));

			        n = rand() - RAND_MAX / 2;

				        if (n > 0)

						        {

								        printf("%d is %s\n", n, "positive");

									        }

					        else if (n < 0)

							        {

									        printf("%d is %s\n", n, "negative");

										        }

						        else

								        {

										        printf("%d is %s\n", n, "zero");

											        }

							        return (0);

=======
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
        {
        printf("%d is %s\n", n, "positive");
        }
        else if (n < 0)
        {
        printf("%d is %s\n", n, "negative");
        }
        else
        {
        printf("%d is %s\n", n, "zero");
        }
        return (0);
>>>>>>> 204903e14693e23c913876838383fa114d93c4f6
}
