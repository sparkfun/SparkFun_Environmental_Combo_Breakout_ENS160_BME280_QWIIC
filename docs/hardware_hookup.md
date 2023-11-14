### Connecting via Qwiic

Connecting to the Qwiic Environmental Combo Breakout - ENS160/BME280 is simple. You will just need a microcontroller and a Qwiic cable. In this case, we used an ATmega328P as the microcontroller (we specifically tested the Arduino Libraries with the SparkFun RedBoard Qwiic). Insert one end of the Qwiic cable into the Qwiic Environmental Combo Breakout's Qwiic connector and the other end of the cable to your microcontroller's Qwiic connector. Then insert a USB cable into the RedBoard Qwiic to power and program.

<div style="text-align: center;">
  <table>
    <tr style="vertical-align:middle;">
     <td style="text-align: center; vertical-align: middle;"><a href="../assets/img/22858-SEN_Environmental_Combo_Sensor_ENS160_BME280.jpg"><img src="../assets/img/22858-SEN_Environmental_Combo_Sensor_ENS160_BME280.jpg" height="600px" width="600px" alt="Basic Hookup with RedBoard Qwiic, Qwiic cable, and Qwiic Environmental Combo Breakout - ENS160/BME280"></a></td>
    </tr>
  </table>
</div>



### Connecting via PTH I<sup>2</sup>C and Interrupt Pins

!!! note
    For temporary connections to the PTHs, you could use IC hooks to test out the pins. However, you'll need to solder headers or wires of your choice to the board for a secure connection. You can choose between a combination of [header pins and jumper wires](https://learn.sparkfun.com/tutorials/how-to-solder-through-hole-soldering/all), or [stripping wire and soldering the wire](https://learn.sparkfun.com/tutorials/working-with-wire/all) directly to the board.

    <div class="grid cards col-4" markdown>

    -   <a href="https://learn.sparkfun.com/tutorials/how-to-solder-through-hole-soldering/all">
          <figure markdown>
            <img src="https://cdn.sparkfun.com/assets/learn_tutorials/5/Soldering_Action-01.jpg"style="width:264px; height:148px; object-fit:contain;" alt="How to Solder: Through Hole Soldering">
          </figure>
        </a>

        ---

        <a href="https://learn.sparkfun.com/tutorials/how-to-solder-through-hole-soldering/all">
          <b>How to Solder: Through Hole Soldering</b>
        </a>
    <!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->

    -   <a href="https://learn.sparkfun.com/tutorials/working-with-wire/all">
          <figure markdown>
            <img src="https://cdn.sparkfun.com/assets/0/5/0/0/f/5138de3cce395fbb1b000002.JPG" style="width:264px; height:148px; object-fit:contain;" alt="Working with Wire">
          </figure>
        </a>

        ---

        <a href="https://learn.sparkfun.com/tutorials/working-with-wire/all">
          <b>Working with Wire</b>
        </a>
    <!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->
    </div>

For users that are connecting to the PTH I<sup>2</sup>C and interrupt pins on the edge of the board, you will need to connect the RedBoard Qwiic and sensor like the table listed below. For users that are connecting to a different microcontroller, make sure to connect to its respective pins for the I<sup>2</sup>C and interrupt pins as they may be defined differently.

<div style="text-align: center;">
    <table>
        <tr>
            <th style="text-align: center; border: solid 1px #cccccc;">RedBoard Qwiic
            <br />(I/O set to 3.3V!)
            </th>
            <th style="text-align: center; border: solid 1px #cccccc;">Environmental Combo Breakout <br />ENS160/BME280 (Qwiic)
            </th>
        </tr>
        <tr>
            <td style="text-align: center; border: solid 1px #cccccc;" bgcolor="#f2dede"><font color="#000000">3.3V</font>
            </td>
            <td style="text-align: center; border: solid 1px #cccccc;" bgcolor="#f2dede"><font color="#000000">3.3V</font>
            </td>
        </tr>
        <tr>
            <td style="text-align: center; border: solid 1px #cccccc;" bgcolor="#DDDDDD"><font color="#000000">GND</font>
            </td>
            <td style="text-align: center; border: solid 1px #cccccc;" bgcolor="#DDDDDD"><font color="#000000">GND</font>
            </td>
        </tr>
        <tr>
            <td style="text-align: center; border: solid 1px #cccccc;" bgcolor="#fff3cd"><font color="#000000">SCL (A5)</font>
            </td>
            <td style="text-align: center; border: solid 1px #cccccc;" bgcolor="#fff3cd"><font color="#000000">SCL</font>
            </td>
        </tr>
        <tr>
            <td style="text-align: center; border: solid 1px #cccccc;" bgcolor="#cce5ff"><font color="#000000">SDA (A4)</font>
            </td>
            <td style="text-align: center; border: solid 1px #cccccc;" bgcolor="#cce5ff"><font color="#000000">SDA</font>
            </td>
        </tr>    
        <tr>
            <td style="text-align: center; border: solid 1px #cccccc;" bgcolor="#cce5ff"><font color="#000000">2</font>
            </td>
            <td style="text-align: center; border: solid 1px #cccccc;" bgcolor="#cce5ff"><font color="#000000">INT</font>
            </td>
        </tr>
    </table>
</div>

Note that you will also need to also make sure that the logic levels are matched to 3.3V if you are not connecting the Qwiic connector (this connector has built-in logic level circuits on the I<up>2</sup>C data and clock lines). The default for the RedBoard Qwiic is set to 5V so you will need to cut the trace and add a solder blob between the center pad and the pad close to the 3.3V label.

<div style="text-align: center;">
  <table>
    <tr style="vertical-align:middle;">
     <td style="text-align: center; vertical-align: middle;"><a href="https://cdn.sparkfun.com/assets/learn_tutorials/8/4/4/Qwiic_Redboard_-_IO_Jumper.JPG"><img src="https://cdn.sparkfun.com/assets/learn_tutorials/8/4/4/Qwiic_Redboard_-_IO_Jumper.JPG" height="300px" width="300px" alt="RedBoard Qwiic I/O Jumper Highlighted"></a></td>
    </tr>
  </table>
</div>

!!! note
    For users using the [RedBoard Plus](https://www.sparkfun.com/products/18158), there is a I/O switch available as opposed to an I/O jumper. You could flip the switch toward the 3.3V side to set the logic level as well.
    <div style="text-align: center;">
      <table>
        <tr style="vertical-align:middle;">
         <td style="text-align: center; vertical-align: middle;"><a href="https://cdn.sparkfun.com/assets/learn_tutorials/1/7/5/8/18158-SparkFun_RedBoard_Plus_IO_Logic_Switch.jpg"><img src="https://cdn.sparkfun.com/assets/learn_tutorials/1/7/5/8/18158-SparkFun_RedBoard_Plus_IO_Logic_Switch.jpg" height="300px" width="300px" alt="RedBoard Plus I/O Switch Highlighted"></a></td>
        </tr>
      </table>
    </div>
