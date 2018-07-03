# arduino-mp3-player

{::nomarkdown}<IMG SRC=http://theweeks.org/tmp/PICS/LCBB/LCBB_mp3/LCBB_DFPlayer+speaker+tm1637LCD.png align=right width=150>{:/} This class was written to take LCBB workshop participants through the steps of building their own Arduino controlled MP3 Player. The build doc for stepping through the PDF above/in this repo. Here's a diagram of the completed MP3 player project.

Several of the steps in this workshop also call on/require the LCBB Arduino Cook Book with the requisite Arduino recipes located here: https://github.com/LetsCodeBlacksburg/arduino-recipes/blob/master/LCBB_Arduino_Cookbook.pdf

## Recommended Hardware
{::nomarkdown}<A HREF=http://theweeks.org/tmp/PICS/LCBB/DFPlayer_Mini_Manual.pdf target=_new><IMG SRC=http://theweeks.org/tmp/PICS/LCBB/LCBB_mp3/LCBB_DFPlayer.jpg align=right width=150></A>{:/}
The hardware in this project is centered around the DFRobot "DFPlayer Mini MP3 Player" which can be found on Amazon for around $8-10(US) or direct from China for around $2-3.  We do recommend using arduinos with built in 3-pin SVG server/sensor headers such as the Funduino or sensor shield. Here's the complete parts list:
* 1 – Arduino board (w/SVG headers or sensor shield) - ex: https://www.amazon.com/dp/B072P13CWC
* 1 – 9v Alkaline Battery w/clip & barrel connector - ex: https://www.amazon.com/dp/B0764MDPK3
* 1 – DFPlayer mini, serial controllable MP3 player - ex: https://www.amazon.com/dp/B077XS7XQK
* 1 – 1-4G µSD/TF card (w/mp3 sounds or music preloaded) - ex: https://www.amazon.com/dp/B00J090WZA
* 1 – Speaker (4-8ohm, 3W max) - ex: https://www.amazon.com/dp/B078KXQG17
* 1 – TM1637 4 x 7-segment LED module (1-wire) - ex: https://www.amazon.com/dp/B06XRXQ5TQ
* 2 - 1kΩ resistors (for MP3 serial lines) - ex: https://www.amazon.com/dp/B0185FGTSS
* 1 – IR remote & sensor (not used yet) - ex: https://www.amazon.com/dp/B071DP1XVF
* 14 – Female/Female dupont connecting wires (assumes SVG connections) - ex: https://www.amazon.com/dp/B073X7P6N2 
* (opt) - breadboard (if building other things like buttons, etc) - ex: https://www.amazon.com/dp/B01K47FYM2/
(all parts MUCH cheaper from AliExpress.com)

All LCBB code and related materials are copy left (open sourced) under the Creative Commons (CC)(BY)(SA)[1] License.

[1] - https://en.wikipedia.org/wiki/Creative_Commons_license#Types_of_licenses
