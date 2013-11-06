byteoscilloscope
================

This small tool plots an ever-updating graph of byte values on stdin. 
Originally used with pamon to gaze at the sounds of an overnight train.

Recommended usage:
    pamon --format=u8 --rate=1200 | ./osc

Note: rate depends on your terminal's ability to display lots of lines in a short time: 
xterm manages to survive rates up to 20kHz on my laptop. Xfce's terminal can't munge even 3.125kHz. YMMV.
