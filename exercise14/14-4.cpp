/*
Exercise 14-4: You need to supply some I/O routines for handling lines in a file. The basic
definition of the line-number class is:

class line_number {
public:
void goto_line(int line);
int get_current_line(void);
long int get_char_pos(void);
}

The member functions are defined as:

void goto_line(int line);
Positions the input file at specified line.

int get_current_line(void);
Returns the current line number (as set by goto_line).

long int get_char_pos(void);
Returns the character position of the current line. (This is the tricky one.)

Several line_number classes may be in use at any time. The class maintains its own
internal list so that it knows which line_number classes are in use. When goto_line is
called, the function will scan the list of line_number classes to find the one nearest the
given line number and use it to start scanning for the given line number.
For example, suppose there are four active line_number variables:
Variable Position
beginning Line 0
chapter_start Line 87
current_heading Line 112
current_location Line 52

You wish to move current_location to line 90. The goto_line function would
search the list for the line nearest the new location (in this case chapter_start) and use it
to jump to line 87. It then would read the file character by character until it saw three
end-of-line characters to position itself at line 90.
*/
#include <iostream>
