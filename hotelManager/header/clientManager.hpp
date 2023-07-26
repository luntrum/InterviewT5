#ifndef __CLIENT_MANAGER__
#define __CLIENT_MANAGER__
#include<iostream>
#include"client.hpp"
#include<list>
using namespace std;


class clientManager
{
private:
    list<client> clientDatabase;
public:
    clientManager(/* args */);
    ~clientManager();
};

clientManager::clientManager(/* args */)
{
}

clientManager::~clientManager()
{
}



#endif