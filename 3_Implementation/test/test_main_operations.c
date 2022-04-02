#include "unity.h"
#include "main_operations.h"

#define PROJECT_NAME "Tourism_Management_System"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for Tourism_Management_System
 * 
 */

/**
 * @brief Testing function for user name, password, place,ticket price,numticket
 * 
 */
void test_WriteToFile();
/**
 * @brief Testing function for price list 
 * 
 */
void test_ShowBrochure();
/**
 * @brief Testing function for entering category
 * 
 */
void test_checking_ticket();
/**
 * @brief Testing function for entering username or email and password
 * 
 */
void test_login_client();
/**
 * @brief Testing function for entering category,price list,place code and confirmation
 * 
 */
void test_booking_ticket();
/**
 * @brief Testing function for email id,tour code,ticket cost,num ticket
 * 
 */
void test_printing_ticket();
/**
 * @brief Testing function for entering category
 * 
 */
void test_cancelling_ticket();
/**
 * @brief Testing function for entering category,current password and new password 
 * 
 */
void test_changing_pass();
/**
 * @brief Testing function for entering category
 * 
 */
void test_logout_client();
/**
 * @brief Testing function for exiting
 * 
 */
void test_exit_system();
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_WriteToFile);
    RUN_TEST(test_ShowBrochure);
    RUN_TEST(test_checking_ticket);
    RUN_TEST(test_login_client);
    RUN_TEST(test_booking_ticket);
    RUN_TEST(test_printing_ticket);
    RUN_TEST(test_checking_ticket);
    RUN_TEST(test_cancelling_ticket);
    RUN_TEST(test_changing_pass);
    RUN_TEST(test_logout_client);
    RUN_TEST(test_exit_system);


    /* Close the Unity Test Framework */
    return UNITY_END;
}
