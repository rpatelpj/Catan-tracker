# Catan-tracker
_Referred to as "command line application" or "application"._

## About
This command line application was created to provide a simple method of tracking the progress of each player in a game of "Catan" by Klaus Teuber.

Currently, the base game and "Catan: 5-6 Player Extension" are supported.

## Benefits
* Quickly retrieve everyone's victory points
* Visualize distribution and test normality of dice rolls
* Remind yourself of the last roll if you forget
* Save everyone's modus operandi at the end of the game
* _Coming Soon_: Visualize everyone's victory points over time

## Prerequisites
You will need access to the following to run this application.

* Unix-like command line
* gcc
* Make

## Compatibility
### C Variant
Compiled using gcc Version 4.2.1. Tested on x86_64-apple-darwin19.3.0 (macOS Catalina Version 10.15.3).

### C++ Variant
_Coming soon._

## How to Run
1. Download this repository to your preferred directory (e.g. `Desktop`)
2. Go to your preferred directory on your command line (e.g. `cd ~/Desktop/Catan-tracker`)
3. Run `make` to compile the application
4. Run `./tracker` to open the application

## Updating
Run `make update` to update your `Catan-tracker` local repository and `doxygen` submodule.

## Documentation
The source code is commented with descriptions of each function. Also, check out the [HTML interface](https://rpatelpj.github.io/Catan-tracker).

The HTML interface is generated through Doxygen. `bison` version 2.7 or later and `cmake` are required in addition to other pre-installed packages to use Doxygen.

Run `make generate` to generate documentation from the source code.