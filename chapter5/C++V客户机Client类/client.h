#ifndef CLIENT_H
#define CLIENT_H

class Client
{
    static char serverName;  // 服务器名称
    static int clientNum;   // 客户数量
  public:
    static void changeServerName(char name);
    static int getClienNum();
};

#endif
