# Space Invaders

## Description
Classic Space Invaders written in modern c++ and sdl2. Built for the Udacity Nanodegree Program.

This game uses the SDL2 game engine to render different assets to the screen. The Game class handles the main state of the games and run the game loop. We use the renderer to hold a frame on the screen and hold the sprites. The controller is used to handle input and fire the cannon.

## File Structure
* assets
* cmake
* include
  * cannon.h
  * controller.h
  * game_state.h
  * game.h
  * invader_list.h
  * invader.h
  * keyboard_controller.h
  * level.h
  * renderer.h
  * sprite.h
* levels
* src
  * cannon.cc
  * game.cc
  * invader_list.cc
  * invader.cc
  * keyboard_controller.c
  * level.cc
  * main.cc
  * renderer.cc
  * sprite.cc
* CMakeLists.txt
* README.md

## Class Structure
* sprite
  * cannon
  * invader
* controller
  * keyboard_controller
* game
* game_state
* invader_list
* renderer

## 


## Rubric
| Criteria  |  Examples |
|----------------------|------|
| README Instructions         | README.md   |
| The submission must compile and run | Done |
| Understanding of C++       | All Classes |
| Reads Data from a file     | level.cc:7 |
| Accepts user input | keyboard_controller.cc:4 |
| Object oriented techniques | All Classes ie. Sprite -> Cannon |
| Appropriate access specifiers | All Classes |
| Class constructors utilize member initialization list | cannon.cc:4 |
| Classes abstract implementation details from their interfaces. | invader.h |
| Classes encapsulate behaviour | All Classes |
| Classes follow an appropriate inheritance hierarchy. | Controller.h, KeyboardController.h |
| Derived class functions override virtual base class functions. | Cannon.h:27, Invader.h:33 |
| The project makes use of references in function declarations. | Game.h:28, KeyboardController.h:13 |
| The project uses destructors appropriately. | renderer.cc:66 |
| The project uses smart pointers instead of raw pointers. | game.h:33-37 |
| The project uses multithreading | cannon.cc:25 |

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* SDL2 Image >= 2.0
  * All installation instructions can be found [here](https://www.libsdl.org/projects/SDL_image/)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SpaceInvaders`.
5. Arrow keys to move around and `space` to fire
