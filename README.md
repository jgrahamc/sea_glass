# Sea Glass

This code drives a string of four [Adafruit
Neopixel](https://www.adafruit.com/category/168) LEDs connected to an
[AdaFruit 5V Trinket](https://www.adafruit.com/product/1501) causing
the four LEDs to glow white with varying brightness that emulates the
rhythm of human breathing.

![Sea Glass](images/sea_glass.jpg?raw=true)

It's used to power four LEDs hidden inside a collection of sea glass
found on a beach and kept inside an old glass jar. It makes a simple
night light.

[![Video of the Breathing Night Light](https://img.youtube.com/vi/ffN5xQI3ER4/0.jpg)](https://www.youtube.com/watch?v=ffN5xQI3ER4)

# Parts

This little project was made from things I had lying around or found:

1. An [AdaFruit 5V Trinket](https://www.adafruit.com/category/168)
2. Four LEDs cut from a strip ot [AdaFruit Neopixel](https://www.adafruit.com/product/1501)
3. An old wall wart adapter giving 5V @ 2000mA
4. A glass that had previously held a candle
5. Sea glass picked up on a beach
6. Some [Kintsu Glue](http://www.loctite-consumer.co.uk/en/products/kintsuglue.html)

# Steps

I first drilled a hole in the glass using a ceramic drill. The whole
is there do that the cable from the wall wart can pass through. To
protect the cable once in place I use the Kintsu Glue to make a little
strain relief grommet. It also covers the sharp edges of the drilled
glass.

![Drilled glass](images/drilled_glass.jpg?raw=true "Hole Drilled in Glass")
![Strain Relief](images/strain.jpg?raw=true "Kintsu Strain Relief")

The code is pretty simple. It uses the [AdaFruit Neopixel
library](https://github.com/adafruit/Adafruit_NeoPixel) to drive the
four LEDs. The LEDS are literally cut with scissors from a strip and
then bent into a circle and super-glued together.

![Circuit Close up](images/circuit.jpg?raw=true)

There are just three wires to solder:

1. +5V from wall wart goes to the Neopixel strip and BAT+ on the Trinket
2. GND goes to the Neopixel strip and GND on the Trinket
3. A single wire goes from PIN #0 on the Trinket to the Neopixel data line

![Assembled](images/assembled.jpg?raw=true)

The electronics are simply buried in the sea glass.

![Buried in Sea Glass](images/buried1.jpg?raw=true)
![Buried in Sea Glass](images/buried2.jpg?raw=true)
