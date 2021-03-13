# Colorblindness Combinations

## Description

Using a theme completer with a CSS file, choose a basecolor, once you've chosen a basecolor have that base color make a combination with five other colors. Make sure the color that are problematic aren't in the same combination.  


### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


## Developer

Ying Xiong

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./colorblindesss 
```

Here is an example of the program running:
 if(period >= 0){
        string token = (line.substr(period+1));

## C++ Guide

### Variables and Data Types

I used variables that are `string` to hold the filename and the line of text in file. I also have variable that are `char` to hold period and colon because that is how I know when I need to start looking for the color. I also have variables that are `int` because that tell me where in the line I can start  looking for the letter that makes up the word.  

### Console Input and Output


I use the `console` output to print the prompt asking the user to type in the base color. 

I then use the `input` to accept what the user type.  

I then use the `output` to display the color combination. 
### Decisions


I use the `if else` condition to decide what color combination I need to do by checking what they base color is and making sure that I do not pick the wrong color.

Iteration

I use the `while` loop to go through every line of the css file.


### Iteration
 
 I used a `while` to keep track of what line I'm at. To be precisely be able to find what it needs to start the code. 

### File Input and Output
 
I use the the `fstream` to load the css file and assign the content of the file to reader so I can read the file.

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
