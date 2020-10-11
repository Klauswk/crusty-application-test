#include <stdio.h>
#include <sqlite3.h>

int openAndCreateDb();

int main() {
    return openAndCreateDb();
}

int openAndCreateDb()
{
    sqlite3 *db;
    char *err_msg = 0;
    int rc;

    rc = sqlite3_open(".db", &db);

    if (rc != SQLITE_OK)
    {

        printf("Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);

        return 1;
    }

    printf("Database successfully created\n");

    return 0;
}