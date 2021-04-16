#!/bin/sh
ifconfig | grep 'ether' | awk '{print $2}'

#funciona tambem
#cut -b 15-31