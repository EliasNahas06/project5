# Project 5 Documentation 
## Create Multiple different files 
Start by creating the files that you need according to the instructions. (horses, race and track, and main)
## makefile 
While following the instructions, write a makefile that will consolidate and automatically compile all of the other files to create one program, being the main game.
## horses.h
### define
Define the horses. 
### Class Horse 
Write a class that consists of a private variable that helps track where the horse is located on the track, or how far it has gone. 

Continue the class this time using public variables. Write the constructor which will be the horse, and then add functions to the constructor to define things like movement, and where the horse is located on the track.

Make sure end the header too. (probably with #endif)

## horses.cpp
### include
Make sure to Include the horses.h file. This file corresponds to it. 

You also need to make sure for both of the cpp files to be using the cstdlib library. 

In this file, you will end up writing logic for the horses.

Write constructor logic that sets the horse's position at the beginning. something like position = 0

Write logic for the movement of the horses. Have the code generate a random number. From that, if it's an odd number, have the code incrament the horses position by one. 

You also should write logic for reporting the positions. use a return statement to return the position if it is called. 

## raceandtrack.h
### define 
ensure to define the race.

### include
You also need to include horses.h in this file too to ensure "raceandtrack" understands what a horse is.

### class

Write a private class that will be defined as the actual race itself. 

In the class itself, create a constant int that identifies the number of horses at 5.

Create another constant integer that defines the length of the track, which will be set at 15 units. 

Include an array that will have the 5 horses. 

Write a helper that'll be given the responsibility of drawing out the track

Write another helper that'll check if a horse crossed the finish line. have this one be a boolean since it'll be a yes/no operation. 

Once you finish writing the private part of the class, write a public instance that will contain the constructor, and then write the main loop that will run the game. 

## raceandtrack.cpp

### include 
Include the raceandtrack.h file as that file corresponds to this one. 

### Functions 
This time, import and use the cstdio library for ease of use

Write a function or class that'll be in charge of drawing the logic that you wrote earlier. 

In this line of code, write a for loop that will loop from 0-14 (length of track as previously mentioned).

In the same for loop, write an if statement that'll take the horses exact spot and will print out its number in the corresponding place.

Use an else statement to print out the remainder of the track that the horse is currently not present on. 

Make sure to print a new line for each track.

Write another function that'll keep the race going and along with it, include a while loop that will keep looping until one of the horses win. 

Also be sure to include a prompt for the user, like "Press enter to continue" 

## main.cpp 

### include
make sure to import the appropriate libraries, and be sure to include the "raceandtrack.h" file as it also corresponds to this one.

### Functions 
Create the actual main function.

In the following line, write a line that will take the time and will seed the randomizer.

Write a line that'll call the function to start the game

Finally, write a line that will exit the program. 










