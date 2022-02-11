# include iomanip 
## >> fixed >> setprecision(3) 想要小數點後3位
# 平行四邊形對角座標合相等
```cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x0, x1, x2, x3, x4,y0, y1, y2,y3,y4;
	while (cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2 >> x3 >> y3)
	{
		if(x0 == x2 && y0 == y2)
		{
			x4 = x1+x3-x2;
			y4 = y1+y3-y2;
		}	
		else if(x0 == x3 && y0 == y3)
		{
			x4 = x1+x2-x3;
			y4= y1+y2-y3;
		}
		
		else if(x1 == x2 && y1 == y2)
		{
			x4 = x0+x3-x2;
			y4 = y0+y3-y2;
		}
		else if(x1 == x3 && y1 == y3)
		{
			x4 = x0+x2-x1;
			y4 = y0+y2-y1;
		}
		
		cout << fixed <<setprecision(3) << x4  << ' '<< fixed << setprecision(3) << y4 << endl;
	}

		return 0;
	}
```
