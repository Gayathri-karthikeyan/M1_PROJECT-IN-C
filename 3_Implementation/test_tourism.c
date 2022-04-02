#include "unity.h"
#include "unity_internals.h"
#include<stdlib.h>
#define PROJECT_NAME "tourism_management_system"
/*prototypes for the test function*/
/**
 * @brief testing function for tourism management system
 * 
 */
extern void test_tourism();
/* Required by the unity test framework */
void setUp(void)
{
}
/*required by unity test framework*/
void tearDown(void)
{

}
int main(void)
{
    UNITY_BEGIN();
    /* Run test functions */
    RUN_TEST(test_tourism);
    
    /* Close unity test framework */
    return UNITY_END();
}