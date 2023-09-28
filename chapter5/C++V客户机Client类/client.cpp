#include <bits/stdc++.h>
#include "client.h"
using namespace std;

void Client::changeServerName(char name)
{
  Client::serverName = name;
  Client::clientNum ++;
}

int Client::getClienNum()
{
  return Client::clientNum;
}

char Client::serverName = 'a';
int  Client::clientNum = 0;

int main()
{
  Client c1;
  c1.changeServerName('a');
  cout<<c1.getClienNum()<<endl;
  Client c2;
  c2.changeServerName('b');
  cout<<c2.getClienNum()<<endl;

  return 0;
}

