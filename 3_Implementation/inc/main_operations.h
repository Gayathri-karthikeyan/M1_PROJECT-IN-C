/**
 * @file main_operations.h
 * @author Gayathri Devi K (gayathridevi.18ece@sonatech.ac.in)
 * @brief Header file for Tourism Management System
 * @version 0.1
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _MAIN_OPERATIONS_H_
#define _MAIN_OPERATIONS_H_

/**
 * @brief write to file
 * @return user name, password, place,ticket price,numticket
 */
void WriteToFile(userprofile *hello);

/**
 * @brief  showbrochure
 * @return price list 
 */
void ShowBrochure();
/**
 * @brief  checking ticket
 * @return entering category
 */
void checking_ticket(userprofile *hello);
/**
 * @brief login user
 * @return entering username or email and password
 */
void login_client(userprofile* hello);
/**
 * @brief booking ticket
 * @return entering category,price list,place code and confirmation  
 */
void booking_ticket(userprofile *hello);
/**
 * @brief printing ticket
 * @return email id,tour code,ticket cost,num ticket
 */
void printing_ticket(userprofile *hello);
/**
 * @brief cancelling ticket 
 * @return entering category 
 */
void cancelling_ticket(userprofile *hello);
/**
 * @brief changing password
 * @return entering category,current password and new password 
 */
void changing_pass(userprofile *hello);
/**
 * @brief logout user
 * @return entering category 
 */
void logout_client();
/**
 * @brief exit system
 * @return exiting
 */
void exit_system();

#endif /* #define _MAIN_OPERATIONS_H_ */

