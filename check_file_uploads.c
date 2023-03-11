#include <unistd.h>
#include <syslog.h>

//function to check if the files have been uploaded to the shared directory
void check_file_uploads(void) {
      //check if the files have been uploaded to the shared directory
      //log the result
      //return
      if (access("./shared/employees.csv", F_OK) != -1) {
         syslog(LOG_INFO, "Employees file uploaded");
      } else {
         syslog(LOG_ERR, "Employees file not uploaded");
      }
   
      if (access("./shared/clients.csv", F_OK) != -1) {
         syslog(LOG_INFO, "Clients file uploaded");
      } else {
         syslog(LOG_ERR, "Clients file not uploaded");
      }
   
      if (access("./shared/transactions.csv", F_OK) != -1) {
         syslog(LOG_INFO, "Transactions file uploaded");
      } else {
         syslog(LOG_ERR, "Transactions file not uploaded");
      }
   
      return;
}
