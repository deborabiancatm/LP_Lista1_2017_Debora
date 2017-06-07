#!/bin/sh
echo $1
wget -nd -r -l 2 -A jpeg,jpg,png,gif  $1
