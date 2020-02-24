# Feb-24-Assignment
This repository contains the source code of 3 possabilities to turn on a led with one button on the DISCO-L475VG-IOT01A disovery kit.

1. Push the light on with baremetal
2. Push the light on with a thread
3. Push the light on with a eventqueue

# How to compile the source code?
1. Clone or download the repository
2. Open the folder with your MBED OS
3. Change the main.cpp file with one of the source.cpp file
4. Open the Git Bash command and change the directory to the MBED OS
```console
User:~$ cd "c:\[MBED OS PATH]
```
5. Compile the source code (with Flash only changes get compiled)
```console
User:~$ mbed compile -m DISCO_L475VG_IOT01A -t GCC_ARM --flash
```

# How to start on the DISCO-L475VG-IOT01A?
1. Plug in your DISCO-L475VG-IOT01A via Micro-USB cable. A window should open after plugin.
2. Go to [MBED OS Foldername]\BUILD\DISCO_L475VG_IOT01A\GCC_ARM\
3. Search for the [MBED OS Foldername].bin file
4. Move this file to the DIS_L4IOT drive. 

Now a loading window should pop up and the the led beside the Micro-USB port should start blinking in green\red\yellow.
When the led stops blinking the program is loaded and the program is able to use.
