#include<bits/stdc++.h>
using namespace std;

class Cuboid{
    private:
    int length,width,height;
    public:
    Cuboid()
    {
        length = 0;
        width = 0;
        height = 0;
    }
    Cuboid(int length,int width,int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }
    int getVolume()
    {
        int volume = length*width*height;
        
    }
    public:
    int getSurfaceArea()
    {
        int area = 2*length*width+2*length*height+2*height*width;

    }
};

int main()
{
    Cuboid name = {Cuboid (2,3,4), Cuboid(4,3,2)};
    name.getVolume();
}