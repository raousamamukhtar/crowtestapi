#include "crow.h"
#include <mysql.h>
#include <iostream>
#include <sstream>

class UserDB {
private:
    MYSQL* conn;
    MYSQL_RES* res;
    MYSQL_ROW row;

public:
    UserDB() {
        conn = mysql_init(0);
        conn = mysql_real_connect(conn, "localhost", "root", "12345", "pro1", 0, NULL, 0);
        if (!conn) {
            std::cerr << "❌ Failed to connect: " << mysql_error(conn) << std::endl;
            exit(1);
        }
    }

    crow::json::wvalue getUsersJSON() {
        crow::json::wvalue result;
        result["status"] = "success";
        int index = 0;

        if (mysql_query(conn, "SELECT * FROM user") == 0) {
            res = mysql_store_result(conn);
            while ((row = mysql_fetch_row(res))) {
                result["users"][index]["id"] = std::stoi(row[0]);
                result["users"][index]["name"] = row[1];
                result["users"][index]["email"] = row[2];
                index++;
            }
            mysql_free_result(res);
        }
        else {
            result["status"] = "error";
            result["message"] = mysql_error(conn);
        }

        return result;
    }

    ~UserDB() {
        mysql_close(conn);
    }
};

int main() {
    crow::SimpleApp app;
    UserDB db;

    CROW_ROUTE(app, "/users")
        ([&db]() {
        return db.getUsersJSON();
            });

    std::cout << "🚀 Server running at http://localhost:18080\n";
    app.port(18080).multithreaded().run();
    return 0;
}
