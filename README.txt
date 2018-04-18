#--------------------------------------Sound Level Sensor ---------------------------
Sound level meter project made by HUAN DO, Feb.2018

This project uses a Raspberry Pi 3 Mode B as a sound sensor. A USB soundcard with microphone and a RJ45 cable are needed as peripheral.
The application runs periodically every second and take record from microphone at a sample rate of 16000Hz.
The sound is then calculated into 80 pieces of RMS value and displayed as a bar chart on terminal screen.
If communication is enabled (condition compilation), the sound will be re-calculated into 8 pieces of Fast Level data and sent out to PHP server program.

List of contents
 1. Configuration: This project makes use of several devices which are listed below:
	* 1 Raspberry Pi 3 device.
        * 1 Straight-through RJ45 cable for Raspberry Pi 3 to access the internet.
 	* 1 16GB SD Card element 14 pre-installed with NOOBS for Raspberry Pi.
 	* 1 USB cable (type A to type B) to power the Raspberry Pi device.
        * 1 sound card for recording sound.
 	* 1 micro phone for recording sound.
        * Internet access and the server.
 2. Installation instructions
	* Insert the SD card into the Raspberry device, and also plug the RJ45 cable in to access the internet.
	* Power on the device by using the USB cable.
        * Initialize the Raspberry device, change its default setting for sound card and network.
	* Check the email for IP address.
	* Use Putty application to remotely interact with Raspberry device.
	* Plug in the sound card along with the microphone.
 3. Operating instructions
 	* Open the Putty terminal, enter the IP address received in the email and then click "Open".
 	* Log in to the device using the name "pi" and accompanying password.
 	* Go to the "appdev" folder by utilizing the command "cd" and then check the presence of all the files by the command "ls".
 	* Type in the command "make" to start the compilation process.
 	* Run the command "./sound.a" to start executing the resulting file.
 	* Using the microphone, start recording the sequence of 1-second WAV files. For each file, the program will calculate the rms value for 
 	  every 200 samples of data, for a total of 80 values.	
 	* For each 10 rms values, one rms value of all of them will be calculated, and finally these 8 pieces of data will be sent to the server 
 	for convenient display.
 4. File mainfest
 	* main.c
 	-This is the root file.
 	* sound.c
 	-This file contains code for extracting information from the WAV file and processes it, then display the result.
 	* sound.h
 	-This is the header file for sound.c
 	* screen.c
 	-This file contains code for displaying the rms result on the screen.
 	* screen.h
 	-This is the header file for screen.c
 	* comm.c
 	-This file contains code for the Raspberry Pi communicating with online server
 	* comm.h
 	-This is the header file for comm.c
 	* makefile
 	-This file sets the rule for the compilation of the code and several other actions
 	* sound.php
 	-This file is stored in the server so as to process the data received from the pi and display to the user
 5. Copyright and license
 	-This project is made by HUAN DO along with the assitance of Dr. GAO CHAO 
 	-RAspberry Pi is a trade mark of the Raspberry Pi Foundation.
 	-The Bluetooth word mark and logos are registed trademarks owned by Bluetooth SIG, Inc. any use of such marks by Raspberry Pi is under lisence.
 	-Other trademarks and trade names are those of their respective owners.
 6. Contatc information
 HUAN DO, e1700708
 Dept. of Information technology
 Vaasa University of Applied Sciences
 Woffintie 30, 65100, Vaasa, Finland
 page: www.cc.puv.fi/~e1700708/
 email: dohuan161298@gmail.com
