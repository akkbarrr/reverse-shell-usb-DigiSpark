# Reverse Shell USB Digispark
## english
reverse shell usb DigiSpark using board DigiKeyboard.h, command controlled with server TCP & UDP connections netcat listener on port 4444 (whatever port lol) and turn off anti virus windows
## indonesia
reverse shell usb DigiSpark menggunakan board DigiKeyboard.h, perintah di kendalikan dengan server TCP & UDP connections netcat listener di port 4444 (whatever port lol) dan mematikan anti virus windows

## Installation
- Paste the following in the Additional Boards Manager URLs: box of the Preferences dialog box.
```
http://digistump.com/package_digistump_index.json
```
- The image below shows the Additional Boards Manager URLs field of the Preferences dialog box.
![App Screenshot](https://github.com/akkbarrr/reverse-shell-usb-DigiSpark/blob/main/img/arduino-preferences-urls.png?raw=true)
- In the Arduino IDE, use the top menu to navigate to Tools → Board → Boards Manager... to open the Boards Manager dialog box.

Type Digispark into the search field at the top of the Boards Manager dialog box that contains the text "Filter your search..." to easily find the Digispark package.

After filtering the packages, Digistump AVR Boards is displayed in the Boards Manager dialog box. Click the Install button at the bottom right of the Digistump item in the dialog box, as shown in the image below.
![App Screenshot](https://github.com/akkbarrr/reverse-shell-usb-DigiSpark/blob/main/img/digispark-board-package.png?raw=true)
When installation completes, click the Close button at the bottom right of the dialog box.
## Usage
- Run a netcat listener on your terminal : 
```bash
nc -lp 4444
```
- Go to [Revershell Generator](https://www.revshells.com/)
- Change the ip with your own __ip listener__ and change the port to __4444 (or whatever u want)__
- And for the type, i'm using __nc__ for the listener(whatever you have)
- Choose your victim OS, for this i used to run the script in windows
- Choose __PowerShell #3 (Base64)__
- And copy the script
- Download and edit the reversel_shell_Digi.ino DigiSpark and edit the output in __("powershell -e ")__ and paste your own costume __Windows IP & PORT PowerShell(Base64) script,__ powershell script is hosted and compile and load reversel_shell_Digi.ino to your DigiSpark.

Plug in the DigiSpark and enjoy your reverse shell on the host machine!
hope you all enjoy this script and as always use it responsibly!

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
© Akbar IDN, SMK IDN Boarding School
