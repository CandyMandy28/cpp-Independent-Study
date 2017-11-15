// Lorentz Transformation Program # 2
// Amanda Wang
// 2017-09-27
// I have no idea what I'm doing. Pls halp

#include <iostream>
using namespace std;
#include <math.h>

double setGamma(double speed);

double setGamma(double speed)
{
    return 1 / sqrt(1 - speed * speed);
}

// the struct for the objects going at relativistic speeds
struct Sanic
{
    // these are all the values from Earth's reference frame
    double pos;     // original position
    double speed;
    double tPos;    // original position
    double tSpeed;
    double gamma = setGamma(speed);
    double tGamma = setGamma(tSpeed);
};

double transformSpeed(Sanic obj1, Sanic obj2);
double transformPosition(Sanic obj1, double t, double position);
double transformTime(Sanic obj1, double t, double position);

// transforms the position into the new position
// please help. I forgot how to do lorentz transformations...
double transformPosition(Sanic obj1, double t, double position)
{
    return gamma * (position - obj1.speed * t);
}

double transformSpeed(Sanic obj1, Sanic obj2)
{
    double u = obj1.speed;
    double v = obj2.speed;
    return (u - v) / (1 - u * v);
}

double transformTime(Sanic obj1, double t, double position)
{
    return gamma * (t - obj1.speed * position);
}

boolean ifKaploowey(Sanic ship1, Sanic ship2, double time)
{
    double time1 = transformTime(ship1, t, ship1.pos);
    double time2 = transformTime(ship2, t, ship2.pos);
    if(abs(ship1.tPos - ship2.pos) < 1)
    {
        std::cout <<"The ship explodes.";
        return true;
    }
}

void displayResults()
{
    std::cout <<"YAY!! You did something..."
    // update all the values or something
    // please for the love of god help meeeeeeee
    // I was never good at Lorentz transformations
    // help
}

int main()
{
    Sanic ship1;
    Sanic ship2;
    ship1 {};
    ship2 {};
    
    for(double time = 0; time < 3; t += 0.1)
    {
        ship1.pos = time * ship1.speed + ship1.pos;
        ship2.pos = time * ship2.speed + ship2.pos;
        ship1.tPos = time * ship1.tSpeed + ship1.tPos;
        ship2.tPos = time * ship2.tSpeed + ship2.tPos;

        // whether or not the torpedo will hit the ship
        if(ifKaploowey(ship1, ship2, time))
        {
            break;
        }
    }

    displayResults();
    return 0;
}