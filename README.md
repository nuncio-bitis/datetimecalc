
## Rationale

I originally started this project to get familiar with C++ classes. I became
interested in creating Time and Date classes, although the Date class included
here has been borrowed, because it's better and more inclusive than what I had
come up with :-)  
This project started out as a command line utility to calculate the difference
between two dates, or to add a number of days to a date.  This sprung from the
necessity of having to change my passwords every 30, 60, or 90 days as dictated
by the companies I've worked for.  I changed the project to a GUI to 1) learn Qt
by doing, and 2) to make the interface easier.  Less typing is almost always
better.


## Goals of this project

* Create an easy-to-use date and time calculation utility.
* Uses Qt libraries to be portable
* Should run on most platforms that have Qt installed (Linux, Windows, Mac, ...)


## To build package from source code:

To build the executable, you need to have Qt installed. See ChangeLog for Qt
version used to build the latest version of this software. As of this writing
(project creation in SourceForge), I was using Qt SDK 2010.02 (Qt 4.6.2).  You
might be able to get away with Qt 4.5.something, although I couldn't guarantee it.

The easiest way to build is to open securePassGen.pro in QtCreator and build
from there.  Otherwise, on a command line:

Linux:
> qmake
> make

Windows:
> qmake -spec win32-g++ -r
> mingw32-make (Windows systems)


---------------------------------------

Go to DateTimeCalc official site for more information :  
http://DateTimeCalc.sourceforge.net/  

J. Parziale  
4/11/2010

---
