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
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       remote
//  action 1:   changes the channel
remote.changeChannel();
//  action 2:   turns up the volume
remote.increaseVolume();
//  action 3:   opens the menu
remote.openMenu();
//  2)
//  Noun:       cat
//  action 1:   begs for food
cat.begForFood();
//  action 2:   meow
cat.meow();
//  action 3:   kneads
cat.knead();
//  3)
//  Noun:       guitar pedal
//  action 1:   distorts
pedal.distort();
//  action 2:   creates delay
pedal.addDelay();
//  action 3:   add a lil flange, why not
pedal.Flanger();
//  4)
//  Noun:       shoe
//  action 1:   protects your feet
shoe.protectFeet();
//  action 2:   loosens the laces
shoe.loosenLaces();
//  action 3:   lets in water even though it was called "waterproof" in the store
shoe.letInWater();
//  5)
//  Noun:       smart watch
//  action 1: tells the time
watch.tellTime();
//  action 2:   displays messages
watch.displayMessage();
//  action 3:   counts your steps
watch.countSteps();
//  6)
//  Noun:       towel
//  action 1:   drys you off
towel.dryUser();
//  action 2: absorbs sound in the bathroom
towel.absordSound();
//  action 3: retains a smell
towel.retainSmell();
//  7)
//  Noun:       smoke alarm
//  action 1:   sniffs out your good cooking
alarm.detectSmoke();
//  action 2:   beeps like mad
alarm.beep();
//  action 3:   uses up the battery
alarm.depleteBattery();
//  8)
//  Noun:       oven
//  action 1:   preheats
oven.preHeat();
//  action 2:   warms up the room
oven.warmRoom();
//  action 3:   cooks your food
oven.cookFood();
//  9)
//  Noun:       heart
//  action 1: beats at a rhythm
heart.beat();
//  action 2:   pumps blood
heart.pumpBlood();
//  action 3:   freaks out when the smoke alarm started beeping
heart.attack();
//  10)
//  Noun:       photoshop
//  action 1:   adds a sick motion blur to your photo
photoshop.blur();
//  action 2:   adds a sick mosaic filter to your photo
photoshop.mosaic();
//  action 3:   adds a sick inversion to the colors of your photo
photoshop.invertColors();


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
