#include "../include/IO.h"
#include "../include/custom_string.h"
#include "../include/shell.h"
#include "../include/creds.h"
#include "../include/utils.h"
#include <time.h>


// void test_shell_loop(void)
// {
//     clock_t start = clock();
//     char mode[2] = "r";
//     char path[49] = "C:\\Users\\Stambaugh\\learn-c\\src\\Test.txt";
//     FILE *f = FOPEN(path, mode);
//     set_input_file(f);
//     shell_loop_test();
//     set_input_file(stdin);
//     FCLOSE(f);
//     printf("\nTest File Runtime: %lums\n",clock()-start);
// }

int main(void)
{
    printf("Testing Main Funciton!");
    /*
    for (int i = 0; i < 10; i++)
        test_creds();
    */
    // test_shell_loop();
    // shell_loop();
    return 0;
}