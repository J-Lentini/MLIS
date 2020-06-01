# MLIS
The MLIS is a Multi-Well LED Irradiation System created with the purpose to increase the efficiency of laboratory research in Photodynamic Therapy.
More on the Physical device's specifications as well as the specifications of the software materials (GUI, case, etc.) can be read in the Device report PDF. 
The following is a list of what each file within this project relate to as well as information on how to utilize the GUI codes.
The two .f3d files are the 3D print case designs, the .exe file is the user interface application, the .ino file is the file that must be uploaded to the board, and the .zip file is all of these files as a single downloadable file (it also contains the source code for the visual studio project in case anyone would like to alter it).

In order to utilize the device, first the .ino code must be uploaded to the board. After this, the computer application can be opened, and the correct USB port must be connected/selected.
Once the GUI is connected to the USB port containing the Arduino, the LEDs you wish to be activated can be selected and, after the experiment time is specified, the experiment will begin.
