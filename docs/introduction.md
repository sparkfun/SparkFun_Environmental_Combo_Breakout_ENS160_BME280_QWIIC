The [SparkFun Qwiic Environmental Combo Breakout - ENS160/BME280](https://www.sparkfun.com/products/22858) takes care of all your atmospheric-quality sensing needs with the popular ENS160 and BME280 ICs. This unique breakout provides a variety of environmental data, including AQI, TVOCs, equivalent CO<sub>2</sub> (or eCO<sub>2</sub>) levels, barometric pressure, humidity, and temperature.

<center>
<div class="grid cards" style="width:500px;" markdown>

-   <a href="https://www.sparkfun.com/products/22858">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/r/600-600/assets/parts/2/3/0/2/9/22858-_SEN_SparkFun_Environmental_Combo_Breakout-_01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="SparkFun VR IMU Breakout - BNO086 (Qwiic)">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/22858">
      <b>SparkFun Environmental Combo Breakout - ENS160/BME280 (Qwiic)</b>
      <br />
      SEN-22858
      <br />
      <center>[Purchase from SparkFun :fontawesome-solid-cart-plus:](https://www.sparkfun.com/products/22858){ .md-button .md-button--primary }</center>
    </a>

</div>
</center>

<div style="text-align: center;">
  <iframe width="560" height="315" src="https://www.youtube.com/embed/78wqEFfHv_c?si=gWOqpgGb7HURjOYh" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>
</div>

In this tutorial, we'll go over the hardware and how to hookup the sensor to an Arduino. We will also go over the basic Arduino examples to get started!



### Required Materials

To follow along with this tutorial, you will need the following materials. You may not need everything though depending on what you have. Add it to your cart, read through the guide, and adjust the cart as necessary.

* 1x [SparkFun RedBoard Qwiic [DEV-15123]](https://www.sparkfun.com/products/15123)
* 1x [USB micro-B Cable - 6 Foot [CAB-10215]](https://www.sparkfun.com/products/10215)
* 1x [SparkFun Environmental Combo Breakout - ENS160/BME280 (Qwiic) [SEN-22858]](https://www.sparkfun.com/products/22858)
* 1x Qwiic Cable
    * [Flexible Qwiic Cable - 50mm [PRT-17260]](https://www.sparkfun.com/products/17260), for short distances
    * [Flexible Qwiic Cable - 500mm [PRT-17257]](https://www.sparkfun.com/products/17257), for those that need to wire the board farther away from your microcontroller

<div class="grid cards hide col-4" markdown>

-   <a href="https://www.sparkfun.com/products/15123">
      <figure markdown>
        <img src="https://cdn.sparkfun.com//assets/parts/1/3/4/9/2/15123-SparkFun_RedBoard_Qwiic-01a.jpg" style="width:140px; height:140px; object-fit:contain;" alt="SparkFun RedBoard Qwiic">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/15123">
      <b>SparkFun RedBoard Qwiic</b>
      <br />
      WRL-19177
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/10215">
      <figure markdown>
        <img src="https://cdn.sparkfun.com//assets/parts/4/5/5/8/10215-02.jpg" style="width:140px; height:140px; object-fit:contain;" alt="USB micro-B Cable - 6 Foot">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/10215">
      <b>USB micro-B Cable - 6 Foot</b>
      <br />
      CAB-15092
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/22858">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/r/600-600/assets/parts/2/3/0/2/9/22858-_SEN_SparkFun_Environmental_Combo_Breakout-_01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="SparkFun Environmental Combo Breakout - ENS160/BME280 (Qwiic)">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/22858">
      <b>SparkFun Environmental Combo Breakout - ENS160/BME280 (Qwiic)</b>
      <br />
      SEN-22858
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/17260">
      <figure markdown>
        <img src="https://cdn.sparkfun.com//assets/parts/1/6/2/4/7/17260-Flexible_Qwiic_Cable_-_50mm-01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Flexible Qwiic Cable - 50mm">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/17260">
      <b>Flexible Qwiic Cable - 50mm</b>
      <br>
      PRT-17260
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->

</div>



### Tools (Optional)

For those that need to solder to the PTHs, you will need to solder two wires between your microcontroller and the breakout board. This requires some assembly and soldering. You may already have a few of these items but if not, the tools and hardware below help with that assembly.

* [Hook-Up Wire - Assortment (Stranded, 22 AWG) [PRT-11375]](https://www.sparkfun.com/products/11375)
* [Wire Stripper - 20-30 AWG Solid (22-32 AWG Stranded) [TOL-22263]](https://www.sparkfun.com/products/22263)
* [Soldering Iron [TOL-14456]](https://www.sparkfun.com/products/14456)
* [Solder Lead Free - 15-gram Tube [TOL-9163]](https://www.sparkfun.com/products/9163)

<div class="grid cards hide col-4" markdown>

-   <a href="https://www.sparkfun.com/products/11375">
      <figure markdown>
        <img src="https://cdn.sparkfun.com//assets/parts/7/1/2/0/11375-Hook-Up_Wire_-_Assortment__Solid_Core__22_AWG_-01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Hook-Up Wire - Assortment (Stranded, 22 AWG)">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/11375">
      <b>Hook-Up Wire - Assortment (Stranded, 22 AWG)</b>
      <br />
      PRT-11375
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/22263">
      <figure markdown>
        <img src="https://cdn.sparkfun.com//assets/parts/2/2/2/0/1/22263-_TOL_Wire_Stripper-_01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Wire Stripper - 20-30 AWG Solid (22-32 AWG Stranded)">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/22263">
      <b>Wire Stripper - 20-30 AWG Solid (22-32 AWG Stranded)</b>
      <br />
      TOL-22263
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/14456">
      <figure markdown>
        <img src="https://cdn.sparkfun.com//assets/parts/1/2/4/9/0/14456-01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Soldering Iron - 60W (Adjustable Temperature)">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/14456">
      <b>Soldering Iron - 60W (Adjustable Temperature)</b>
      <br />
      TOL-14456
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/9163">
      <figure markdown>
        <img src="https://cdn.sparkfun.com//assets/parts/2/5/8/7/09162-02-L.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Solder Lead Free - 15-gram Tube">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/9163">
      <b>Solder Lead Free - 15-gram Tube</b>
      <br>
      TOL-09163
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
</div>



### Suggested Reading

If you aren't familiar with the Qwiic Connection System, we recommend reading [here for an overview](https://www.sparkfun.com/qwiic).

<div style="text-align: center">
  <table style="border-style:none">
    <tr>
     <td style="text-align: center; vertical-align: middle;">
     <div style="text-align: center"><a href="https://www.sparkfun.com/qwiic"><img src="../assets/Qwiic-registered-updated.png" alt="Qwiic Connection System" title="Click to learn more about the Qwiic Connection System!"></a>
     </div>
    </td>
    </tr>
    <tr>
      <td style="text-align: center; vertical-align: middle;"><div style="text-align: center"><i><a href="https://www.sparkfun.com/qwiic">Qwiic Connection System</a></i></div></td>
    </tr>
  </table>
</div>

If you aren’t familiar with the following concepts, we also recommend checking out a few of these tutorials before continuing.

<div class="grid cards hide col-4" markdown>

-   <a href="https://learn.sparkfun.com/tutorials/redboard-qwiic-hookup-guide">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/8/4/4/15123-SparkFun_RedBoard_Qwiic-01.jpg"style="width:264px; height:148px; object-fit:contain;" alt="RedBoard Qwiic Hookup Guide">
      </figure>
    </a>

    ---

    <a href="https://learn.sparkfun.com/tutorials/redboard-qwiic-hookup-guide">
      <b>RedBoard Qwiic Hookup Guide</b>
    </a>
<!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->
-   <a href="https://learn.sparkfun.com/tutorials/sparkfun-indoor-air-quality-sensor---ens160-qwiic-hookup-guide">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/2/7/1/5/ENS160-_05.jpg"style="width:264px; height:148px; object-fit:contain;" alt="SparkFun Indoor Air Quality Sensor - ENS160 (Qwiic) Hookup Guide">
      </figure>
    </a>

    ---

    <a href="https://learn.sparkfun.com/tutorials/sparkfun-indoor-air-quality-sensor---ens160-qwiic-hookup-guide">
      <b>SparkFun Indoor Air Quality Sensor - ENS160 (Qwiic) Hookup Guide</b>
    </a>
<!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->
-   <a href="https://learn.sparkfun.com/tutorials/qwiic-atmospheric-sensor-bme280-hookup-guide/">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/9/2/9/Assembly_RedBoard.jpg"style="width:264px; height:148px; object-fit:contain;" alt="Qwiic Atmospheric Sensor (BME280) Hookup Guide">
      </figure>
    </a>

    ---

    <a href="https://learn.sparkfun.com/tutorials/qwiic-atmospheric-sensor-bme280-hookup-guide/">
      <b>Qwiic Atmospheric Sensor (BME280) Hookup Guide</b>
    </a>
<!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->
-   <a href="https://learn.sparkfun.com/tutorials/i2c">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/8/2/I2C-Block-Diagram.jpg" style="width:264px; height:148px; object-fit:contain;" alt="I2C">
      </figure>
    </a>

    ---

    <a href="https://learn.sparkfun.com/tutorials/i2c">
      <b>I2C</b>
    </a>
<!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->
-   <a href="https://learn.sparkfun.com/tutorials/terminal-basics">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/learn_tutorials/1/1/2/terminalThumb.jpg" style="width:264px; height:148px; object-fit:contain;" alt="Serial Terminal Basics">
      </figure>
    </a>

    ---

    <a href="https://learn.sparkfun.com/tutorials/terminal-basics">
      <b>Serial Terminal Basics</b>
    </a>
<!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->
-   <a href="https://learn.sparkfun.com/tutorials/installing-an-arduino-library">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/b/e/4/b/2/50f04b99ce395fd95e000001.jpg" style="width:264px; height:148px; object-fit:contain;" alt="Installing an Arduino Library">
      </figure>
    </a>

    ---

    <a href="https://learn.sparkfun.com/tutorials/installing-an-arduino-library">
      <b>Installing an Arduino Library</b>
    </a>
<!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->
</div>
