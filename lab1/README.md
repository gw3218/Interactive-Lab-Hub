# IDD-Fa18-Lab1: Blink!

A lab report by Wen Guo


**Fork** this repository to get a template for Lab 1 for *Developing and Designing Interactive Devices* at Cornell Tech, Fall 2018. You should modify this `README.md` file to delete this paragraph and update below. As the lab asks:

> Include your responses to the bold questions on your own fork of the lab activities. Include snippets of code that explain what you did. Deliverables are due next Tuesday. Post your lab reports as `README.md` pages on your GitHub, and post a link to that on your main class hub page.


## Part A. Set Up a Breadboard

![test](https://raw.githubusercontent.com/gw3218/Interactive-Lab-Hub/master/lab1/1_breadboard%20setup.png)

## Part B. Manually Blink a LED

**a. What color stripes are on a 220 Ohm resistor?**
 <br> Red, Red, Black, Black(x1Ohm), Brown(+- 1%)
 
**b. What do you have to do to light your LED?**
<br>push the pushbutton


## Part C. Blink a LED using Arduino

### 1. Blink the on-board LED

**a. What line(s) of code do you need to change to make the LED blink (like, at all)?**
<br> The line that defines which pin to output the digital signal. 


**b. What line(s) of code do you need to change to change the rate of blinking?**
<br> we need to change the delay time to change the rate of blinking.

**c. What circuit element would you want to add to protect the board and external LED?**
<br> Add a resister between the LED and the ground.
 
**d. At what delay can you no longer *perceive* the LED blinking? How can you prove to yourself that it is, in fact, still blinking?**
<br> Under 11ms delay, I could no longer perceive the LED blinking. I record a video and play the video in slow mode, it turns out that the LED is still blinking.

**e. Modify the code to make your LED blink your way. Save your new blink code to your lab 1 repository, with a link on the README.md.**
<br> [code](./blink_LED/blink_LED.ino)

### 2. Blink your LED

**Make a video of your LED blinking, and add it to your lab submission.**
<br>[The video of LED blinking](https://www.youtube.com/watch?v=crcuLZ_6DvA)


## Part D. Manually fade an LED

**a. Are you able to get the LED to glow the whole turning range of the potentiometer? Why or why not?**
<br> NO, because I add another resistor between the potentiometer and the 5V Pin. If I remove that resistor, I should be able to glow the whole turning range of the potentiometer. 

## Part E. Fade an LED using Arduino

**a. What do you have to modify to make the code control the circuit you've built on your breadboard?**
<br> I need to use analogWrite() instead of digitalWrite. 

**b. What is analogWrite()? How is that different than digitalWrite()?**
<br> analogWrite() allows the pin to output continuous analog signal. digitialWrite() can output only HIGH and LOW levels.

## Part F. FRANKENLIGHT!!!

### 1. Take apart your electronic device, and draw a schematic of what is inside. 

**a. Is there computation in your device? Where is it? What do you think is happening inside the "computer?"**
<br> I didn't find an electronic device that I don't need anymore to hijack.

**b. Are there sensors on your device? How do they work? How is the sensed information conveyed to other portions of the device?**

**c. How is the device powered? Is there any transformation or regulation of the power? How is that done? What voltages are used throughout the system?**

**d. Is information stored in your device? Where? How?**

### 2. Using your schematic, figure out where a good point would be to hijack your device and implant an LED.

**Describe what you did here.**

### 3. Build your light!

**Make a video showing off your Frankenlight.**

**Include any schematics or photos in your lab write-up.**

