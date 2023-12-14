# Gebruiksaanwijzing

### opladen / vervangen batterijen
De batterijen kunnen simpel opgeladen worden met een oplaadstation, een voorbeeld hiervan is de volgende oplader: (https://www.bol.com/be/nl/p/kimo-direct-batterijoplader-complete-set-lader-3-lithium-li-ion-18650-batterijen-power-charger-universeel-aa-aaa-18500-18650-etc-compatibel-met-vele-rechargeable-batteries-10440-14500-16340-16650-18350-18500-18650-26650/9300000003344982/). Het is niet nodig om deze oplader te gebruiken, er zijn ook andere mogelijkheden. om de batterijen te kunnen vervangen zal het soms lastig zijn om deze te verwijderen, een platte schroevendraaier kan hierbij helpen. 

### draadloze communicatie
#### verbinding maken
je hebt 2 mogelijkheden, langs de ene kant kan je communicatie hebben via de laptop, hierbij moet de SerialGate op Serial staan. dit willen we natuurlijk niet als de auto uiteindelijk zou moeten rijden, dan gaan we gebruik maken van de bluetoothmodule. zorg dat de batterijen goed aangesloten zijn en dat de arduino en de HC-05 module gevoed worden, eens dat de HC-05 oplicht zal je via je bluetoothinstellingen van de gsm verbinding kunnen maken met de module.

#### commando's
debug [on/off]  
start  
stop  
set cycle [µs]  
set power [0..255]  
set diff [0..1]  
set kp [0..]  
set ki [0..]  
set kd [0..]  
calibrate black  
calibrate white  

### kalibratie
uitleg kalibratie  

### settings
De robot rijdt stabiel met volgende parameters:  

### start/stop button
uitleg locatie + werking start/stop button
