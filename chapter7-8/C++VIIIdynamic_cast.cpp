
#include <iostream>
#include <assert.h>

using namespace std;

// ���Ǹ���
class Tfather
{
  public:
    virtual void f()
    {
      cout << "father's f()" << endl;
    }
};

// ��������
class Tson : public Tfather
{
  public:
    void f()
    {
      cout << "son's f()" << endl;
    }

    int data; // ����������г�Ա
};

int main()
{
  Tfather father;
  Tson son;
  son.data = 123;

  Tfather *pf;
  Tson *ps;

  /* ����ת����û�����⣬��̬��Ч */
  ps = &son;
  pf = dynamic_cast<Tfather *>(ps);
  pf->f();

  /* ����ת����pfʵ��ָ��������󣩣�û������ */
  pf = &son;
  ps = dynamic_cast<Tson *>(pf);
  ps->f();
  cout << ps->data << endl;		// ����������г�Ա��Ч

  /* ����ת����pfʵ��ָ������󣩣����в���ȫ������dynamic_cast�������÷���NULL */
  pf = &father;
  ps = dynamic_cast<Tson *>(pf);
  assert(ps != NULL);			 	// Υ�����ԣ���ֹ���²���ȫ����
  ps->f();
  cout << ps->data << endl;		// ����ȫ����������ʵ������û��data��Ա

  /* ����ת����pfʵ��ָ������󣩣����в���ȫ������static_cast���� */
  pf = &father;
  ps = static_cast<Tson *>(pf);
  assert(ps != NULL);
  ps->f();
  cout << ps->data << endl;		// ����ȫ����������ʵ������û��data��Ա

  system("pause");
}

