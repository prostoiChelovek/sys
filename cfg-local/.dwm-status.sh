#!/bin/sh

set -e

while true; do
    bat="$(cat /sys/class/power_supply/BAT1/capacity) %"
    time="$(date '+%R')"
    
    xprop -root -set WM_NAME "$time    $bat"

    sleep 30
done

