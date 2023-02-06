# Report by Andrew Briercheck and Nic Ingerson

## Planning, due on January 27th, 2023 by 9:30am

### Timeline

| Timeline                                | Tasks                     |
| --------------------------------------- | ------------------------- |
| 1/25                                    | Finish Planning           |
| --------------------------------------- | ------------------------- |
| 1/30                                    | Parts come in (hopefully) |
| --------------------------------------- | ------------------------- |
| 2/1                                     | Start building and coding |
| --------------------------------------- | ------------------------- |
| 2/4                                     | Finish troubleshooting    |
| --------------------------------------- | ------------------------- |
| 2/8                                     | Have the report finalized |
| --------------------------------------- | ------------------------- |

### Hardware

- Arduino board (Have)

- Digital pirhana LED-R module (Have)

- TMP36 temperature sensor (https://www.amazon.com/KOOKYE-Temperature-TMP36-Precision-Raspberry/dp/B01GH32AQU/ref=sr_1_3?keywords=tmp36&qid=1674828116&sr=8-3&th=1) (Need)

- hook up wires (Have)

- I/O Sensor Expansion Shields V7.1 x1 (https://www.amazon.com/DFROBOT-Gravity-Expansion-Shield-Arduino/dp/B00G3IKO68) (I didn't see any?)

## Arduino Project

Describe the application you have chosen to develop and provide a motivation for why it is a useful application. Include references of all sources you have used throughout this project (URLs are sufficient).

https://www.dfrobot.com/blog-660.html
https://www.dfrobot.com/product-1454.html?search=Gravity%3A%20Starter%20Kit%20for%%3E
https://bc-robotics.com/tutorials/using-a-tmp36-temperature-sensor-with-arduino/#:~:text=The%20TMP36%20temperature%20sensor%20is,making%20it%20a%20popular%20choice.
https://wiki.dfrobot.com/Digital_piranha_LED_light_module__SKU__DFR0031_

The application we've decided to develop is a temperature sensing module. The arduino will use a temperature sensor to monitor ambient temperature, and will alert you via the LED module to let you know if the temperature exceeds a certain range (+/- 10F from 69F).

## Agent

Explain the characteristics/attributes of your agent, what makes it an agent (within the discussed course content), what makes it rational, what type of an agent it is, and what is its environment task (PEAS).

Performance Measure: If the light is on, then the temperature is outside the "room temperature" range.
Environments: Wherever
Actuators: Blinking LED
Sensors: Temperature probe.

## Challenges and Learning Experiences
Discuss any challenges you have encountered during the work on this lab and describe what have you learned.

We had a bit of difficulty first making sense of the "Arduino language". Nic seemed to have a better grasp on it than I did, as he had some experience with C. We didn't have much in way of difficulties building the robot itself. We learned how arduino's function, a bit about the language, etc. and we will hopefully get more comfortable with it as we get into the troubleshooting phase.

## Ethical Benefits and Implications

TODO:
In this section, drawing on class discussions and readings, answer the following questions

1. What entities, businesses, organizations do you envision developing the type of the application you have chosen to develop?
I believe this technology would be valuable in monitoring the environment surroudning the desired object - at the moment it only detects variance in temperature, however we hope this will be able to expand and accomodate additional sensory input including movement speed and proximity to a target.

2. Who are the intended users of this technology?
The intended target could really be anything you want to able to remotely observe. The initial intention was a "babysitter robot", but this could work to monitor and observe changes to any moveable object. 

3. Who is not supposed to use this technology?
This product could potentially be used to monitor someone unbeknownst to them, so the only ethical application is on consenting parties.

4. How can the application developed in this lab cause harm?
Again, tracking changes related to a target without their consent.

5. What solutions could be implemented to avoid the harm or to fix the harm described above?
Limiting the range of the probe, limiting sensory inout, some sort of authentication prior to initialization?

## Team Work

Describe the details of your team working strategy, specifically explain how did you complete this work as a team and describe the specific contributions of each team member.

Nic tended to focus on the more software oriented aspects of the project. I did the work relating to assembling the robot, finding schematics and doing the writing portions of the project. 
