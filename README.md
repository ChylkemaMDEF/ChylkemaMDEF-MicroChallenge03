# MicroChallenge03 _Carlotta Hylkema & Oliver Lloyd

The third and final microchallenge that took place during our Masters in Design for Emergent Futures at IAAC and ELISAVA in Barcelona. This project was done by Oliver Lloyd and Carlotta Hylkema, as a continuation of our thesis project fociussing on energy usage and finding ways to decrease our consumption not only in homes but also in other systems. This challenge however focussed more on the final design echibition that takes place on June 10th. The technical development of our project took place more during the second microchallenge which can be found here [MicoChallenge 02](https://github.com/ChylkemaMDEF/MicroChallenge-2-Energy-Bot). If you want to view our personal MDEF sites you can find them here:

* [Carlotta's Site](https://chylkemamdef.github.io/MyPortfolio/index.html)
* [Oliver's Site](https://oliver-lloyd-mdef.github.io/Oliver-MDEF-Portfolio/)

# The Goal of this Challenge

We were unsure of the way we wanted to approach this microchallenge at first as the original brief about taking input from the body and translating this into some form of data was not directly linked to our proejct. However, once we started the class Santi made a point tha twe could sue this in more of the side of Exhibit Design and Interaction of the people visiting our journey. We brainstormed of ways we could gather input from the people and which potential output we could generate based on this. In the end we decided to create a interaction at the start of our display that creates a sense of impact and interaction into the problem of energy.

![Brainstorm](https://github.com/ChylkemaMDEF/ChylkemaMDEF-MicroChallenge03/assets/147051108/3c2d2c61-9936-4831-87d7-84ad180886ab)

From this brainstorming session we defined the following:

The defined input is: **A dial in which people have the power to determine the amount of energy being released based on what averages of other countries is**

The defined output is: **A group of household electronic machines that start turning on in relation to the energy budget set as the input. All of these things will create an overwhelming feeling of input and things like a tv or radio will give feedback based on the energy problem to the person at the dial**

# The Plan
Before we started with this challenge we discussed the steps we felt needed to reach the end goal, and which skills and things were needed beforehand. We wanted to work mostly on hardware during this challenge and get as much done for the display part of MDEFFest so that in the coming weeks we can focus more on further device and AI development. This is why this week was more focussed on the display, however as we didn't want to lose to much momentum we also scheduled moments to work on the AI infrastructure and PCB development for the physical devices of our design project. This was the original planning we had made and we focussed on these primary steps before adding anything else to keep us on track:
![image](https://github.com/ChylkemaMDEF/ChylkemaMDEF-MicroChallenge03/assets/147051108/f8dd8c19-d104-4dcf-8ade-bb90de674763)

# The Process

**ADD VIDEO HERE WE CREATE**

# Understanding the Circuit of the Device

The circuit of this device was quite simple as it required a translation of a rotation of a dial into certain devices being turned on or off gradually. We brainstormed about different potential ways this could happen and it was determined that the best way was to use a potentiometer and several relays that are each connected to their own individual plug.The wanted interaction is as followed:

![WhatsApp Image 2024-05-07 at 16 17 45_5aa18951](https://github.com/ChylkemaMDEF/ChylkemaMDEF-MicroChallenge03/assets/147051108/68ef51f2-a378-481e-9307-51d73acfbff7)

From here we researched online how we could connect a single outlet in the wall to multiple plugs and relays. Some of the most helpful diagrams and articles that we used were:

* [Turning an appliance into a smart device](https://www.circuitbasics.com/build-an-arduino-controlled-power-outlet/)
* [Splitting Power with Multiple Relays](https://electronics.stackexchange.com/questions/205286/splitting-mains-power-into-multiple-relay-switched-circuits)
* [Controlling multiple outlets with SSR Relay](https://forum.arduino.cc/t/controlling-multiple-outlets-with-ssr-relay-module-and-arduino/1218455)

With this in mind we created a quick drawing about the connections and how we saw the plug aspect being. Next to this a quick flowchart was created for the neccessary code:

![WhatsApp Image 2024-05-07 at 15 44 38_1385cdea](https://github.com/ChylkemaMDEF/ChylkemaMDEF-MicroChallenge03/assets/147051108/c44052fa-2cb6-4922-bc5f-b52755c788ab)


## Bill of Materials Circuit Dial
* 1x Breadboard
* 1x Barduino or Arduino board 
* 3x 2 Channel DC 5V Relay Module-Low Level Trigger
* 2x 33 Ohm Resistors
* Multiple Connecting Wires
* 6x Sockets
* 1x Wire with Wall Plug
