# MicroChallenge03 _Carlotta Hylkema & Oliver Lloyd

The third and final microchallenge that took place during our Masters in Design for Emergent Futures at IAAC and ELISAVA in Barcelona. This project was done by Oliver Lloyd and Carlotta Hylkema, as a continuation of our thesis project fociussing on energy usage and finding ways to decrease our consumption not only in homes but also in other systems. This challenge however focussed more on the final design echibition that takes place on June 10th. The technical development of our project took place more during the second microchallenge which can be found here [MicoChallenge 02](https://github.com/ChylkemaMDEF/MicroChallenge-2-Energy-Bot). If you want to view our personal MDEF sites you can find them here:

* [Carlotta's Site](https://chylkemamdef.github.io/MyPortfolio/index.html)
* [Oliver's Site](https://oliver-lloyd-mdef.github.io/Oliver-MDEF-Portfolio/)

# The Goal of this Challenge

We were unsure of the way we wanted to approach this microchallenge at first as the original brief about taking input from the body and translating this into some form of data was not directly linked to our proejct. However, once we started the class Santi made a point tha twe could sue this in more of the side of Exhibit Design and Interaction of the people visiting our journey. We brainstormed of ways we could gather input from the people and which potential output we could generate based on this. In the end we decided to create a interaction at the start of our display that creates a sense of impact and interaction into the problem of energy.

![Brainstorm](https://github.com/ChylkemaMDEF/ChylkemaMDEF-MicroChallenge03/assets/147051108/3c2d2c61-9936-4831-87d7-84ad180886ab)

**_Inspiration Projects_**:
* [Energy Grid Project](https://www.most.org/explore/energy-powering-our-future/)
* [Future Starts Here](https://www.dezeen.com/2018/05/11/vas-the-future-starts-here-exhibition-explores-dark-and-bright-sides-of-tomorrow/)
* Aurel Energy Box

From this brainstorming session we defined the following:

The defined input is: **A dial in which people have the power to determine the amount of energy being released based on what averages of other countries is**

The defined output is: **A group of household electronic machines that start turning on in relation to the energy budget set as the input. All of these things will create an overwhelming feeling of input and things like a tv or radio will give feedback based on the energy problem to the person at the dial**

# The Plan
Before we started with this challenge we discussed the steps we felt needed to reach the end goal, and which skills and things were needed beforehand. We wanted to work mostly on hardware during this challenge and get as much done for the display part of MDEFFest so that in the coming weeks we can focus more on further device and AI development. This is why this week was more focussed on the display, however as we didn't want to lose to much momentum we also scheduled moments to work on the AI infrastructure and PCB development for the physical devices of our design project. This was the original planning we had made and we focussed on these primary steps before adding anything else to keep us on track:

![image](https://github.com/ChylkemaMDEF/ChylkemaMDEF-MicroChallenge03/assets/147051108/f8dd8c19-d104-4dcf-8ade-bb90de674763)

There was a division of tasks that took place throughout the week but in all aspects we helped eachother in the design. Carlotta took the lead in the creation of the arduino code and the electrical relay box. Oliver on the other hand spent the first day trying to better understand how we could create the physical display stand. After the first days of creating these seperate parts we came together to test the electrical box and finish building the setup. We both worked on the posters that were displayed, Carlotta on the dial poster and Oliver on the table poster.  Also in tandem to the work we show in this repo, we were working on further development of our AI bot so we both spent some time trying to build the PCB (Oliver) and better understanding the functions of our AI (Carlotta).

# The Process
[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/cQKXHks-g-8/0.jpg)](https://www.youtube.com/watch?v=cQKXHks-g-8)
  
## Building the Relay Circuit and Power Box
The circuit of this device was quite simple as it required a translation of a rotation of a dial into certain devices being turned on or off gradually. We brainstormed about different potential ways this could happen and it was determined that the best way was to use a potentiometer and several relays that are each connected to their own individual plug.The wanted interaction is as followed:

![WhatsApp Image 2024-05-07 at 16 17 45_5aa18951](https://github.com/ChylkemaMDEF/ChylkemaMDEF-MicroChallenge03/assets/147051108/68ef51f2-a378-481e-9307-51d73acfbff7)

From here we researched online how we could connect a single outlet in the wall to multiple plugs and relays. Some of the most helpful diagrams and articles that we used were:

* [Turning an appliance into a smart device](https://www.circuitbasics.com/build-an-arduino-controlled-power-outlet/)
* [Splitting Power with Multiple Relays](https://electronics.stackexchange.com/questions/205286/splitting-mains-power-into-multiple-relay-switched-circuits)
* [Controlling multiple outlets with SSR Relay](https://forum.arduino.cc/t/controlling-multiple-outlets-with-ssr-relay-module-and-arduino/1218455)

When looking at the interaction we wanted and the way we wanted the device to fucntion we created a flowchart for the arduino code needed.

![Energy Relationships - Function Arduino Code](https://github.com/ChylkemaMDEF/ChylkemaMDEF-MicroChallenge03/assets/147051108/0a9dae72-bee7-4a90-82ea-60d766cdf184)

### The Physical Ciruit
Now that we had a better idea of what we wanted to build we ended up talking to Aurel about our idea and he suprised us by telling us that he had done a similar project for the electrical box and could share his knowledge with us. This helped a lot as from him we received the 3D file to print the box to store all the electrical components. From here we took a look at his created box and then made a design for how each wires would need to be connected to each other. The original idea for a connection of wires is shown in the following picture. We decided as this was for personal use to forgo the ground wire and instead plug the end into an extension plug as the safety. 

![DiagramCircuitMicroChallenge03](https://github.com/ChylkemaMDEF/ChylkemaMDEF-MicroChallenge03/assets/147051108/c3fed798-b34d-4416-88fd-da9d09b7b035)

#### Bill of Materials Circuit Dial (For 4 plug device)
* 1x Breadboard
* 1x Barduino or Arduino board 
* 2x 2 Channel DC 5V Relay Module-Low Level Trigger
* Multiple Thick 240V Wires
* 2x 4 to 1 Lever Wire Connectors
* 2x 2 to 1 Lever Wire Connectors
* 4x Sockets
* 1x Wire with Wall Plug
* 1x Potentio Meter
* 1x Casing 3D Printed


#### The steps to follow:
1. 3D print casing for electrical components
2. Screw 2 240V wires into each relay, check your relay first to see which of the two outer connectors you need. For us it was center and right connections. By screwing these in first you then have an easier job ahead. We did this once the relay was screwed in and it was much more difficult.
3. Screw relays into box
4. Now you need to follow the diagram shown above to connect the plug wires together.
   
   4.1 The live wire (blue usually) from the wall plug needs to go into one of the 4 to 1 connectors. Then 1 wire from each relay attaches to this connector as well.
   
   4.2 The other wire from each relay will attach to the individual plugs. On the back of the plug you can see a L and an N. The wires from the relay attach to the L.
   
   4.3 Then you need to attach a wire to each N port of the plug into a new 4 to 1 connectors. The last port of this connector will be the neutral wire (usually brown) from the wall plug.
   
   4.4 Now double check if all connections are correct and stuck.
5. Now the final step is to connect the relays to the Arduino board.

   5.1 Connect 4 wires to each relay
   
   5.2 Connect the voltage wires of the relay to the 5V ground input of the arduino. If it is 3.3V or 5V depends on the relay so be sure to check this
   
   5.3 Connect the ground wires of the ground of the arduino.
   
   5.4 Connect all the pin wires of each relay to the digital pins of the arduino board. Make sure to take note of which relay pin is connected to which plug. You can always test this after but it makes it easier        to take note beforehand.

6. Connect Arduino to powersource (we used a powerbank) and run the code. When testing be sure to plug into a extension cord with ground and have this switched off when plugging devices into the created box. This    ensures maximum safety while testing.

### The Code Needed
The code we used for this project is very easy simple as can be seen in the flowchart above. It was important for us that it was adaptable to multiple relays incase we wanted to add more plugs in the end. The box I explained above was for 4 plugs but in the end we connected another box to ours to get 6 workable outputs in the end. The code is explained below in detail.

First you need to setup the code to handle the different variables and set the maximum angle of the potentiometer:

      #define ROTARY_ANGLE_SENSOR 1
      #define ADC_REF 5
      #define GROVE_VCC 5
      #define FULL_ANGLE 300
      
      #define NUM_RELAYS  6 // Change this number based on how many relays you have
      int relayPins[NUM_RELAYS] = {5,6,8,10,12,13}; // Store the pins for the relay in an array this allows them to be called dynamically
      int increments = FULL_ANGLE /NUM_RELAYS ;

Then it is time to setup the pinmodes and the most important part to set the relays to off so that when the code starts there is no energy flowing through the plugs and all the devices start turned off when the dial is at 0 degrees:

      pinMode(ROTARY_ANGLE_SENSOR, INPUT); // set pinmode of dial
      
      digitalWrite(relayPins[6], LOW);
    
      // set pinmode and state of each relay dynamically
      for (int i = 0; i < NUM_RELAYS; i++) {
        pinMode(relayPins[i], OUTPUT);
        digitalWrite(relayPins[i], LOW);
      }
      }

Within the loop you call for the degrees, that are used to determine how many relays will be turned on, by using a created function called Getdegrees. This function reads the data from the potentiometer and send it back to the looped code:

      int getDegree() {
        int sensor_value = analogRead(ROTARY_ANGLE_SENSOR);
        float voltage = (float)sensor_value * ADC_REF / 4095;
        float degrees = (voltage * FULL_ANGLE) / GROVE_VCC;
        return degrees;
        }

In the main loop there are 2 main parts, the code that runs if the angle is 0 degrees and then the code that is done for if it is above this. The first step for the loop is to determine how many relays should turn on. If the dial is set to 0 then all the relays will be switched to 0 using an iterative loop to make sure all the relays that were potentially on before are now turned off(LOW):

      if (degrees == 0){
          for (int i = 0; i < NUM_RELAYS; i++){ // by setting i to 0 it needs to be less then as array stores from 0 to ..
            digitalWrite(relayPins[i], LOW);
            Serial.print("Relays Off");
          }

The last important function in the code is the code that checks what the degrees are and the amount of relays to turn on. This is done by checking the amount of relays set at the beginning and the total degrees of the full potentiometer. By this increments are determined. Then when the degrees are read and above 0. The read degrees is divided by the incremenets to see how many relays are turned on (HIGH):
      
      if (degrees > 0) {
          int activeRelays = degrees / increments; 
          
          // Loop through i being the amount of relays to turn on, and then for each relay turn this on. So it activeRelays = 2 it goes through twice and turns on relay1 + relay 2
          for (int i = 0; i <= activeRelays && i < NUM_RELAYS; i++) {
            digitalWrite(relayPins[i], HIGH);
            Serial.print("Activating relay ");
            digitalWrite(relayPins[i+1], LOW);
            Serial.println(i + 1);
      
          }
        }

### Building the Dial Setup 

The final part of the challenge was focussed on building the stand for the dial and determining the infographics that we wanted to display to the people. This was actually a fun process in which we designed a box in Fusion360 and then used a lasercutter to cut the individual parts and then putting the box together using hot glue and latches. 

####  Bill of Materials Stand Display

* Lasercutter
* Hot Glue
* Clamps
* 2x 1.3 m by .9 m plywood (3 - 4 mm thick) (this area of woood can be changed depending on the size of the layercutter)
* 3d printed knob

In the process of building this dial it was quite simple. We started by making a quick mockup in Fusion360 and using AR software to get a feeling for size. We then focussed on making a paper prototype to see if the shape was truly what we like. We ran across the problem that are original idea was way to large for the actual printer. We scaled it down and cut at an angle but of course the grain was off so there was too much tension on the dial. In the end we altered our design to be a smaller dial case of 30cm diamter that was sat on a larger table. 

#### The Steps to Create the Setup:

1. Model the design in a 3D CAD software
2. Create 2D designs that can be used for the lasercutter
3. Lasercut all the pieces
4. Prepare the knob file for the 3D printer
5. Put the knob onto the printer
6. Once all parts are prepare it is time to assemble. Use the hotglue to attach the wrap around part of the design to the top plate of the dial case.
7. In the mean time build the round table by slotting the two cross parts together and slotting into the cuts on the tabletop. At this time you can add any inforgraphic you might want.
8. Once the glue is dried attach the potentiometer to the top using small screws, add the infographic if desired and attach the printed knob.
9. Take wires from the energy box and lead up to the dial and attach the arduino and powerbank to the potentiometer

## The Outcome

### Created Energy Box
In the end we ended up with an energy box connected to a second box that was able to work based on the angle of the dial on the setup. Based on the degrees the relays would turn on and as the angle went up more and more relays turned on. This allowed for us to control the output based on the dial the person was turning. Effectively taking the inputted movement of the person and outputting electrical current to devices connected. This in turn created a feeling of having the power to power the world.

![WhatsApp Image 2024-05-13 at 17 02 26_214e4848](https://github.com/ChylkemaMDEF/ChylkemaMDEF-MicroChallenge03/assets/147051108/0c7b2375-630c-4baf-83a3-33d687c00efe)

### Display Dial Working and Turning on Devices
The actual final display of the week was the dial setup and having classmates interact with it. The goal of this was to combine the code, electrical box and physical stand to create an experience in which the urgency of the energy issue is shown and people start to engage and think about what this is. There are still a few things we want to changem like the top poster we want to lasercut into the top plate so that it has a bit more of a clean feature. We also need to spend some more time considering what actual outputs we would like and how these could grow based on the amount of relays turned on.

https://github.com/ChylkemaMDEF/ChylkemaMDEF-MicroChallenge03/assets/147051108/75f3b5a2-39b5-4ea5-ab6a-dfa4f91619cd

![WhatsApp Image 2024-05-13 at 17 01 46_ba902437](https://github.com/ChylkemaMDEF/ChylkemaMDEF-MicroChallenge03/assets/147051108/5f61393d-80ca-418a-939c-242a355dbb2a)


## Reflecting and Moving Forward
