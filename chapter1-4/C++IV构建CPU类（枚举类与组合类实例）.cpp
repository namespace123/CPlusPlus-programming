#include <bits/stdc++.h>
using namespace std;

// 核数：单核，双核，四核
enum Core
{
  Single,Dual,Quad
};
// 字长：32位，64位
enum Words
{
  Bit32, Bit64
};
// 是否支持超线程
enum HyperThread
{
  Support, NotSupport
};

class CPU
{
    unsigned frequence: 32;
    Core core: 3;
    Words words: 2;
    HyperThread mode: 2;
  public:
    CPU(unsigned frequence, Core core, Words words, HyperThread mode):frequence(frequence), core(core), words(words), mode(mode)
    {
    }
    ~CPU()
    {
    }
    void show();
};

void CPU::show()
{
  cout<<"frequence: "<<frequence<<", core: ";
  switch((unsigned)core)
  {
    case Single:
      cout<<"Single-Core";
      break;
    case Dual:
      cout<<"Dual-Core";
      break;
    case Quad:
      cout<<"Quad-Core";
      break;
  }
  cout<<", words: ";
  switch((unsigned)words)
  {
    case Bit32:
      cout<<"32-bits len";
      break;
    case Bit64:
      cout<<"64-bits len";
      break;
  }
  cout<<endl;
  cout<<"HyperThread: ";
  switch((unsigned)mode)
  {
    case Support:
      cout<<"Support Hyper-Thread";
      break;
    case NotSupport:
      cout<<"Not Support Hype-Thread";
      break;
  }
  cout<<endl;
}

int main()
{
  CPU c(3000000000, Quad, Bit64, Support);
  cout<<"Size of Class CPU: "<<sizeof(CPU)<<endl;
  c.show();
  return 0;
}

