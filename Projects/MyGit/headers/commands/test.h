#ifndef TEST_H
#define TEST_H

/**
 * test command
 * 
 */


// #include "../structures/arraylist.h"

namespace Test
{
char *tests[] = {""};
int tests_count = 1;

void test(char *test_name)
{
    if (strcmp(test_name, "") == 0)
    {
        
    }
    else
        cout << "No test found, try 'mygit help'" << endl;
}
} // namespace Test
#endif