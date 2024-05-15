// creating the prorgram in which a perametriz constructor acepts two values of x and y cordinate and
// create the function which returns the diffrence of x and y cordinates

// create the function which takes two points objects and computes the distance between 2 points
// Hint: make it a friend function
// use the #include<math.h> for sqrt

// formula for finding the diffrence between two cordinates is:
// sq = square / sqrt = square root
// x = (2,-2) , y = (6,-2)
// z = (2 - -2)sq + (6--2)sq
// (z)sqrt

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

class point{
    int a,b;

    public:

    friend void pointdiffrence(point,point);

    point(int x, int y){
          a = x;
          b = y;
    }

};

void pointdiffrence(point o1, point o2){
    int s = (o1.a - o1.b);
    int r = (o2.a - o2.b);
    int y = sqrt(pow(s,2) + pow(r,2));
    float x = float(y-1);
    cout<<"the diffrence beetween two points is: "<<x<<endl;
}

int main(){
    
    point c1(1,0);
    point c2(70,0);
    pointdiffrence(c1,c2);
}


