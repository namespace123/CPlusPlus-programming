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

    //����������
    CPU(CPU_Rank r, int f, float v)
    {
      rank = r;
      frequency = f;
      voltage = v;
      cout<<"������һ��CPU��"<<endl;
    }
    CPU(const CPU &cpu)
    {
      rank = cpu.rank;
      frequency = cpu.frequency;
      voltage = cpu.voltage;
      cout<<"����������һ��CPU��"<<endl;
    }

    ~CPU()
    {
      cout<<"������һ��CPU��"<<endl;
    }

    //getϵ��
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

    //setϵ��
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

    //����
    void run()
    {
      cout<<"CPU��ʼ���У�"<<endl;
    }

    void stop()
    {
      cout<<"CPUֹͣ���У�"<<endl;
    }
};

enum RAM_Type {DDR2=2, DDR3, DDR4};

class RAM
{
    enum RAM_Type type;
    unsigned int frequency;
    unsigned int size;
  public:
    RAM(RAM_Type t, unsigned int f, unsigned int s)
    {
      type = t;
      frequency = f;
      size = s;
      cout<<"������һ��RAM��"<<endl;
    }
    RAM(const RAM &ram)
    {
      type = ram.type;
      frequency = ram.frequency;
      size = ram.size;
      cout<<"����������һ��RAM��"<<endl;
    }
    ~RAM()
    {
      cout<<"������һ��RAM��"<<endl;
    }
    RAM_Type GetType() const
    {
      return type;
    }
    unsigned int getFrequency() const
    {
      return frequency;
    }
    unsigned int getSize() const
    {
      return size;
    };
    void setType(RAM_Type type)
    {
      type = type;
    }
    void setFrequency(unsigned int frequency)
    {
      frequency = frequency;
    }
    void setSize(unsigned int size)
    {
      size = size;
    }

    void run()
    {
      cout<<"RAM��ʼ���У�"<<endl;
    }

    void stop()
    {
      cout<<"RAMֹͣ���У�"<<endl;
    }

};

enum CDROM_Interface
{
  SATA, USB
};
enum CDROM_Install_type
{
  external, built_in
};

class CD_ROM
{
    enum CDROM_Interface interface_type;
    enum CDROM_Install_type install_type;
    unsigned int cache_size;
  public:
    CD_ROM(CDROM_Interface interface_type, CDROM_Install_type install_type, unsigned int cache_size)
    {
      this->interface_type = interface_type;
      this->install_type = install_type;
      this->cache_size = cache_size;
      cout<<"������һ��CD_ROM��"<<endl;
    }
    CD_ROM(const CD_ROM &cdram)
    {
      interface_type = cdram.interface_type;
      install_type = cdram.install_type;
      cache_size = cdram.cache_size;
      cout<<"����������һ��CD_ROM��"<<endl;
    }
    ~CD_ROM()
    {
      cout<<"������һ��CD_ROM��"<<endl;
    }
    CDROM_Install_type GetInstallType() const
    {
      return install_type;
    }
    unsigned int getCacheSize() const
    {
      return cache_size;
    }
    CDROM_Interface getInterfaceType() const
    {
      return interface_type;
    };


    void setInterfaceType(CDROM_Interface interface_type)
    {
      interface_type = interface_type;
    }
    void setInstallType(CDROM_Install_type install_type)
    {
      install_type = install_type;
    }
    void setCacheSize(unsigned int cache_size)
    {
      cache_size = cache_size;
    }

    void run()
    {
      cout<<"CD_ROM��ʼ���У�"<<endl;
    }

    void stop()
    {
      cout<<"CD_ROMֹͣ���У�"<<endl;
    }

};

class Computer
{
    CPU my_cpu;
    RAM my_ram;
    CD_ROM my_cdrom;
    unsigned int storage_size;
    unsigned int bandwidth;
  public:
    Computer(CPU my_cpu, RAM my_ram, CD_ROM my_cdrom, unsigned int storage_size, unsigned int bandwidth);
    Computer(const Computer &computer):my_cpu(computer.my_cpu),my_cdrom(computer.my_cdrom), my_ram(computer.my_ram),
      storage_size(computer.storage_size), bandwidth(computer.bandwidth)
    {
      cout<<"����������һ��Computer��"<<endl;
    }
    ~Computer()
    {
      cout<<"������һ�� Computer ��"<<endl;
    }
    void run()
    {
      my_cpu.run();
      my_ram.run();
      my_cdrom.run();
      cout<<"Computer��ʼ���У�"<<endl;
    }
    void stop()
    {
      my_cpu.stop();
      my_ram.stop();
      my_cdrom.stop();
      cout<<"Computerֹͣ���У�"<<endl;
    }
};
Computer::Computer(CPU my_cpu, RAM my_ram, CD_ROM my_cdrom, unsigned int storage_size, unsigned int bandwidth):
  my_cpu(my_cpu), my_cdrom(my_cdrom), my_ram(my_ram), storage_size(storage_size), bandwidth(bandwidth)
{
  cout<<"������һ��Computer��"<<endl;
}



int main()
{
  CPU a(P6, 300, 2.8);
  a.run();
  a.stop();
  cout<<"*************************************\n";

  RAM b(DDR3, 1600, 8);
  b.run();
  b.stop();
  cout<<"*************************************\n";

  CD_ROM c(SATA, built_in, 2);
  c.run();
  c.stop();
  cout<<"*************************************\n";

  Computer my_computer(a, b, c, 128, 10);
  cout<<"*************************************\n";

  my_computer.run();
  my_computer.stop();
  cout<<"*************************************\n";

  return 0;
}

