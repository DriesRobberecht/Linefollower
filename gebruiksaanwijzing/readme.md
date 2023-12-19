# Gebruiksaanwijzing

### opladen / vervangen batterijen
De batterijen kunnen simpel opgeladen worden met een oplaadstation, een voorbeeld hiervan is de volgende oplader: (https://www.bol.com/be/nl/p/kimo-direct-batterijoplader-complete-set-lader-3-lithium-li-ion-18650-batterijen-power-charger-universeel-aa-aaa-18500-18650-etc-compatibel-met-vele-rechargeable-batteries-10440-14500-16340-16650-18350-18500-18650-26650/9300000003344982/). Het is niet nodig om deze oplader te gebruiken, er zijn ook andere mogelijkheden. om de batterijen te kunnen vervangen zal het soms lastig zijn om deze te verwijderen, een platte schroevendraaier kan hierbij helpen. 

### draadloze communicatie
#### verbinding maken
je hebt 2 mogelijkheden, langs de ene kant kan je communicatie hebben via de laptop, hierbij moet de SerialGate op Serial staan. dit willen we natuurlijk niet als de auto uiteindelijk zou moeten rijden, daarom gaan we gebruik maken van de bluetoothmodule. zorg dat de batterijen goed aangesloten zijn en dat de arduino en de HC-05 module gevoed worden, eens dat de HC-05 oplicht zal je via je bluetoothinstellingen van de gsm verbinding kunnen maken met de module. je zal een paswoord moeten indienen dit is "1234".
eens je via je bluetoothverbinding van je gsm verbonden bent kan je via de app de effectieve verbinding maken via het aangeduide icoontje in de onderstaande afbeelding, als de tekst "connecting to (naam van de HC-05 module) ..." verschijnt is hij aan het proberen een connectie te verkrijgen met de module. dit kan falen zoals je op de tweede regel in de foto ziet, probeer het een tweede keer en ga anders na of de aansluitingen nog goed zitten. als er connected op komt is de HC-05 module perfect verbonden en kan je de commando's heen en weer beginnen versturen.
<img width="301" alt="image" src="https://github.com/DriesRobberecht/Linefollower/assets/146742569/10c27541-0e49-42b3-a3a0-0fddf3ff37f7">

#### commando's
in ons programma hebben we verschillende commando's gestoken die we via de gsm kunnen doorsturen naar de arduino en waar een gevolg aan gekoppeld hebben hieronder een overzichtje van de commando's en wat deze precies doen.
#### debug: 
het commando debug zal alle verschillende waarden doen laten verschijnen, zo kan je zien wat zijn gecalibreerde waarden zijn, zijn genormaliseerde waarde, zijn foutberekening op basis van de zwarte lijn, ...
#### start / stop:
dit is een eenvoudig commando om de auto te laten starten met rijden, zo kunnen we eenvoudig de auto laten starten en stoppen zonder de batterijen steeds te moeten verwijderen 
#### set cycle [µs]:
hiermee kunnen we de cyclustijd van ons programma aanpasssen, het is het tijdsinterval tussen de verschillende keren dat hij alles gaat doorsturen over zijn Serial1.
#### set power [0..255]:
dit commando is om in te stellen hoe snel we onze motors gaan laten draaien, 0 is de waarde voor niks en 255 is de waarde voor het maximum. 
#### set diff [0..1]:
deze parameter zal ervoor zorgen dat de auto niet stilvalt in bochten wegens een te laag vermorgen, versnelt de robot in de bochten? verlaag diff. vertraagt de robot in de bochten/valt hij stil? verhoog diff.
##### set kp [0..]:
de parameter kp zal ervoor zorgen dat de robot sneller/trager bijstuurt als er zich een fout voordoet, stuurt de robot niet snel genoeg bij? verhoog Kp. waggelt de robot over de zwarte lijn? verlaag Kp.
#### set ki [0..]  
#### set kd [0..]  
#### calibrate black:
calibrate black is een commando dat je zal moeten uitvoeren als je de robot met zijn sensoren boven een zwart vlak plaatst, eens hij gecalibreerd is zal de arduino weten dat als hij ongeveer dezelfde waarden binnen krijgt dat de gecalibreerde waarde hij zich boven een zwart deel bevindt.
##### calibrate white:
hetzelfde als calibrate black maar dan voor wit.

### kalibratie
als men de eerste keer gaat rijden op het parcours zal men zwart en wit doen calibreren, dit komt doordat elke andere ruimte andere verlichting heeft en dit impact kan hebben op het uitlezen van de sensorwaarden. calibreren zal je doen om een duidelijk verschil tussen zwart en wit te herkennen.

stap1: om te beginnen zal je de auto op een zwart / wit vlak zetten

stap2: je zal het commando "calibrate black" of "calibrate white" moeten uitvoeren, eens de commentaar "calibrating done" verschijnt zal hij zijn waarden succesvol hebben weggeschreven, je kan deze waarden eens controleren in het debug venster. de waarden zullen ver genoeg uit elkaar moeten liggen zodat hij altijd een duidelijk onderscheid kan zien.

### settings
De robot rijdt stabiel met volgende parameters:  
<img width="283" alt="image" src="https://github.com/DriesRobberecht/Linefollower/assets/146742569/e9e9e944-e7cc-4bd5-80bb-99d99fa256b1">
