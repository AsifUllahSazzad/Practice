#include<bits/stdc++.h>
using namespace std;
class shape{
 protected:
 	int height,width;
};
class triangle:shape{
		public:
        //Constructor:
			triangle(int height,int width)
			{
					this->height = height;
					this->width = width;				
			}
				int print()
				{
					int ans = (height*width)/2;
                    return ans;
				}
};
class rectangle: shape{
    public:
    rectangle(int height,int width)
    {
        this->height = height;
        this->width = width;
    }
    int print()
    {
        int ans = height*width;
        return ans;
    }
};
int main()
{
		triangle area(2,2);
		cout<<"Triangle Area: "<<area.print()<<endl;
        rectangle area1(2,2);
        cout<<"Rectangle Area: "<<area1.print()<<endl;
}