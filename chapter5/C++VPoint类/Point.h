// 类的定义，Point.h
class Point
{
    int x, y;
    static int count;
  public:
    Point(int x=0, int y=0):x(x),y(y)
    {
      count++;
    }
    Point(const Point &p);
    ~Point()
    {
      count--;
    }
    int getX() const
    {
      return x;
    }
    int getY() const
    {
      return y;
    }
    static void showCount();
};

