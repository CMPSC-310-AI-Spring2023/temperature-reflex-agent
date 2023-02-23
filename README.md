# Temparature Detection

![Build](https://img.shields.io/github/actions/workflow/status/CMPSC-310-AI-Spring2023/temperature-reflex-agent/main.yml)

## Arduino Project

The application we developed is a temperature sensing module that will use an Arduino and a temperature sensor to monitor the ambient temperature of a room. The module will alert the user via the LED module if the temperature exceeds a certain range, specifically, if it is more than 5 degrees Celsius higher or lower than the ideal temperature of 20 degrees Celsius.

The Arduino will continuously read the temperature from the sensor and compare it to the ideal temperature, and if it detects that the temperature is outside the specified range, it will activate the LED module to signal the user. The LED module will be programmed to flash to indicate whether the temperature is too high or too low.

This temperature sensing module has many potential applications, including in home automation systems, industrial environments, and scientific research. It can help to prevent damage to equipment or products caused by extreme temperatures and ensure that living spaces are comfortable and safe.

Here are the references that we used when completing this project:

- [TMP36 Temperature Probe](https://bc-robotics.com/tutorials/using-a-tmp36-temperature-sensor-with-arduino/#:~:text=The%20TMP36%20temperature%20sensor%20is)
- [Digital Pihrana LED Light Module](https://wiki.dfrobot.com/Digital_piranha_LED_light_module__SKU__DFR0031_)
- [How to Make an LED Blink in Arduino](https://www.dfrobot.com/blog-660.html)

## Agent

The term "agent" in the context of artificial intelligence refers to an entity that can perceive its environment and take actions to achieve specific goals. In this case, the temperature sensing module can be considered an agent, as it perceives the ambient temperature and takes action to alert the user if it exceeds a certain range.

The characteristics/attributes of this agent include its ability to sense temperature using a temperature sensor, process the sensor data using an Arduino, and take action by activating an LED module to alert the user. Additionally, the agent can be programmed to follow certain rules or algorithms to determine when to trigger an alert.

The temperature sensing module can be classified as a reflex agent, which means that it responds to the current state of the environment without maintaining an internal model of the world. In other words, it does not make predictions about future states of the environment, but rather takes action based on the current sensory input.

The environment task for this agent can be described using the PEAS framework:

- Performance measure: The agent's goal is to maintain the ambient temperature within a certain range (+/- 5C from 20C). The agent's performance measure is how well it achieves this goal, which is measured by the number of times it correctly alerts the user when the temperature exceeds the specified range.

- Environment: The agent operates in an environment that consists of the temperature sensor and the ambient temperature. The temperature sensor provides input to the agent, and the ambient temperature is what the agent is trying to regulate.

- Actuators: The agent's actuators are the LED module, which it uses to alert the user if the temperature exceeds the specified range.

- Sensors: The agent's sensors are the temperature sensor, which provides input to the agent about the current ambient temperature.

Finally, the agent can be considered rational because it takes actions that are expected to achieve its goal of maintaining the ambient temperature within the specified range. It does this by using the information provided by its sensors to make decisions about when to trigger an alert.
