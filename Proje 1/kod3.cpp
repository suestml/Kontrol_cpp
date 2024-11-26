#include <iostream>
#include <cmath> 

using namespace std;

const double MPI = 3.14159265358979323846;

struct vec2
{
    double x;
    double y;
};

double distance(vec2 a, vec2 b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

void func(vec2 origin, int n, float rad_q  ,vec2 dir) {
    cout << " before: " << origin.x << " " << origin.y << " " << rad_q << " | ";
    if (n != 25)
    {
        rad_q = 40; 
        vec2 vertical;
        vec2 horizontal;
        if (dir.x > 0 && dir.y > 0)
        {
            vertical.y = origin.y + (dir.y * ((10 - origin.x)/dir.x));
            vertical.x = 10;
            horizontal.x = origin.x + (dir.x * ((10 - origin.y)/dir.y));
            horizontal.y = 10;
            if (distance(origin, vertical) < distance(origin, horizontal))
            {
                origin = vertical;
                dir.x = -dir.x;
                rad_q = 180 - rad_q;
            }
            else
            {
                origin = horizontal;
                dir.y = -dir.y;
                rad_q = 180 - rad_q;
            }
        }
        else if (dir.x < 0 && dir.y > 0)
        {
            vertical.y = origin.y + (dir.y * ((-10 - origin.x)/dir.x));
            vertical.x = -10;
            horizontal.x = origin.x + (dir.x * ((10 - origin.y)/dir.y));
            horizontal.y = 10;
            if (distance(origin, vertical) > distance(origin, horizontal))
            {
                origin = horizontal;
                dir.y = -dir.y;
                rad_q = 180 + rad_q;
            }
            else
            {
                origin = vertical;
                dir.x = -dir.x;
                rad_q = rad_q;
            }
        }
        else if (dir.x < 0 && dir.y < 0)
        {
            vertical.y = origin.y + (dir.y * ((-10 - origin.x)/dir.x));
            vertical.x = -10;
            horizontal.x = origin.x + (dir.x * ((-10 - origin.y)/dir.y));
            horizontal.y = -10;
            if (distance(origin, vertical) < distance(origin, horizontal))
            {
                origin = vertical;
                dir.x = -dir.x;
                rad_q = 360 - rad_q;
            }
            else
            {
                origin = horizontal;
                dir.y = -dir.y;
                rad_q = 360 - rad_q;
            }
        }
        else if (dir.x > 0 && dir.y < 0)
        {
            vertical.y = origin.y + (dir.y * ((10 - origin.x)/dir.x));
            vertical.x = 10;
            horizontal.x = origin.x + (dir.x * ((-10 - origin.y)/dir.y));
            horizontal.y = -10;
            if (distance(origin, vertical) > distance(origin, horizontal))
            {
                origin = horizontal;
                dir.y = -dir.y;
                rad_q = rad_q; 
            }
            else
            {
                origin = vertical;
                dir.x = -dir.x;
                rad_q = 180 + rad_q;
            }
        }
        cout << "after: " << origin.x << " " << origin.y << " " << rad_q << endl;
        func(origin, n + 1, rad_q, dir);
    }
}

int main() {
    vec2 origin;
    origin.x = 0;
    origin.y = 0;
    int n = 0;
    float angle = 40;
    double rad_q = angle * MPI / 180.0;
    vec2 dir;
    dir.x = cos(rad_q);
    dir.y = sin(rad_q);
    func(origin, n, angle,dir);
    return 0;
}
