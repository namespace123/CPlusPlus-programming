#ifndef CLIENT_H
#define CLIENT_H

class Client
{
    static char serverName;  // ����������
    static int clientNum;   // �ͻ�����
  public:
    static void changeServerName(char name);
    static int getClienNum();
};

#endif
