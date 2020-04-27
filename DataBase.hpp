#pragma once

#include <memory> 
#include <string>

using namespace std;

class DataBase
{
public:
    DataBase();

    void ship_change(int ship_num, string details);
    bool authorize_role(string name, string pass);
    void update_accountbal(int bill);
    void update_rooms(int ship_num);
    string get_role(string name);
    void display_ships();
    void display_spec_ship(int ship_num);
    string get_role(string name, string pass);

    ~DataBase();

protected:
    string ships[3] = { "1. Cuba, 10-May-2020, 5000", "N/A", "N/A" };
    int rooms_1 = 1000;
    int rooms_2 = 1000;
    int rooms_3 = 1000;
    //Users
    string acc1_user = "bob";
    string acc1_pass = "pass";
    string acc1_role = "customer";
    int acc1_balance = 0;
    string acc2_user = "jane";
    string acc2_pass = "word";
    string acc2_role = "manager";
};