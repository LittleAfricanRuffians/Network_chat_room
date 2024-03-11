#include "stdio.h"
#include "sqlite3.h"

int main(const char * filename)
{
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;

   rc = sqlite3_open(filename, &db);

   if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return -1;
   }else{
      fprintf(stderr, "Opened database successfully\n");
   }
   sqlite3_close(db);
   return 0;
}