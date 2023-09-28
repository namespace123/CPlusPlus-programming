#include <bits/stdc++.h>
using namespace std;

enum CPU_Rank {P1=1, P2, P3, P4, P5, P6, P7};

class CPU
{
  private:
    CPU_Rank rank;
    int frequency;
    float voltage;
  public:

    //构建与析构
    CPU(CPU_Rank r, int f, float v)
    {
      rank = r;
      frequency = f;
      voltage = v;
      cout<<"构造了一个CPU！"<<endl;
    }

    ~CPU()
    {
      cout<<"析构了一个CPU！"<<endl;
    }

    //get系列
    CPU_Rank GetRank() const
    {
      return rank;
    }
    int GetFrequency() const
    {
      return frequency;
    }
    float GetVoltage() const
    {
      return voltage;
    }

    //set系列
    void SetRank(CPU_Rank r)
    {
      rank = r;
    }
    void SetFrequency(int f)
    {
      frequency = f;
    }
    void SetVoltage(float v)
    {
      voltage = v;
    }

    //其他
    void run()
    {
      cout<<"CPU开始运行！"<<endl;
    }

    void stop()
    {
      cout<<"CPU停止运行！"<<endl;
    }
};

int main()
{
  CPU  a {P6, 300, 2.8};
  a.run();
  a.stop();
  return 0;
}

