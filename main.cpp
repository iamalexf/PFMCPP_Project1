#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: angryDog
//  action 1: the dog chases the postman
angryDog.chasePostman();
//  action 2: the dog barks
angryDog.bark();
//  action 3: the dog chews the slippers
angryDark.chewSlippers();

//  2)
//  Noun: trafficLights
//  action 1: the traffic lights turn red
trafficLights.turnRed();
//  action 2: the traffic lights turn green
trafficLights.turnGreen();
//  action 3: the traffic lights break
trafficLights.break();

//  3)
//  Noun: shark
//  action 1: the shark swims
shark.swim();
//  action 2: the shark eats a fish
shark.eatFish();
//  action 3: the shark attacks the boat
shark.attackBoat();

//  4) 
//  Noun: cyclist
//  action 1: The cyclist rides their bike
cyclist.rideBike();
//  action 2: The cyclist pedals faster.
cyclist.pedalFast();
//  action 3: The cyclist falls off the bike
cylist.fallOffBike();

//  5)
//  Noun: flea
//  action 1: the flea hops
flea.hop();
//  action 2: the flea bites the dog
flea.biteDog();
//  action 3: the flea dies
flea.die();

//  6) 
//  Noun: mouth
//  action 1: the mouth talks
mouth.talk();
//  action 2: the mouth chews
mouth.chew();
//  action 3: the mouth smiles
mouth.smile();
//  7)
//  Noun: clock
//  action 1: the clock ticks
clock.tick();
//  action 2: the clock tocks
clock.tock();
//  action 3: the clock chimes
clock.chime();
//  8)
//  Noun: tree
//  action 1: the tree grows
tree.grow();
//  action 2: the tree sways
tree.sway();
//  action 3: the tree falls over
tree.fallOver();
//  9)
//  Noun: mouse
//  action 1: the mouse squeaks
mouse.squeak();
//  action 2: the mouse sniffs
mouse.sniff();
//  action 3: the mouse outwits the cat
mouse.outwitCat();
//  10)
//  Noun: sun
//  action 1: the sun burns
sun.burns();
//  action 2: the sun explodes
sun.explode();
//  action 3: the sun goes supernova
sun.goSupernova();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
