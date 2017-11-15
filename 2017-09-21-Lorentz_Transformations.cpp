//Lorentz Transformations
//Amanda Wang
//2017-09-17, 2017-09-20

/*
Due: 2017-09-20
Create a program to simulate relativistic ships shooting at each other:

There should be two ships.  The player may determine their initial position and velocity relative to the Earth.
Position should be in light-seconds and velocity in terms of c, to make units easy.
The player can determine the muzzle velocity of the torpedo (relative to the ship shooting it) and the timer that is on the torpedo.
If the torpedo explodes within a set distance of the target ship in the torpedo's reference frame, then the player wins.
You can decide what that distance should be.

Print out a list of coordinates at different times, something like this:
t=0 s  ship 1: 3.45 light-seconds  ship 2: 9.23 light-seconds  torpedo: 3.45 light-seconds
t=1 s  ship 1: 3.15 light-seconds  ship 2: 9.41 light-seconds  torpedo: 4.23 light-seconds
Torpedo explodes at 1.33 s!  Ship 2 is not close enough.  Ship not destroyed.

Make it so that you can get this output in different reference frames.
You don't need to do this all at the command line.  If you want, you can set some of the quantities directly in the code, to make testing faster.
You can even make some of the quantities random.  The focus is on implementing the calculations properly.

Here are some equations, to help review.  But if you're in ModPhys now, you should have this memorized.
If an event happens at time t and position x in one reference frame, you can calculate the time and position in another reference frame
using another reference frame that moves with velocity v relative to the first frame.  (v can be positive or negative, depending on direction.)
First, define the variable gamma =  1 / sqrt(1 - v * v).  Then the time t' and position x' in the new reference frame will be
t' = gamma * (t - v * x) and x' = gamma * (x - v * t).
If an object has velocity u in one reference frame, you can find its velocity in a reference frame moving with a relative velocity v.
It is given by (u - v) / (1 - u * v).
*/
#include <iostream>
using namespace std;
#include <string>
// const is the key word for constant.

// double transformT(double time, Sanic object);
// double transformX(double time, Sanic object);

struct Sanic{
    double x;  // position at t = 0
    double v;  // constant speed (in units of c)
    double gamma =  1 / sqrt(1- v * v);  // gamma
    // double time;
    string name;
    
    // the speed of the given Sanic object in 
    // a reference frame with the speed of u
    // it's the same thing as Dr. Dong's transformU(...)
    double getSpeedFrame(double u);

    // returns position of the object
    double getPos(void);

    // returns speed of object
    double getSpeed(void);

    // returns gamma of object
    double getGamma(void);

    // set all the values that you give.
    double set(double pos, double speed, string namer)
    {
        x = pos;
        v = speed;
        name = namer;
    }
}

double Sanic::getSpeedFrame(double u)
{
    return (u - v) / (1 - u*v);
}

void displayFrames(int time, Sanic frames*)
{
    string message = "" + time + " s" ;
    cout message;
}

int main()
{
    cout <<""
    std::cin.get();
    // reference frame from earth
    Sanic sh1p;
    sh1p.set(-2,0.3,"ship 1");

    Sanic ship2;
    ship2.set(5,-0.7,"ship 2");

    Sanic torp3do;
    torp3do.set(0.1,0.9,"torpedo");

    // reference frame from torpedo
    torpSh1p = sh1p.getSpeedFrame(torp3do.getSpeed());
    torpShip2 = ship2.getSpeedFrame(torp3do.getSpeed());
    torpTorp = torp3do.getSpeedFrame(torp3do.getSpeed());

    // reference frame from sh1p
    sh1pSh1p = sh1p.getSpeedFrame(sh1p.getSpeed());
    sh1pShip2 = ship2.getSpeedFrame(sh1p.getSpeed());
    sh1pTorp = torp3do.getSpeedFrame(sh1p.getSpeed());

    // t = 6.88 s
    // x = 4.098 cs

    //reference frame from ship2
    ship2Sh1p = sh1p.getSpeedFrame(ship2.getSpeed());
    ship2Ship2 = ship2.getSpeedFrame(ship2.getSpeed());
    ship2Torp = torp3do.getSpeedFrame(ship2.getSpeed());

    // donst double muzzleV = initialShip1x < initialShip2x ? 
                // torpedoMuzzleV :
                // -torpedoMuzzleX

    return 0;
}
