@set MK=m328p
@set PRG=arduino
@set BAUD=57600
@set PORT=COM3
@set FLASHFILE=mega328p_led\Debug\mega328p_led.hex
@set AVRDUDEPATH=C:\avrdude\

%AVRDUDEPATH%avrdude -p %MK% -c %PRG% -b %BAUD% -P %PORT% -U flash:w:%FLASHFILE%

:: Manual run:
:: c:\avrdude>avrdude -p m328p -c arduino -b 57600 -P COM3 -U flash:w:"c:\src\mega3
:: 	28p_led\mega328p_led\Debug\mega328p_led.hex":i